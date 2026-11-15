// Evaluasi Modul 8 - Soal 10: Rekap Penjualan dan Keuntungan
// Function:
//   - hitungSubtotal(jual, jumlah)          : harga jual x jumlah
//   - hitungModal(beli, jumlah)             : harga beli x jumlah
//   - hitungKeuntungan(beli, jual, jumlah)  : memanggil hitungSubtotal() dan hitungModal()
//   - hitungPersentase(beli, jual, jumlah)  : keuntungan / modal x 100%
//   - transaksiValid(beli, jual, jumlah)    : semua nilai harus lebih dari 0
// Transaksi tidak valid tidak ikut dijumlahkan ke omzet, modal, dan keuntungan.
#include <iostream>
#include <iomanip>
using namespace std;

double hitungSubtotal(double jual, int jumlah)
{
    return jual * jumlah;
}

double hitungModal(double beli, int jumlah)
{
    return beli * jumlah;
}

double hitungKeuntungan(double beli, double jual, int jumlah)
{
    return hitungSubtotal(jual, jumlah) - hitungModal(beli, jumlah);
}

double hitungPersentase(double beli, double jual, int jumlah)
{
    return hitungKeuntungan(beli, jual, jumlah) / hitungModal(beli, jumlah) * 100;
}

bool transaksiValid(double beli, double jual, int jumlah)
{
    return beli > 0 && jual > 0 && jumlah > 0;
}

int main()
{
    int n;
    int jumlahValid = 0, jumlahTidakValid = 0;
    double totalOmzet = 0, totalModal = 0, totalKeuntungan = 0;

    cout << "Jumlah transaksi : ";
    cin >> n;

    cout << fixed << setprecision(0);

    for (int i = 1; i <= n; i++)
    {
        double beli, jual;
        int jumlah;

        cout << "\n=== TRANSAKSI KE-" << i << " ===" << endl;
        cout << "Harga beli    : Rp";
        cin >> beli;
        cout << "Harga jual    : Rp";
        cin >> jual;
        cout << "Jumlah barang : ";
        cin >> jumlah;

        if (!transaksiValid(beli, jual, jumlah))
        {
            cout << "Transaksi tidak valid (harga dan jumlah harus lebih dari 0)." << endl;
            jumlahTidakValid++;
            continue;
        }

        jumlahValid++;
        totalOmzet += hitungSubtotal(jual, jumlah);
        totalModal += hitungModal(beli, jumlah);
        totalKeuntungan += hitungKeuntungan(beli, jual, jumlah);

        cout << "Subtotal      : Rp" << hitungSubtotal(jual, jumlah) << endl;
        cout << "Modal         : Rp" << hitungModal(beli, jumlah) << endl;
        cout << "Keuntungan    : Rp" << hitungKeuntungan(beli, jual, jumlah) << endl;
        cout << "Persentase    : " << setprecision(2) << hitungPersentase(beli, jual, jumlah)
             << "%" << setprecision(0) << endl;
    }

    cout << "\n=========== REKAP ===========" << endl;
    cout << "Total Omzet       : Rp" << totalOmzet << endl;
    cout << "Total Modal       : Rp" << totalModal << endl;
    cout << "Total Keuntungan  : Rp" << totalKeuntungan << endl;
    cout << "Transaksi Valid   : " << jumlahValid << endl;
    cout << "Transaksi Invalid : " << jumlahTidakValid << endl;
    cout << "=============================" << endl;
    return 0;
}
