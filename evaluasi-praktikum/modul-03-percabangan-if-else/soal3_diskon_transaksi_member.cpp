// Evaluasi Modul 3 - Soal 3: Nested If - Potongan Biaya
// Batas transaksi = Rp400.000 + (dua digit terakhir stambuk x Rp1.000)
//
// Urutan keputusan program:
//   1. Hitung batas transaksi dari dua digit terakhir stambuk.
//   2. Cek apakah total transaksi >= batas.
//      - Jika belum, diskon 0% (status member tidak diperiksa).
//      - Jika ya, diskon 10%, lalu (if di dalam if) cek status member:
//        jika member, diskon ditambah 5% menjadi 15%.
//   3. Hitung nominal diskon dan total bayar.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double totalTransaksi;
    int member, duaDigit;

    cout << "Masukkan total transaksi          : ";
    cin >> totalTransaksi;
    cout << "Status member (1 = ya, 0 = tidak) : ";
    cin >> member;
    cout << "Dua digit terakhir stambuk        : ";
    cin >> duaDigit;

    double batas = 400000 + (duaDigit * 1000);
    int persenDiskon = 0;

    if (totalTransaksi >= batas)
    {
        persenDiskon = 10;
        if (member == 1)
        {
            persenDiskon += 5;
        }
    }
    else
    {
        persenDiskon = 0;
    }

    double nominalDiskon = totalTransaksi * persenDiskon / 100.0;
    double totalBayar = totalTransaksi - nominalDiskon;

    cout << fixed << setprecision(2);
    cout << "\nBatas Transaksi   : Rp" << batas << endl;
    cout << "Total Transaksi   : Rp" << totalTransaksi << endl;
    cout << "Persentase Diskon : " << persenDiskon << "%" << endl;
    cout << "Nominal Diskon    : Rp" << nominalDiskon << endl;
    cout << "Total Bayar       : Rp" << totalBayar << endl;
    return 0;
}
