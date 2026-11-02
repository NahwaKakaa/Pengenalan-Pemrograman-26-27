// Evaluasi Modul 6 - Soal 6: Menentukan Output dan Jumlah Iterasi
// Program dari modul, dijalankan untuk mengecek prediksi.
//
// Prediksi (lihat jawaban.md):
//   a. Output       : 20 17 14 11 8 5
//   b. Iterasi      : 6 kali
//   c. Nilai akhir  : angka = 2
//   d. Berhenti saat angka < 5 (kondisi angka >= 5 bernilai false)
#include <iostream>
using namespace std;

int main()
{
    int angka = 20;

    while (angka >= 5)
    {
        cout << angka << " ";
        angka -= 3;
    }

    return 0;
}
