// Evaluasi Modul 5 - Soal 3: Menu genap/ganjil dengan switch-case + for
// Input batas 10, pilihan 1 -> 2 4 6 8 10, Jumlah 30
#include <iostream>
using namespace std;

int main()
{
    int batas, pilihan, jumlah = 0;

    cout << "Masukkan batas akhir : ";
    cin >> batas;
    cout << "------------------------------------------------" << endl;
    cout << "                     MENU" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "  1. Bilangan Genap" << endl;
    cout << "  2. Bilangan Ganjil" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Pilihan              : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "\nBilangan Genap       : ";
        for (int i = 2; i <= batas; i += 2)
        {
            cout << i << " ";
            jumlah += i;
        }
        cout << "\nJumlah               : " << jumlah << endl;
        break;
    case 2:
        cout << "\nBilangan Ganjil      : ";
        for (int i = 1; i <= batas; i += 2)
        {
            cout << i << " ";
            jumlah += i;
        }
        cout << "\nJumlah               : " << jumlah << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        break;
    }
    return 0;
}
