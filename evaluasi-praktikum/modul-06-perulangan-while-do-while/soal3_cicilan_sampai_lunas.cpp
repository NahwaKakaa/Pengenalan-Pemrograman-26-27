// Evaluasi Modul 6 - Soal 3: Pembayaran cicilan sampai lunas (while)
#include <iostream>
using namespace std;

int main()
{
    long long totalTagihan, sisa, bayar;
    int berhasil = 0;

    cout << "Total tagihan : ";
    cin >> totalTagihan;
    sisa = totalTagihan;

    while (sisa > 0)
    {
        cout << "\nPembayaran ke-" << berhasil + 1 << " : ";
        cin >> bayar;

        if (bayar > sisa)
        {
            cout << "Pembayaran melebihi sisa tagihan." << endl;
        }
        else if (bayar <= 0)
        {
            cout << "Pembayaran harus lebih dari 0." << endl;
        }
        else
        {
            sisa -= bayar;
            berhasil++;
            cout << "Sisa tagihan    : " << sisa << endl;
        }
    }

    cout << "\n================================" << endl;
    cout << "         TAGIHAN LUNAS" << endl;
    cout << "================================" << endl;
    cout << "Total Tagihan       : Rp" << totalTagihan << endl;
    cout << "Jumlah Pembayaran   : " << berhasil << endl;
    cout << "Sisa Tagihan        : Rp" << sisa << endl;
    cout << "================================" << endl;
    return 0;
}
