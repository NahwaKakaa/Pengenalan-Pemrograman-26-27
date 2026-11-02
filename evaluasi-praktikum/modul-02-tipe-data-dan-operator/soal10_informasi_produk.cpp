// Evaluasi Modul 2 - Soal 10: Informasi produk
#include <iostream>
using namespace std;

int main() {
    char namaProduk = 'P';      // nama produk satu karakter
    double harga = 15000.50;    // harga bisa pecahan
    int jumlahBarang = 12;      // jumlah barang bilangan bulat
    bool tersedia = true;       // status ketersediaan

    cout << "Nama produk  : " << namaProduk << endl;
    cout << "Harga        : Rp " << harga << endl;
    cout << "Jumlah barang: " << jumlahBarang << endl;
    cout << "Tersedia     : " << (tersedia ? "Ya" : "Tidak") << endl;
    return 0;
}
