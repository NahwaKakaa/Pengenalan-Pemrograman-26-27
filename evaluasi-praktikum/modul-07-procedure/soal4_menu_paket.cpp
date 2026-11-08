// Evaluasi Modul 7 - Soal 4: Menu Paket dengan Procedure, switch-case, do-while
//
// Harga paket tidak disebutkan di modul, jadi dipakai asumsi berikut:
//   1. Paket Harian    Rp10.000
//   2. Paket Mingguan  Rp50.000
//   3. Paket Bulanan   Rp150.000
#include <iostream>
#include <string>
using namespace std;

// ===== Variabel global =====
string namaPaket;
long long harga;

// Procedure: menampilkan menu
void tampilMenu()
{
    cout << "\n========== MENU PAKET ==========" << endl;
    cout << "1. Paket Harian" << endl;
    cout << "2. Paket Mingguan" << endl;
    cout << "3. Paket Bulanan" << endl;
    cout << "4. Keluar" << endl;
    cout << "================================" << endl;
    cout << "Pilihan : ";
}

// Procedure dengan parameter: memproses paket yang dipilih
void prosesPaket(string nama, long long hargaPaket)
{
    namaPaket = nama;
    harga = hargaPaket;
}

// Procedure: menampilkan nama paket dan harga
void tampilPaket()
{
    cout << "\nPaket dipilih : " << namaPaket << endl;
    cout << "Harga         : Rp" << harga << endl;
}

int main()
{
    int pilihan;

    do
    {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            prosesPaket("Paket Harian", 10000);
            tampilPaket();
            break;
        case 2:
            prosesPaket("Paket Mingguan", 50000);
            tampilPaket();
            break;
        case 3:
            prosesPaket("Paket Bulanan", 150000);
            tampilPaket();
            break;
        case 4:
            cout << "\nProgram selesai. Terima kasih!" << endl;
            break;
        default:
            cout << "\nPilihan tidak tersedia." << endl;
            break;
        }
    } while (pilihan != 4);

    return 0;
}
