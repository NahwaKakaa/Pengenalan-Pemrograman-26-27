// Evaluasi Modul 4 - Soal 6: Transaksi Toko Komputer dengan Menu Bertingkat
// switch pertama -> kategori, switch di dalamnya -> produk
// Subtotal = Harga x Jumlah, Biaya Layanan = 2% x Subtotal
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string stambuk, kategori, produk;
    int kodeKategori, kodeProduk, jumlah;
    double harga = 0;
    bool valid = true;

    cout << "Masukkan stambuk : ";
    cin >> stambuk;

    cout << "\n=== KATEGORI ===" << endl;
    cout << "1. Perangkat Input" << endl;
    cout << "2. Perangkat Output" << endl;
    cout << "3. Penyimpanan Data" << endl;
    cout << "Pilih kategori   : ";
    cin >> kodeKategori;

    switch (kodeKategori)
    {
    case 1:
        kategori = "Perangkat Input";
        cout << "\n1. Keyboard  Rp150.000\n2. Mouse     Rp100.000\n3. Scanner   Rp750.000\n";
        cout << "Pilih produk     : ";
        cin >> kodeProduk;
        switch (kodeProduk)
        {
        case 1: produk = "Keyboard"; harga = 150000; break;
        case 2: produk = "Mouse";    harga = 100000; break;
        case 3: produk = "Scanner";  harga = 750000; break;
        default: valid = false; break;
        }
        break;

    case 2:
        kategori = "Perangkat Output";
        cout << "\n1. Monitor   Rp1.500.000\n2. Printer   Rp1.200.000\n3. Speaker   Rp300.000\n";
        cout << "Pilih produk     : ";
        cin >> kodeProduk;
        switch (kodeProduk)
        {
        case 1: produk = "Monitor"; harga = 1500000; break;
        case 2: produk = "Printer"; harga = 1200000; break;
        case 3: produk = "Speaker"; harga = 300000;  break;
        default: valid = false; break;
        }
        break;

    case 3:
        kategori = "Penyimpanan Data";
        cout << "\n1. Flashdisk Rp100.000\n2. SSD       Rp850.000\n3. Harddisk  Rp700.000\n";
        cout << "Pilih produk     : ";
        cin >> kodeProduk;
        switch (kodeProduk)
        {
        case 1: produk = "Flashdisk"; harga = 100000; break;
        case 2: produk = "SSD";       harga = 850000; break;
        case 3: produk = "Harddisk";  harga = 700000; break;
        default: valid = false; break;
        }
        break;

    default:
        cout << "\nKategori tidak tersedia." << endl;
        return 0;
    }

    if (!valid)
    {
        cout << "\nProduk tidak tersedia." << endl;
        return 0;
    }

    cout << "Jumlah barang    : ";
    cin >> jumlah;

    double subtotal = harga * jumlah;
    double biayaLayanan = subtotal * 0.02;
    double totalBayar = subtotal + biayaLayanan;

    cout << fixed << setprecision(2);
    cout << "\n=========================================" << endl;
    cout << "           TOKO KOMPUTER FIKOM" << endl;
    cout << "=========================================" << endl;
    cout << left << setw(17) << "Stambuk"       << ": " << stambuk << endl;
    cout << left << setw(17) << "Kategori"      << ": " << kategori << endl;
    cout << left << setw(17) << "Produk"        << ": " << produk << endl;
    cout << left << setw(17) << "Harga Satuan"  << ": Rp" << harga << endl;
    cout << left << setw(17) << "Jumlah"        << ": " << jumlah << endl;
    cout << endl;
    cout << left << setw(17) << "Subtotal"      << ": Rp" << subtotal << endl;
    cout << left << setw(17) << "Biaya Layanan" << ": Rp" << biayaLayanan << endl;
    cout << left << setw(17) << "Total Bayar"   << ": Rp" << totalBayar << endl;
    cout << "=========================================" << endl;
    return 0;
}
