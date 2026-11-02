// Evaluasi Modul 5 - Soal 7: Memproses beberapa transaksi dengan for + switch
// Kode 1: Buku Rp10.000, Kode 2: Pensil Rp5.000, Kode 3: Pulpen Rp7.500
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, kode, jumlahBarang;
    int valid = 0, tidakValid = 0;
    double totalPenjualan = 0;

    cout << "Jumlah transaksi : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string nama;
        double harga = 0;
        bool ditemukan = true;

        cout << "\nTransaksi ke-" << i << endl;
        cout << "  Kode barang  : ";
        cin >> kode;
        cout << "  Jumlah barang: ";
        cin >> jumlahBarang;

        switch (kode)
        {
        case 1: nama = "Buku";   harga = 10000; break;
        case 2: nama = "Pensil"; harga = 5000;  break;
        case 3: nama = "Pulpen"; harga = 7500;  break;
        default:
            ditemukan = false;
            break;
        }

        if (ditemukan)
        {
            double subtotal = harga * jumlahBarang;
            totalPenjualan += subtotal;
            valid++;
            cout << "  " << nama << " x " << jumlahBarang << " = Rp" << subtotal << endl;
        }
        else
        {
            tidakValid++;
            cout << "  Kode barang tidak tersedia, transaksi tidak dihitung." << endl;
        }
    }

    cout << "\nJumlah transaksi valid : " << valid << endl;
    cout << "Transaksi tidak valid  : " << tidakValid << endl;
    cout << "Total penjualan        : Rp" << totalPenjualan << endl;
    return 0;
}
