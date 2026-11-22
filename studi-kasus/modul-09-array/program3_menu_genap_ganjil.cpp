// Modul 9 - Program 3: Array Genap, Ganjil, dan Menu Pengolahan
// - Data array diinput terlebih dahulu
// - Menu ditampilkan berulang dengan do-while, dipilih dengan switch-case
// - Procedure: tampilSemua(), tampilGenap(), tampilGanjil()
// - Function hitungTotal() mengembalikan jumlah seluruh data
// - Operator % membedakan bilangan genap dan ganjil
#include <iostream>
using namespace std;

const int MAKS = 50;
int angka[MAKS];
int n;

void tampilSemua()
{
    cout << "Semua Data    : ";
    for (int i = 0; i < n; i++)
        cout << angka[i] << " ";
    cout << endl;
}

void tampilGenap()
{
    cout << "Bilangan Genap  : ";
    for (int i = 0; i < n; i++)
    {
        if (angka[i] % 2 == 0)
            cout << angka[i] << " ";
    }
    cout << endl;
}

void tampilGanjil()
{
    cout << "Bilangan Ganjil : ";
    for (int i = 0; i < n; i++)
    {
        if (angka[i] % 2 != 0)
            cout << angka[i] << " ";
    }
    cout << endl;
}

int hitungTotal()
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += angka[i];
    return total;
}

void tampilMenu()
{
    cout << "\n------------------------------" << endl;
    cout << "      MENU PENGOLAHAN DATA" << endl;
    cout << "==============================" << endl;
    cout << "1. Tampilkan Semua Data" << endl;
    cout << "2. Tampilkan Bilangan Genap" << endl;
    cout << "3. Tampilkan Bilangan Ganjil" << endl;
    cout << "4. Hitung Total Data" << endl;
    cout << "5. Keluar" << endl;
    cout << "==============================" << endl;
    cout << "Pilihan : ";
}

int main()
{
    int pilihan;

    cout << "Jumlah data (maks " << MAKS << ") : ";
    cin >> n;
    while (n < 1 || n > MAKS)
    {
        cout << "Jumlah harus 1 - " << MAKS << ". Ulangi : ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> angka[i];
    }

    do
    {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tampilSemua();
            break;
        case 2:
            tampilGenap();
            break;
        case 3:
            tampilGanjil();
            break;
        case 4:
            cout << "Total Data : " << hitungTotal() << endl;
            break;
        case 5:
            cout << "Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
