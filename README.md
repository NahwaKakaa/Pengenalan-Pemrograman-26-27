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

Setiap folder modul ada di dalam `studi-kasus/` dan `evaluasi-praktikum/`.

## Catatan

- Stambuk disimpan sebagai `string` (atau `long long`), karena angka 11 digit melebihi batas tipe `int`.
- Modul 2 Program 6: contoh output di modul menulis 82.50, tetapi rumus `(80 + 75 + 90) / 3` menghasilkan 81.67. Program mengikuti rumus.
- Modul 3 Program 3: kode di modul memakai `int nim`, yang overflow untuk input `13020260001`. Diganti `long long`.

## Cara compile & menjalankan

Butuh compiler C++ (misalnya `g++` dari MinGW di Windows, atau `build-essential` di Linux).

```bash
g++ -std=c++17 -Wall -o program main.cpp
./program        # Linux / macOS
program.exe      # Windows
```
