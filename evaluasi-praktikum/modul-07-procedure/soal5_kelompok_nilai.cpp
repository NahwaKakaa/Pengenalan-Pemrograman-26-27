// Evaluasi Modul 7 - Soal 5: Kelompok Nilai Praktikum
//   85-100      = Sangat Baik
//   70-84       = Baik
//   60-69       = Cukup
//   di bawah 60 = Perlu Perbaikan
#include <iostream>
#include <string>
using namespace std;

// ===== Variabel global =====
string nama, kelompok;
double nilai;
int sangatBaik = 0, baik = 0, cukup = 0, perluPerbaikan = 0;

// Procedure: menerima data satu mahasiswa
void inputData(int ke)
{
    cout << "\nMahasiswa ke-" << ke << endl;
    cout << "Nama             : ";
    getline(cin >> ws, nama);
    cout << "Nilai praktikum  : ";
    cin >> nilai;
}

// Procedure dengan parameter: menentukan kelompok + menambah counter
void tentukanKelompok(double n)
{
    if (n >= 85)
    {
        kelompok = "Sangat Baik";
        sangatBaik++;
    }
    else if (n >= 70)
    {
        kelompok = "Baik";
        baik++;
    }
    else if (n >= 60)
    {
        kelompok = "Cukup";
        cukup++;
    }
    else
    {
        kelompok = "Perlu Perbaikan";
        perluPerbaikan++;
    }
}

// Procedure dengan parameter: menampilkan hasil
void tampilHasil(string n, double v, string k)
{
    cout << "Hasil            : " << n << " - " << v << " (" << k << ")" << endl;
}

int main()
{
    int jumlah;
    cout << "Jumlah mahasiswa : ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; i++)
    {
        inputData(i);
        tentukanKelompok(nilai);
        tampilHasil(nama, nilai, kelompok);
    }

    cout << "\n========== REKAP NILAI ==========" << endl;
    cout << "Sangat Baik     : " << sangatBaik << endl;
    cout << "Baik            : " << baik << endl;
    cout << "Cukup           : " << cukup << endl;
    cout << "Perlu Perbaikan : " << perluPerbaikan << endl;
    cout << "=================================" << endl;
    return 0;
}
