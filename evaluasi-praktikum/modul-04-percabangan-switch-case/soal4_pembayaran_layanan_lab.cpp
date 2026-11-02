// Evaluasi Modul 4 - Soal 4: Sistem Pembayaran Layanan Laboratorium
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double BIAYA_ADMIN = 5000;   // biaya administrasi tetap

    string stambuk, namaLayanan;
    int kode, jumlah;
    double harga = 0;
    bool ditemukan = true;

    cout << "======= LAYANAN LABORATORIUM =======" << endl;
    cout << "1. Cetak Modul Praktikum          Rp35.000" << endl;
    cout << "2. Penggantian Kartu Praktikum    Rp25.000" << endl;
    cout << "3. Cetak Sertifikat               Rp50.000" << endl;
    cout << "4. Penggunaan Lab Tambahan        Rp75.000" << endl;
    cout << "5. Pelatihan Tambahan             Rp100.000" << endl;
    cout << "====================================" << endl;
    cout << "Masukkan stambuk       : ";
    cin >> stambuk;
    cout << "Masukkan kode layanan  : ";
    cin >> kode;
    cout << "Masukkan jumlah layanan: ";
    cin >> jumlah;

    switch (kode)
    {
    case 1: namaLayanan = "Cetak Modul Praktikum";           harga = 35000;  break;
    case 2: namaLayanan = "Penggantian Kartu Praktikum";     harga = 25000;  break;
    case 3: namaLayanan = "Cetak Sertifikat";                harga = 50000;  break;
    case 4: namaLayanan = "Penggunaan Laboratorium Tambahan"; harga = 75000; break;
    case 5: namaLayanan = "Pelatihan Tambahan";              harga = 100000; break;
    default:
        ditemukan = false;
        cout << "\nKode layanan " << kode << " tidak ditemukan." << endl;
        break;
    }

    if (ditemukan)
    {
        double subtotal = harga * jumlah;
        double total = subtotal + BIAYA_ADMIN;

        cout << fixed << setprecision(2);
        cout << "\n==============================================" << endl;
        cout << "        BUKTI PEMBAYARAN LAYANAN LAB" << endl;
        cout << "==============================================" << endl;
        cout << left << setw(20) << "Stambuk"            << ": " << stambuk << endl;
        cout << left << setw(20) << "Kode Layanan"       << ": " << kode << endl;
        cout << left << setw(20) << "Nama Layanan"       << ": " << namaLayanan << endl;
        cout << left << setw(20) << "Harga Satuan"       << ": Rp" << harga << endl;
        cout << left << setw(20) << "Jumlah Layanan"     << ": " << jumlah << endl;
        cout << "----------------------------------------------" << endl;
        cout << left << setw(20) << "Subtotal"           << ": Rp" << subtotal << endl;
        cout << left << setw(20) << "Biaya Administrasi" << ": Rp" << BIAYA_ADMIN << endl;
        cout << left << setw(20) << "Total Pembayaran"   << ": Rp" << total << endl;
        cout << "==============================================" << endl;
    }
    return 0;
}
