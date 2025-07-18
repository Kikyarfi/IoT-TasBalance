# 🎒 TasBalance

**TasBalance** adalah sistem **IoT (Internet of Things)** yang dirancang untuk mendeteksi beban berlebihan pada tas berdasarkan **usia, berat badan, tinggi badan**, dan **kendala kesehatan** pengguna. Aplikasi ini membantu mencegah cedera tulang belakang dengan memberi **rekomendasi berat tas yang aman** dan memantau berat tas **secara real-time**.


---

## 🚀 Fitur Utama

### ✅ Pengukuran Berat Tas
- Menggunakan **Load Cell HX711** yang terhubung ke **ESP32** untuk mendeteksi berat tas secara akurat.

### ✅ Mode Pengguna
- Pilihan mode:
  - 👦 Anak Sekolah
  - 🎓 Mahasiswa / Dewasa
  - 👴 Lansia / Kendala Medis
- Setiap mode memiliki batas berat tas berdasarkan **standar kesehatan**.

### ✅ Rekomendasi Berat Aman
- Berdasarkan:
  - Usia
  - Berat badan
  - Tinggi badan
  - Riwayat/kondisi kesehatan
- Sistem menghitung dan menampilkan **batas aman berat tas**.

### ✅ Web Dashboard (ESP32)
- Menampilkan **berat tas secara real-time**.
- Memberikan **peringatan jika melebihi batas aman**.
- Menyediakan **grafik statistik** berat tas dalam periode tertentu.
- Menampilkan **log berat tas** yang tersimpan di memori ESP32.

### ✅ Reset Data Statistik
- Pengguna dapat menghapus log berat tas dari dashboard.

### ✅ Peringatan Beban Berlebih
- Notifikasi di dashboard jika berat melebihi rekomendasi aman.


---
## ⚙️ Contoh Hasil Desain TasBalance yang diharapkan:
![hifi](https://github.com/user-attachments/assets/7131eece-df6d-4223-9671-6c07d62e2694)
## ⚙️ Cara Kerja Sistem

1. Pengguna meletakkan tas di atas **sensor Load Cell**.
2. **ESP32** membaca berat tas dan menampilkannya di **dashboard web**.
3. Pengguna memilih **mode pengguna**, dan sistem menghitung batas aman.
4. Jika berat tas melebihi batas, akan muncul **peringatan**.
5. Data berat disimpan dan divisualisasikan dalam bentuk **grafik statistik**.
6. Pengguna bisa melakukan **reset data** melalui dashboard.

## ⚙️ Contoh Hasil Input Pengguna
![gambar](https://github.com/user-attachments/assets/2b632950-f622-4ddf-b832-7638b9ca3257)
## ⚙️ Contoh Hasil Tampilan Dashboard
![gambar](https://github.com/user-attachments/assets/248ac3a7-5aeb-4624-b65e-f79791cca9d3)
## ⚙️ Contoh Hasil Tampilan Menu Riwayat
![gambar](https://github.com/user-attachments/assets/8550a397-0ad4-4a8a-bf9b-b158bcf7f966)



---

## 🌟 Keunggulan TasBalance

- ✔ Membantu mencegah **cedera dan masalah tulang belakang**.
- ✔ Tampilan **web dashboard** yang **sederhana dan responsif**.
- ✔ Bisa diakses via **smartphone tanpa aplikasi tambahan**.
- ✔ Cocok untuk **anak-anak, pelajar, dewasa, hingga lansia**.
- ✔ Data disimpan **lokal di ESP32** untuk analisis lebih lanjut.

---

## 🔧 Teknologi yang Digunakan

- ESP32 (microcontroller)
- Sensor Load Cell + HX711
- Web Server (ESP32 Async Web Server)
- HTML, CSS, JavaScript (untuk dashboard)
- EEPROM / SPIFFS (untuk penyimpanan data)

---

## Diagram 
![1 drawio](https://github.com/user-attachments/assets/d3f49ce5-eaf3-4f8e-bb7b-f4fa5842f9f6)
