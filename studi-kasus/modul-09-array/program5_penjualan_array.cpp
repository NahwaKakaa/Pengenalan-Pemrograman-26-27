// Modul 9 - Program 5: Sistem Penjualan Menggunakan Array dan Function
// Daftar barang (sesuai modul):
//   1. Buku       Harga Beli Rp7.000   Harga Jual Rp10.000
//   2. Pensil     Harga Beli Rp3.000   Harga Jual Rp5.000
//   3. Pulpen     Harga Beli Rp5.000   Harga Jual Rp7.500
//   4. Penghapus  Harga Beli Rp2.500   Harga Jual Rp4.000
// - hitungSubtotal() memanggil hargaJual(), hitungModal() memanggil hargaBeli(),
//   hitungKeuntungan() memanggil hitungSubtotal() dan hitungModal()
// - Semua data transaksi disimpan di array global berdasarkan indeks
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAKS = 10;

// Array global
int kodeBarang[MAKS], jumlahBarang[MAKS];
double arrHargaBeli[MAKS], arrHargaJual[MAKS];
double subtotal[MAKS], modal[MAKS], keuntungan[MAKS];

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

double hitungSubtotal(int kode, int jumlah)
{
    return hargaJual(kode) * jumlah;
}

double hitungModal(int kode, int jumlah)
{
    return hargaBeli(kode) * jumlah;
}

double hitungKeuntungan(int kode, int jumlah)
{
    return hitungSubtotal(kode, jumlah) - hitungModal(kode, jumlah);
}

void tampilDaftarBarang()
{
    cout << "1. Buku       Harga Beli Rp7.000   Harga Jual Rp10.000" << endl;
    cout << "2. Pensil     Harga Beli Rp3.000   Harga Jual Rp5.000" << endl;
    cout << "3. Pulpen     Harga Beli Rp5.000   Harga Jual Rp7.500" << endl;
    cout << "4. Penghapus  Harga Beli Rp2.500   Harga Jual Rp4.000" << endl;
}

int main()
{
    int n;

    tampilDaftarBarang();

    cout << "\nJumlah transaksi (maks " << MAKS << ") : ";
    cin >> n;
    while (n < 1 || n > MAKS)
    {
        cout << "Jumlah harus 1 - " << MAKS << ". Ulangi : ";
        cin >> n;
    }

    // for pertama: input dan perhitungan, disimpan per indeks
    for (int i = 0; i < n; i++)
    {
        cout << "\nTransaksi ke-" << i + 1 << endl;
        cout << "Kode barang (1-4) : ";
        cin >> kodeBarang[i];
        while (kodeBarang[i] < 1 || kodeBarang[i] > 4)
        {
            cout << "Kode tidak tersedia. Ulangi : ";
            cin >> kodeBarang[i];
        }
        cout << "Jumlah barang     : ";
        cin >> jumlahBarang[i];
        while (jumlahBarang[i] <= 0)
        {
            cout << "Jumlah harus lebih dari 0. Ulangi : ";
            cin >> jumlahBarang[i];
        }

        arrHargaBeli[i] = hargaBeli(kodeBarang[i]);
        arrHargaJual[i] = hargaJual(kodeBarang[i]);
        subtotal[i] = hitungSubtotal(kodeBarang[i], jumlahBarang[i]);
        modal[i] = hitungModal(kodeBarang[i], jumlahBarang[i]);
        keuntungan[i] = hitungKeuntungan(kodeBarang[i], jumlahBarang[i]);
    }

    // Accumulator dan pencarian penjualan terbesar
    int totalBarang = 0, indeksTerbesar = 0;
    double totalOmzet = 0, totalModal = 0, totalKeuntungan = 0;

    for (int i = 0; i < n; i++)
    {
        totalBarang += jumlahBarang[i];
        totalOmzet += subtotal[i];
        totalModal += modal[i];
        totalKeuntungan += keuntungan[i];

        if (subtotal[i] > subtotal[indeksTerbesar])
            indeksTerbesar = i;
    }

    // for kedua: menampilkan seluruh transaksi
    cout << fixed << setprecision(0);
    cout << "\n===========================================================================" << endl;
    cout << left << setw(4) << "No" << setw(11) << "Barang" << setw(8) << "Jumlah"
         << setw(12) << "Harga Beli" << setw(12) << "Harga Jual" << setw(11) << "Subtotal"
         << setw(10) << "Modal" << "Untung" << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left << setw(4) << i + 1 << setw(11) << namaBarang(kodeBarang[i])
             << setw(8) << jumlahBarang[i] << setw(12) << arrHargaBeli[i]
             << setw(12) << arrHargaJual[i] << setw(11) << subtotal[i]
             << setw(10) << modal[i] << keuntungan[i] << endl;
    }
    cout << "===========================================================================" << endl;

    cout << "\n================ REKAP AKHIR ================" << endl;
    cout << "Jumlah Transaksi       : " << n << endl;
    cout << "Total Barang Terjual   : " << totalBarang << endl;
    cout << "Total Omzet            : Rp" << totalOmzet << endl;
    cout << "Total Modal            : Rp" << totalModal << endl;
    cout << "Total Keuntungan       : Rp" << totalKeuntungan << endl;
    cout << "Penjualan Terbesar     : Transaksi ke-" << indeksTerbesar + 1
         << " (" << namaBarang(kodeBarang[indeksTerbesar]) << ", Rp"
         << subtotal[indeksTerbesar] << ")" << endl;
    cout << "=============================================" << endl;

    return 0;
}
