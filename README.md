# Pengenalan Pemrograman 26/27

Kumpulan studi kasus dan evaluasi praktikum mata kuliah **Pengenalan Pemrograman** tahun ajaran 2026/2027.
Seluruh kode ditulis menggunakan **C++**.

## Struktur

```
.
├── studi-kasus/          # Studi kasus per pertemuan
└── evaluasi-praktikum/   # Soal & jawaban evaluasi praktikum
```

Saran penamaan: satu folder per pertemuan, misalnya `studi-kasus/pertemuan-01/` berisi `main.cpp` dan `README.md` singkat tentang soalnya.

## Cara compile & menjalankan

Butuh compiler C++ (misalnya `g++` dari MinGW di Windows, atau `build-essential` di Linux).

```bash
g++ -std=c++17 -Wall -o program main.cpp
./program        # Linux / macOS
program.exe      # Windows
```
