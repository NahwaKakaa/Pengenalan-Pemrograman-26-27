// Evaluasi Modul 3 - Soal 4: Kelompok dan Kategori Praktikum
// Digit terakhir stambuk genap -> Kelompok A, ganjil -> Kelompok B
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stambuk;
    double nilai;

    cout << "Masukkan stambuk          : ";
    cin >> stambuk;
    cout << "Masukkan nilai praktikum  : ";
    cin >> nilai;

    int digitTerakhir = stambuk.back() - '0';
    string kelompok = (digitTerakhir % 2 == 0) ? "Kelompok A" : "Kelompok B";

    string kategori;
    if (nilai < 0 || nilai > 100)
        kategori = "Nilai tidak valid";
    else if (nilai >= 85)
        kategori = "Sangat Baik";
    else if (nilai >= 70)
        kategori = "Baik";
    else if (nilai >= 60)
        kategori = "Cukup";
    else
        kategori = "Perlu Perbaikan";

    cout << "\nStambuk  : " << stambuk << endl;
    cout << "Kelompok : " << kelompok << endl;
    cout << "Nilai    : " << nilai << endl;
    cout << "Kategori : " << kategori << endl;
    return 0;
}
