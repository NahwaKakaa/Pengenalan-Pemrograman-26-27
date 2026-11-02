// Modul 4 - Program 3: Menu Konversi Satuan
// Contoh: nilai 5, pilihan 1 -> 5 Meter = 500 Centimeter
#include <iostream>
using namespace std;

int main()
{
    double nilai;
    int pilihan;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    cout << "  MENU" << endl;
    cout << "    1. Meter ke Centimeter" << endl;
    cout << "    2. Kilometer ke Meter" << endl;
    cout << "    3. Kilogram ke Gram" << endl;
    cout << "    4. Jam ke Menit" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << nilai << " Meter = " << nilai * 100 << " Centimeter" << endl;
        break;
    case 2:
        cout << nilai << " Kilometer = " << nilai * 1000 << " Meter" << endl;
        break;
    case 3:
        cout << nilai << " Kilogram = " << nilai * 1000 << " Gram" << endl;
        break;
    case 4:
        cout << nilai << " Jam = " << nilai * 60 << " Menit" << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        break;
    }
    return 0;
}
