// Evaluasi Modul 4 - Soal 1: Sistem Pemesanan Menu Kantin
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int kode, jumlah;
    string namaMenu;
    double harga = 0;
    bool ditemukan = true;

    cout << "========== MENU KANTIN ==========" << endl;
    cout << "1. Nasi Goreng   Rp20.000" << endl;
    cout << "2. Mie Goreng    Rp18.000" << endl;
    cout << "3. Ayam Geprek   Rp22.000" << endl;
    cout << "4. Bakso         Rp17.000" << endl;
    cout << "5. Es Teh        Rp5.000" << endl;
    cout << "=================================" << endl;
    cout << "Masukkan kode menu     : ";
    cin >> kode;
    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    switch (kode)
    {
    case 1: namaMenu = "Nasi Goreng"; harga = 20000; break;
    case 2: namaMenu = "Mie Goreng";  harga = 18000; break;
    case 3: namaMenu = "Ayam Geprek"; harga = 22000; break;
    case 4: namaMenu = "Bakso";       harga = 17000; break;
    case 5: namaMenu = "Es Teh";      harga = 5000;  break;
    default:
        ditemukan = false;
        cout << "\nMenu dengan kode " << kode << " tidak ditemukan." << endl;
        break;
    }

    if (ditemukan)
    {
        double total = harga * jumlah;
        cout << fixed << setprecision(2);
        cout << "\n========== RINCIAN PESANAN ==========" << endl;
        cout << left << setw(17) << "Kode Menu"   << ": " << kode << endl;
        cout << left << setw(17) << "Nama Menu"   << ": " << namaMenu << endl;
        cout << left << setw(17) << "Harga Satuan" << ": Rp" << harga << endl;
        cout << left << setw(17) << "Jumlah"      << ": " << jumlah << endl;
        cout << left << setw(17) << "Total Bayar" << ": Rp" << total << endl;
        cout << "=====================================" << endl;
    }
    return 0;
}
