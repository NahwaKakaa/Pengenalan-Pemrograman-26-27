// Evaluasi Modul 6 - Soal 7: Simulasi penjualan dari persediaan toko (do-while)
// Subtotal  = jumlah x harga jual
// Modal     = jumlah x harga beli
// Keuntungan = subtotal - modal
#include <iostream>
using namespace std;

int main()
{
    int stokAwal, stok, beli, lanjut = 1;
    long long hargaBeli, hargaJual;
    int berhasil = 0, ditolak = 0, totalTerjual = 0;
    long long totalOmzet = 0, totalModal = 0, totalUntung = 0;

    cout << "Stok awal            : ";
    cin >> stokAwal;
    cout << "Harga beli per barang: Rp";
    cin >> hargaBeli;
    cout << "Harga jual per barang: Rp";
    cin >> hargaJual;
    stok = stokAwal;

    do
    {
        cout << "\nJumlah barang dibeli : ";
        cin >> beli;

        if (beli > stok || beli <= 0)
        {
            ditolak++;
            if (beli > stok)
                cout << "\nStok tidak mencukupi." << endl;
            else
                cout << "\nJumlah barang tidak valid." << endl;
            cout << "Stok tersedia        : " << stok << endl;
        }
        else
        {
            long long subtotal = beli * hargaJual;
            long long modal = beli * hargaBeli;
            long long untung = subtotal - modal;

            stok -= beli;
            berhasil++;
            totalTerjual += beli;
            totalOmzet += subtotal;
            totalModal += modal;
            totalUntung += untung;

            cout << "\nTransaksi berhasil." << endl;
            cout << "Subtotal             : Rp" << subtotal << endl;
            cout << "Modal Barang         : Rp" << modal << endl;
            cout << "Keuntungan           : Rp" << untung << endl;
            cout << "Sisa Stok            : " << stok << endl;
        }

        if (stok == 0)
        {
            cout << "\nStok habis, transaksi dihentikan otomatis." << endl;
            break;
        }

        cout << "\nLanjut transaksi? (1 = Ya, 0 = Tidak) : ";
        cin >> lanjut;
    } while (lanjut == 1);

    cout << "\n========================================" << endl;
    cout << "            REKAP PENJUALAN" << endl;
    cout << "========================================" << endl;
    cout << "Stok Awal            : " << stokAwal << endl;
    cout << "Transaksi Berhasil   : " << berhasil << endl;
    cout << "Transaksi Ditolak    : " << ditolak << endl;
    cout << "Total Barang Terjual : " << totalTerjual << endl;
    cout << "Sisa Stok            : " << stok << endl;
    cout << endl;
    cout << "Total Omzet          : Rp" << totalOmzet << endl;
    cout << "Total Modal Terjual  : Rp" << totalModal << endl;
    cout << "Total Keuntungan     : Rp" << totalUntung << endl;
    cout << "========================================" << endl;
    return 0;
}
