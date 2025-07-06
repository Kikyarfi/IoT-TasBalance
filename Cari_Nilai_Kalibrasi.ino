#include "HX711.h"

#define DOUT 16  // DT ke GPIO 16
#define SCK   4  // SCK ke GPIO 4

HX711 scale;

long zero_factor = 0;
float calibration_factor = 1.0;

const float known_weight = 600.0;    // Berat beban diketahui (gram)
const int readings_count = 10;       // Pembacaan untuk rata-rata

void setup() {
  Serial.begin(115200);
  scale.begin(DOUT, SCK);

  Serial.println("=== Auto‑Calibration Load Cell ===");
  Serial.println("Pastikan load cell kosong...");
  delay(3000);

  scale.set_scale();     // Gunakan skala default (1.0)
  scale.tare();          // Nol-kan saat tidak ada beban

  zero_factor = scale.read_average(readings_count);
  Serial.print("Zero factor (tanpa beban): ");
  Serial.println(zero_factor);

  Serial.print("\nLetakkan beban diketahui (");
  Serial.print(known_weight);
  Serial.println(" gram)...");
  delay(5000);

  long raw_with_load = scale.read_average(readings_count);
  Serial.print("Raw reading dengan beban: ");
  Serial.println(raw_with_load);

  long raw_diff = raw_with_load - zero_factor;
  calibration_factor = (float)raw_diff / known_weight;

  Serial.println("\n=== Hasil Kalibrasi ===");
  Serial.print("Calibration factor: ");
  Serial.println(calibration_factor, 4);
  Serial.println("Mulai pembacaan berat...");
  
  // Gunakan calibration factor, tapi TIDAK melakukan tare lagi
  scale.set_scale(calibration_factor);
  // scale.tare(); ← Dihilangkan seperti permintaan
}

void loop() {
  float weight = scale.get_units(readings_count);
  if (weight < 0) weight = 0;

  Serial.print("Berat: ");
  Serial.print(weight, 2);
  Serial.println(" gram");

  delay(500);
}
