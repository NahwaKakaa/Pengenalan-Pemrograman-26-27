# Evaluasi Praktikum 1 — Konsep Dasar Pemrograman

Soal yang meminta program dikerjakan di file `.cpp` masing-masing. Soal teori dijawab di sini.

| Soal | Jenis | File |
|---|---|---|
| 1, 2, 7, 9 | Teori | file ini |
| 3 | Program | `soal03_selamat_datang.cpp` |
| 4 | Program | `soal04_identitas_mahasiswa.cpp` |
| 5 | Program | `soal05_informasi_kegiatan.cpp` |
| 6 | Perbaikan | `soal06_perbaikan_program.cpp` |
| 8 | Program + teori | `soal08_komentar.cpp` + file ini |
| 10 | Program | `soal10_program_lengkap.cpp` |

## 1. Fungsi bagian-bagian program C++

- **`#include <iostream>`**: memanggil library input/output standar sehingga program bisa memakai `cout` (output) dan `cin` (input).
- **`using namespace std;`**: membuat semua elemen di namespace standar (`std`) bisa dipakai langsung tanpa awalan `std::`.
- **`int main()`**: fungsi utama dan titik awal eksekusi program. `int` berarti fungsi ini mengembalikan nilai bilangan bulat.
- **`cout`**: objek untuk menampilkan output ke layar, dipakai bersama operator `<<`.
- **`return 0;`**: mengakhiri `main()` dan memberi tahu sistem operasi bahwa program selesai dengan normal (tanpa error).

## 2. Source code, compile, run, dan output

- **Source code**: kode program yang ditulis programmer dalam bahasa C++ dan disimpan dalam file `.cpp`.
- **Compile**: proses compiler memeriksa sintaks source code lalu menerjemahkannya ke bahasa mesin (file executable). Jika ada kesalahan sintaks, compile gagal dan muncul pesan error.
- **Run**: proses menjalankan file executable hasil compile.
- **Output**: hasil yang ditampilkan program saat dijalankan, misalnya teks di layar console.

Alurnya: masalah → algoritma → source code → compile → run → output.

## 7. Mengapa `Cout` error sedangkan `cout` bisa dipakai

C++ bersifat **case-sensitive**: huruf besar dan kecil dianggap berbeda. Objek output yang didefinisikan di `<iostream>` bernama `cout` (huruf kecil semua). `Cout` dengan huruf C besar dianggap nama lain yang tidak pernah dideklarasikan, sehingga compiler menampilkan error seperti *`'Cout' was not declared in this scope`*.

## 8. Apakah komentar memengaruhi hasil eksekusi?

Tidak. Komentar (`// ...` satu baris dan `/* ... */` beberapa baris) diabaikan oleh compiler dan tidak ikut diterjemahkan ke bahasa mesin, jadi output program tetap sama dengan atau tanpa komentar. Komentar hanya berguna sebagai dokumentasi agar kode mudah dipahami. Contohnya ada di `soal08_komentar.cpp`.

## 9. `cout` setelah `using namespace std;` vs `std::cout`

`cout` berada di dalam namespace `std`.

- Dengan `using namespace std;`, kita cukup menulis `cout << "Halo";` karena seluruh isi `std` sudah "dibuka".
- Tanpa baris itu, kita harus menulis nama lengkapnya: `std::cout << "Halo";`.

Keduanya menghasilkan output yang sama. `std::cout` lebih eksplisit dan menghindari bentrok nama pada program besar, sedangkan `using namespace std;` lebih ringkas untuk program kecil seperti di praktikum.
