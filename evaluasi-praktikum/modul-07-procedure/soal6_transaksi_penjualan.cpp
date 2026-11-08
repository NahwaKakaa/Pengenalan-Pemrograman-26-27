// Evaluasi Modul 7 - Soal 6: Rekap Transaksi Penjualan
// Procedure:
//   - inputTransaksi()                 : menerima nama produk, harga, jumlah beli
//   - hitungSubtotal(harga, jumlah)    : menghitung subtotal
//   - tampilTransaksi()                : menampilkan hasil transaksi
#include <iostream>
#include <string>
using namespace std;

// ===== Variabel global =====
string namaProduk;
long long harga, subtotal;
int jumlahBeli;

void inputTransaksi()
{
    cout << "Nama produk : ";
    getline(cin >> ws, namaProduk);
    cout << "Harga       : Rp";
    cin >> harga;
    cout << "Jumlah beli : ";
    cin >> jumlahBeli;
}

void hitungSubtotal(long long h, int j)
{
    subtotal = h * j;
}

void tampilTransaksi()
{
    cout << "\n--- HASIL TRANSAKSI ---" << endl;
    cout << "Produk   : " << namaProduk << endl;
    cout << "Harga    : Rp" << harga << endl;
    cout << "Jumlah   : " << jumlahBeli << endl;
    cout << "Subtotal : Rp" << subtotal << endl;
    cout << "-----------------------" << endl;
}

int main()
{
    int lanjut;
    int jumlahTransaksi = 0, totalBarang = 0;
    long long totalPenjualan = 0;

    do
    {
        cout << "\n=== TRANSAKSI KE-" << jumlahTransaksi + 1 << " ===" << endl;
        inputTransaksi();
        hitungSubtotal(harga, jumlahBeli);
        tampilTransaksi();

        // counter dan accumulator
        jumlahTransaksi++;
        totalBarang += jumlahBeli;
        totalPenjualan += subtotal;

        cout << "Tambah transaksi lagi? (1 = Ya, 0 = Tidak) : ";
        cin >> lanjut;
    } while (lanjut == 1);

    cout << "\n========= REKAP PENJUALAN =========" << endl;
    cout << "Jumlah transaksi      : " << jumlahTransaksi << endl;
    cout << "Total barang terjual  : " << totalBarang << endl;
    cout << "Total penjualan       : Rp" << totalPenjualan << endl;
    cout << "===================================" << endl;
    return 0;
}
