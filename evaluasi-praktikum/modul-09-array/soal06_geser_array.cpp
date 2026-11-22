// Evaluasi Modul 9 - Soal 6: Menggeser (Rotasi) Elemen Array
// 6 bilangan disimpan di array, lalu pengguna memilih lewat switch-case:
//   1. Geser ke kanan : elemen terakhir pindah ke posisi pertama
//      10 20 30 40 50 60 -> 60 10 20 30 40 50
//   2. Geser ke kiri  : elemen pertama pindah ke posisi terakhir
//      10 20 30 40 50 60 -> 20 30 40 50 60 10
#include <iostream>
using namespace std;

const int N = 6;

int main()
{
    int awal[N], hasil[N];
    int pilihan;

    cout << "Masukkan 6 bilangan" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Data[" << i << "] : ";
        cin >> awal[i];
    }

    cout << "\n1. Geser ke kanan" << endl;
    cout << "2. Geser ke kiri" << endl;
    cout << "Pilihan : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        hasil[0] = awal[N - 1];
        for (int i = 1; i < N; i++)
            hasil[i] = awal[i - 1];
        break;
    case 2:
        for (int i = 0; i < N - 1; i++)
            hasil[i] = awal[i + 1];
        hasil[N - 1] = awal[0];
        break;
    default:
        cout << "Pilihan tidak tersedia." << endl;
        return 0;
    }

    cout << "\nData Awal   : ";
    for (int i = 0; i < N; i++) cout << awal[i] << " ";
    cout << "\nHasil Geser : ";
    for (int i = 0; i < N; i++) cout << hasil[i] << " ";
    cout << endl;

    return 0;
}
