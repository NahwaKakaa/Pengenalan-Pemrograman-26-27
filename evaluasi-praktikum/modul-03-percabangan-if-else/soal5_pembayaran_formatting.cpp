// Evaluasi Modul 3 - Soal 5: Pembayaran dengan Formatting dan Percabangan
// Total Belanja = Harga Satuan x Jumlah Barang
// Batas Diskon  = Rp250.000 + (dua digit terakhir stambuk x Rp2.000)
// Diskon 10% jika total belanja >= batas diskon
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string stambuk, namaBarang;
    double hargaSatuan;
    int jumlahBarang;

    cout << "Masukkan stambuk      : ";
    cin >> stambuk;
    cout << "Masukkan nama barang  : ";
    cin.ignore();
    getline(cin, namaBarang);   // getline agar nama barang boleh berspasi
    cout << "Masukkan harga satuan : ";
    cin >> hargaSatuan;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;

    int duaDigit = stoi(stambuk.substr(stambuk.length() - 2));
    double totalBelanja = hargaSatuan * jumlahBarang;
    double batasDiskon = 250000 + (duaDigit * 2000);
    double diskon = 0;

    if (totalBelanja >= batasDiskon)
    {
        diskon = totalBelanja * 0.10;
    }

    double totalBayar = totalBelanja - diskon;

    cout << fixed << setprecision(2);
    cout << "\n==========================================\n";
    cout << "\t    STRUK PEMBAYARAN\n";
    cout << "==========================================\n";
    cout << left << setw(18) << "Stambuk"       << ": " << stambuk << endl;
    cout << left << setw(18) << "Nama Barang"   << ": " << namaBarang << endl;
    cout << left << setw(18) << "Harga Satuan"  << ": Rp" << right << setw(15) << hargaSatuan << endl;
    cout << left << setw(18) << "Jumlah Barang" << ": "   << right << setw(17) << jumlahBarang << endl;
    cout << left << setw(18) << "Total Belanja" << ": Rp" << right << setw(15) << totalBelanja << endl;
    cout << left << setw(18) << "Batas Diskon"  << ": Rp" << right << setw(15) << batasDiskon << endl;
    cout << left << setw(18) << "Diskon"        << ": Rp" << right << setw(15) << diskon << endl;
    cout << "------------------------------------------\n";
    cout << left << setw(18) << "Total Bayar"   << ": Rp" << right << setw(15) << totalBayar << endl;
    cout << "==========================================\n";
    return 0;
}
