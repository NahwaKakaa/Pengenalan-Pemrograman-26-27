// Modul 3 - Program 10: Diskon belanja dengan nested if
// Contoh: total 600000, member 1 -> diskon 15%, bayar Rp510000
#include <iostream>
using namespace std;

int main()
{
    long long totalBelanja;
    int member;
    int persenDiskon = 0;

    cout << "Masukkan total belanja : ";
    cin >> totalBelanja;
    cout << "Status member (1/0)    : ";
    cin >> member;

    // Cek total belanja dulu, baru cek status member
    if (totalBelanja >= 500000)
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

    long long nominalDiskon = totalBelanja * persenDiskon / 100;
    long long totalBayar = totalBelanja - nominalDiskon;

    cout << endl;
    cout << "Total Belanja : Rp" << totalBelanja << endl;
    cout << "Diskon        : " << persenDiskon << "% (Rp" << nominalDiskon << ")" << endl;
    cout << "Total Bayar   : Rp" << totalBayar << endl;
    return 0;
}
