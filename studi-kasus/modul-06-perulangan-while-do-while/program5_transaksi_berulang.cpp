// Modul 6 - Program 5: Sistem Transaksi Berulang (do-while + switch-case)
// 1. Buku Rp10.000, 2. Pensil Rp5.000, 3. Pulpen Rp7.500, 4. Selesai
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int menu, jumlah;
    int valid = 0, tidakValid = 0;
    double totalPenjualan = 0;

    do
    {
        cout << "================================" << endl;
        cout << "         DAFTAR BARANG" << endl;
        cout << "================================" << endl;
        cout << "1. Buku    Rp10.000" << endl;
        cout << "2. Pensil  Rp5.000" << endl;
        cout << "3. Pulpen  Rp7.500" << endl;
        cout << "4. Selesai" << endl;
        cout << "================================" << endl;
        cout << "Pilih menu : ";
        cin >> menu;

        if (menu == 4)
            break;

        string nama;
        double harga = 0;
        bool ditemukan = true;

        switch (menu)
        {
        case 1: nama = "Buku";   harga = 10000; break;
        case 2: nama = "Pensil"; harga = 5000;  break;
        case 3: nama = "Pulpen"; harga = 7500;  break;
        default: ditemukan = false; break;
        }

        if (ditemukan)
        {
            cout << "Jumlah barang : ";
            cin >> jumlah;
            double subtotal = harga * jumlah;
            totalPenjualan += subtotal;
            valid++;

            cout << endl;
            cout << "Barang     : " << nama << endl;
            cout << "Harga      : Rp" << harga << endl;
            cout << "Jumlah     : " << jumlah << endl;
            cout << "Subtotal   : Rp" << subtotal << endl << endl;
        }
        else
        {
            tidakValid++;
            cout << "\nPilihan tidak tersedia." << endl;
            cout << "Transaksi tidak dihitung." << endl << endl;
        }
    } while (menu != 4);

    cout << fixed << setprecision(2);
    cout << "\n==============================" << endl;
    cout << "        REKAP TRANSAKSI" << endl;
    cout << "==============================" << endl;
    cout << "Transaksi Valid       : " << valid << endl;
    cout << "Transaksi Tidak Valid : " << tidakValid << endl;
    cout << "Total Penjualan       : Rp" << totalPenjualan << endl;
    cout << "==============================" << endl;
    cout << "Program selesai." << endl;
    return 0;
}
