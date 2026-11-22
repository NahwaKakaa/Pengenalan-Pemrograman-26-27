// Modul 8 - Program 4: Transaksi Toko dengan Function
// Rumus:
//   Subtotal   = Harga Jual x Jumlah Barang
//   Modal      = Harga Beli x Jumlah Barang
//   Keuntungan = Subtotal - Modal
//
// Harga barang mengikuti daftar barang di Modul 9 Program 5:
//   Kode  Barang      Harga Beli   Harga Jual
//   1     Buku        Rp7.000      Rp10.000
//   2     Pensil      Rp3.000      Rp5.000
//   3     Pulpen      Rp5.000      Rp7.500
//   4     Penghapus   Rp2.500      Rp4.000
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function: kode barang valid jika 1 - 4
bool kodeValid(int kode)
{
    return kode >= 1 && kode <= 4;
}

// Function: nama barang (pelengkap untuk tampilan)
string namaBarang(int kode)
{
    switch (kode)
    {
    case 1: return "Buku";
    case 2: return "Pensil";
    case 3: return "Pulpen";
    case 4: return "Penghapus";
    default: return "-";
    }
}

double hargaBeli(int kode)
{
    switch (kode)
    {
    case 1: return 7000;
    case 2: return 3000;
    case 3: return 5000;
    case 4: return 2500;
    default: return 0;
    }
}

double hargaJual(int kode)
{
    switch (kode)
    {
    case 1: return 10000;
    case 2: return 5000;
    case 3: return 7500;
    case 4: return 4000;
    default: return 0;
    }
}

// hitungSubtotal() memanggil hargaJual()
double hitungSubtotal(int kode, int jumlah)
{
    return hargaJual(kode) * jumlah;
}

// hitungModal() memanggil hargaBeli()
double hitungModal(int kode, int jumlah)
{
    return hargaBeli(kode) * jumlah;
}

// hitungKeuntungan() memanggil hitungSubtotal() dan hitungModal()
double hitungKeuntungan(int kode, int jumlah)
{
    return hitungSubtotal(kode, jumlah) - hitungModal(kode, jumlah);
}

// Procedure: menampilkan menu barang
void tampilMenu()
{
    cout << "\n=========== MENU BARANG ===========" << endl;
    cout << "1. Buku       (Rp10.000)" << endl;
    cout << "2. Pensil     (Rp5.000)" << endl;
    cout << "3. Pulpen     (Rp7.500)" << endl;
    cout << "4. Penghapus  (Rp4.000)" << endl;
    cout << "5. Selesai" << endl;
    cout << "===================================" << endl;
    cout << "Pilih barang : ";
}

// Procedure: menampilkan hasil satu transaksi
void tampilTransaksi(int kode, int jumlah)
{
    cout << "\n--------- HASIL TRANSAKSI ---------" << endl;
    cout << "Barang      : " << namaBarang(kode) << endl;
    cout << "Harga Jual  : Rp" << hargaJual(kode) << endl;
    cout << "Jumlah      : " << jumlah << endl;
    cout << "Subtotal    : Rp" << hitungSubtotal(kode, jumlah) << endl;
    cout << "Modal       : Rp" << hitungModal(kode, jumlah) << endl;
    cout << "Keuntungan  : Rp" << hitungKeuntungan(kode, jumlah) << endl;
    cout << "-----------------------------------" << endl;
}

int main()
{
    int kode, jumlah;

    // Counter dan accumulator
    int jumlahTransaksi = 0, totalBarang = 0;
    double totalOmzet = 0, totalModal = 0, totalKeuntungan = 0;

    cout << fixed << setprecision(0);

    do
    {
        tampilMenu();
        cin >> kode;

        if (kodeValid(kode))
        {
            cout << "Jumlah beli  : ";
            cin >> jumlah;

            if (jumlah <= 0)
            {
                cout << "Jumlah harus lebih dari 0. Transaksi dibatalkan." << endl;
            }
            else
            {
                tampilTransaksi(kode, jumlah);

                jumlahTransaksi++;
                totalBarang += jumlah;
                totalOmzet += hitungSubtotal(kode, jumlah);
                totalModal += hitungModal(kode, jumlah);
                totalKeuntungan += hitungKeuntungan(kode, jumlah);
            }
        }
        else if (kode != 5)
        {
            cout << "Kode barang tidak tersedia." << endl;
        }
    } while (kode != 5);

    cout << "\n========= REKAP TRANSAKSI =========" << endl;
    cout << "Jumlah Transaksi     : " << jumlahTransaksi << endl;
    cout << "Total Barang Terjual : " << totalBarang << endl;
    cout << "Total Omzet          : Rp" << totalOmzet << endl;
    cout << "Total Modal          : Rp" << totalModal << endl;
    cout << "Total Keuntungan     : Rp" << totalKeuntungan << endl;
    cout << "===================================" << endl;

    return 0;
}
