# Pengenalan Pemrograman 26/27

Kumpulan studi kasus dan evaluasi praktikum mata kuliah **Pengenalan Pemrograman** tahun ajaran 2026/2027.
Seluruh kode ditulis menggunakan **C++**.

## Struktur

```
.
├── studi-kasus/          # Langkah praktikum (programN_*.cpp) per modul
└── evaluasi-praktikum/   # Lembar evaluasi (soalN_*.cpp + jawaban.md untuk soal teori)
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

Setiap folder modul ada di dalam `studi-kasus/` dan `evaluasi-praktikum/`.

## Catatan

- Stambuk disimpan sebagai `string` (atau `long long`), karena angka 11 digit melebihi batas tipe `int`.
- Modul 2 Program 6: contoh output di modul menulis 82.50, tetapi rumus `(80 + 75 + 90) / 3` menghasilkan 81.67. Program mengikuti rumus.
- Modul 3 Program 3: kode di modul memakai `int nim`, yang overflow untuk input `13020260001`. Diganti `long long`.
- Modul 7 Evaluasi 1: tarif layanan cetak tidak disebutkan di modul. Dipakai asumsi Print Hitam Putih Rp500, Print Warna Rp1.500, Fotokopi Rp300, dan Scan Rp1.000 per lembar.
- Modul 7 Evaluasi 3: tarif air ditentukan oleh total pemakaian (misalnya 15 m³ seluruhnya Rp3.000/m³), bukan tarif bertingkat.
- Modul 7 Evaluasi 4: harga paket tidak disebutkan di modul. Dipakai asumsi Harian Rp10.000, Mingguan Rp50.000, dan Bulanan Rp150.000.

## Cara compile & menjalankan

Butuh compiler C++ (misalnya `g++` dari MinGW di Windows, atau `build-essential` di Linux).

```bash
g++ -std=c++17 -Wall -o program main.cpp
./program        # Linux / macOS
program.exe      # Windows
```
