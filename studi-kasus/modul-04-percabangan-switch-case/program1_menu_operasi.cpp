// Modul 4 - Program 1: Menu Sederhana dengan Switch-Case
#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    double a, b;

    cout << "=== MENU OPERASI ===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Keluar" << endl;
    cout << endl;
    cout << "Pilih menu : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Masukkan bilangan pertama : ";
        cin >> a;
        cout << "Masukkan bilangan kedua : ";
        cin >> b;
        cout << "Hasil penjumlahan = " << a + b << endl;
        break;
    case 2:
        cout << "Masukkan bilangan pertama : ";
        cin >> a;
        cout << "Masukkan bilangan kedua : ";
        cin >> b;
        cout << "Hasil pengurangan = " << a - b << endl;
        break;
    case 3:
        cout << "Program selesai" << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        break;
    }
    return 0;
}
