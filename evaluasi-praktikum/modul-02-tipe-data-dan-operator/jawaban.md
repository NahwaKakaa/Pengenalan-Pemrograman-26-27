# Evaluasi Praktikum 2 — Tipe Data dan Operator

| Soal | Jenis | File |
|---|---|---|
| 1 | Teori | file ini |
| 2 | Program | `soal02_deklarasi_variabel.cpp` |
| 3 | Teori + program | file ini + `soal03_variabel_konstanta.cpp` |
| 4 | Program | `soal04_panjang_kali_lebar.cpp` |
| 5 | Program | `soal05_operator_aritmatika.cpp` |
| 6 | Teori + program | file ini + `soal06_precedence.cpp` |
| 7 | Program | `soal07_operator_relasional.cpp` |
| 8 | Program + penjelasan | `soal08_operator_logika.cpp` + file ini |
| 9 | Perbaikan + penjelasan | `soal09_perbaikan_tipe_data.cpp` + file ini |
| 10 | Program | `soal10_informasi_produk.cpp` |

## 1. Perbedaan tipe data

| Tipe | Menyimpan | Contoh |
|---|---|---|
| `int` | bilangan bulat | `int jumlahSKS = 20;` |
| `float` | bilangan pecahan, presisi sekitar 6–7 digit | `float tinggi = 165.5f;` |
| `double` | bilangan pecahan, presisi lebih tinggi (sekitar 15 digit) | `double ipk = 3.75;` |
| `char` | satu karakter, ditulis dengan kutip tunggal | `char grade = 'A';` |
| `bool` | nilai logika `true` atau `false` | `bool lulus = true;` |

## 3. Variabel vs konstanta

- **Variabel** adalah tempat penyimpanan bernama yang nilainya **boleh berubah** selama program berjalan. Contoh: `int skor = 10; skor = 20;`
- **Konstanta** adalah nilai yang **tidak boleh diubah** setelah didefinisikan, dibuat dengan kata kunci `const`. Contoh: `const double PI = 3.14159;`. Jika ada baris `PI = 3.14;`, compiler akan menampilkan error.

## 6. `int hasil = 5 + 2 * 3;`

Hasilnya **11**. Operator `*` memiliki prioritas (precedence) lebih tinggi daripada `+`, sehingga `2 * 3 = 6` dikerjakan lebih dulu, lalu `5 + 6 = 11`. Jika ingin penjumlahan dikerjakan lebih dulu, gunakan tanda kurung: `(5 + 2) * 3 = 21`.

## 8. Hasil operator logika

Dengan `nilaiBagus = true` (80 ≥ 75) dan `hadirCukup = false` (70 ≥ 80 salah):

- `nilaiBagus && hadirCukup` → **false**, karena AND hanya bernilai true jika kedua kondisi true.
- `nilaiBagus || hadirCukup` → **true**, karena OR bernilai true jika minimal satu kondisi true.
- `!hadirCukup` → **true**, karena NOT membalik nilai false menjadi true.

## 9. Alasan perbaikan tipe data

- `int nilai = 85.75;` → diganti **`double nilai = 85.75;`**. `int` hanya menyimpan bilangan bulat, sehingga `.75` akan terbuang dan nilainya menjadi 85.
- `char nama = "Andi";` → diganti **`string nama = "Andi";`** (perlu `#include <string>`). `char` hanya menampung satu karakter dengan kutip tunggal, sedangkan `"Andi"` adalah teks berisi beberapa karakter.
- `bool aktif = "true";` → diganti **`bool aktif = true;`**. `"true"` dengan tanda kutip adalah string, bukan nilai logika. Nilai `bool` ditulis tanpa kutip: `true` atau `false`.
