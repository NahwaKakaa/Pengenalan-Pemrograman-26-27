// Evaluasi Modul 3 - Soal 1: Pengolahan Nilai Akhir Mahasiswa
// Nilai Akhir = (Tugas x 30%) + (UTS x 30%) + (UAS x 40%)
// Bonus       = digit terakhir stambuk % 5, maksimal nilai akhir 100
//
// Stambuk disimpan sebagai string karena panjangnya (11+ digit)
// melebihi batas tipe int.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string stambuk;
    double tugas, uts, uas;

    cout << "Masukkan stambuk   : ";
    cin >> stambuk;
    cout << "Masukkan nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS  : ";
    cin >> uts;
    cout << "Masukkan nilai UAS  : ";
    cin >> uas;

    double nilaiSebelumBonus = (tugas * 0.30) + (uts * 0.30) + (uas * 0.40);

    int digitTerakhir = stambuk.back() - '0';   // karakter terakhir -> angka
    int bonus = digitTerakhir % 5;

    double nilaiAkhir = nilaiSebelumBonus + bonus;
    if (nilaiAkhir > 100)
    {
        nilaiAkhir = 100;
    }

    cout << fixed << setprecision(2);
    cout << "\nStambuk             : " << stambuk << endl;
    cout << "Nilai Sebelum Bonus : " << nilaiSebelumBonus << endl;
    cout << "Bonus               : " << digitTerakhir << " % 5 = " << bonus << endl;
    cout << "Nilai Akhir         : " << nilaiAkhir << endl;
    return 0;
}
