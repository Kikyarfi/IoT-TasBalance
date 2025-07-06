#include "HX711.h"

#define DOUT 16  // DOUT HX711 ke GPIO 16
#define SCK   4  // SCK  HX711 ke GPIO 4

HX711 scale;

// Gunakan nilai hasil kalibrasi kamu
const float calibration_factor = 214.3917;

void setup() {
  Serial.begin(115200);
  Serial.println("=== Timbangan Digital ===");

  scale.begin(DOUT, SCK);
  scale.set_scale(calibration_factor);

  // Lakukan tare hanya sekali jika ingin pembacaan dimulai dari nol
  scale.tare();

  Serial.println("Timbangan siap. Membaca berat...");
}

void loop() {
  float weight = scale.get_units(5);  // Rata-rata dari 5 pembacaan

  // Hindari pembacaan negatif
  if (weight < 0) weight = 0;

  Serial.print("Berat: ");
  Serial.print(weight, 2);
  Serial.println(" gram");

  delay(500);
}
