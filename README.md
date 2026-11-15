# Pengenalan Pemrograman 26/27

Kumpulan studi kasus dan evaluasi praktikum mata kuliah **Pengenalan Pemrograman** tahun ajaran 2026/2027.
Seluruh kode ditulis menggunakan **C++**.

## Struktur

```
.
├── studi-kasus/          # Langkah praktikum (programN_*.cpp) per modul
├── evaluasi-praktikum/   # Lembar evaluasi (soalN_*.cpp + jawaban.md untuk soal teori)
└── Asistensi/            # Kunci jawaban ujian asistensi
```

| Modul | Materi | Folder |
|---|---|---|
| 1 | Konsep Dasar Pemrograman | `modul-01-konsep-dasar-pemrograman` |
| 2 | Tipe Data dan Operator | `modul-02-tipe-data-dan-operator` |
| 3 | Percabangan If-Else | `modul-03-percabangan-if-else` |
| 4 | Percabangan Switch-Case | `modul-04-percabangan-switch-case` |
| 5 | Perulangan For | `modul-05-perulangan-for` |
| 6 | Perulangan While & Do-While | `modul-06-perulangan-while-do-while` |
| 7 | Procedure | `modul-07-procedure` |
| 8 | Function | `modul-08-function` |

Setiap folder modul ada di dalam `studi-kasus/` dan `evaluasi-praktikum/`.

| Asistensi | Materi | File |
|---|---|---|
| II | Modul 5 – 8: Bank Sampah "UMI Hijau" (for, while/do-while, procedure, function) | `Asistensi/AsistensiII.cpp` |

**File `.exe` Modul 7 dan 8:** setiap program Modul 7 dan 8 juga tersedia dalam versi Windows (`.exe`) di samping file `.cpp`-nya. File ini bisa langsung dijalankan di Windows 64-bit tanpa memasang compiler.

## Catatan

- Stambuk disimpan sebagai `string` (atau `long long`), karena angka 11 digit melebihi batas tipe `int`.
- Modul 2 Program 6: contoh output di modul menulis 82.50, tetapi rumus `(80 + 75 + 90) / 3` menghasilkan 81.67. Program mengikuti rumus.
- Modul 3 Program 3: kode di modul memakai `int nim`, yang overflow untuk input `13020260001`. Diganti `long long`.
- Modul 7 Evaluasi 1: tarif layanan cetak tidak disebutkan di modul. Dipakai asumsi Print Hitam Putih Rp500, Print Warna Rp1.500, Fotokopi Rp300, dan Scan Rp1.000 per lembar.
- Modul 7 Evaluasi 3: tarif air ditentukan oleh total pemakaian (misalnya 15 m³ seluruhnya Rp3.000/m³), bukan tarif bertingkat.
- Modul 7 Evaluasi 4: harga paket tidak disebutkan di modul. Dipakai asumsi Harian Rp10.000, Mingguan Rp50.000, dan Bulanan Rp150.000.
- Modul 8 Program 2: input dibaca sebagai `string` lalu diubah dengan `stod()`, dan hasil ditampilkan lewat `to_string()`. Faktorial dibatasi 0–12 karena 13! melebihi kapasitas `int`.
- Modul 8 Program 3 dan Evaluasi 3: array belum dibahas, jadi setiap function memperbarui hasil sementara (total, min, max, genap, ganjil) setiap kali satu bilangan diinput.
- Modul 8 Program 4: harga barang tidak disebutkan di modul. Dipakai asumsi (beli/jual) Buku Rp4.000/Rp5.000, Pensil Rp1.500/Rp2.000, Pulpen Rp2.500/Rp3.500, Penghapus Rp1.000/Rp1.500.
- Modul 8 Evaluasi 1: aturan lembur tidak disebutkan. Dipakai asumsi jam normal 40 jam, kelebihannya dibayar 1,5 × tarif per jam.
- Modul 8 Evaluasi 2: tarif tidak disebutkan. Dipakai tarif blok bertingkat Rp1.000/kWh (100 kWh pertama), Rp1.500/kWh (101–200), Rp2.000/kWh (di atas 200), ditambah administrasi Rp5.000.
- Modul 8 Evaluasi 5: besar diskon tidak disebutkan. Dipakai asumsi diskon belanja 10% (≥ Rp500.000) atau 5% (≥ Rp250.000), ditambah diskon member 5%.
- Modul 8 Evaluasi 10: transaksi valid jika harga beli, harga jual, dan jumlah lebih dari 0. Transaksi tidak valid tidak ikut dijumlahkan.

## Cara compile & menjalankan

Butuh compiler C++ (misalnya `g++` dari MinGW di Windows, atau `build-essential` di Linux).

```bash
g++ -std=c++17 -Wall -o program main.cpp
./program        # Linux / macOS
program.exe      # Windows
```
