// Evaluasi Modul 5 - Soal 1: Perkalian bertahap (faktorial) dan jumlahnya
// Input 5 -> 1 2 6 24 120, jumlah = 153
#include <iostream>
using namespace std;

int main()
{
    int batas;
    long long hasil = 1;   // long long agar tidak cepat overflow
    long long jumlah = 0;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> batas;

    if (batas < 1)
    {
        cout << "Batas tidak valid" << endl;
        return 0;
    }

    cout << "\nProses yang terjadi:" << endl;
    for (int i = 1; i <= batas; i++)
    {
        long long sebelum = hasil;
        hasil *= i;
        jumlah += hasil;

        if (i == 1)
            cout << hasil << endl;
        else
            cout << sebelum << " x " << i << " = " << hasil << endl;
    }

    // Tampilkan ulang deretnya dalam satu baris
    cout << "\nHasil perkalian: ";
    hasil = 1;
    for (int i = 1; i <= batas; i++)
    {
        hasil *= i;
        cout << hasil << " ";
    }
    cout << endl;
    cout << "Jumlah seluruh bilangan = " << jumlah << endl;
    return 0;
}
