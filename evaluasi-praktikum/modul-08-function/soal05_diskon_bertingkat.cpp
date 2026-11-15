// Evaluasi Modul 8 - Soal 5: Diskon Bertingkat
// Function:
//   - hitungDiskonBelanja(total)         : diskon berdasarkan total belanja
//   - hitungDiskonMember(total, member)  : diskon tambahan untuk member
//   - hitungTotalDiskon(total, member)   : diskon belanja + diskon member
//   - hitungTotalBayar(total, member)    : memanggil hitungTotalDiskon()
//
// Besar diskon tidak disebutkan di modul, jadi dipakai asumsi:
//   - total belanja >= Rp500.000  : diskon 10%
//   - total belanja >= Rp250.000  : diskon 5%
//   - di bawah Rp250.000          : tanpa diskon belanja
//   - member                      : tambahan diskon 5% dari total belanja
#include <iostream>
#include <iomanip>
using namespace std;

double hitungDiskonBelanja(double total)
{
    if (total >= 500000)
        return total * 0.10;
    else if (total >= 250000)
        return total * 0.05;
    else
        return 0;
}

double hitungDiskonMember(double total, bool member)
{
    if (member)
        return total * 0.05;
    return 0;
}

double hitungTotalDiskon(double total, bool member)
{
    return hitungDiskonBelanja(total) + hitungDiskonMember(total, member);
}

// Total bayar memanggil function total diskon
double hitungTotalBayar(double total, bool member)
{
    return total - hitungTotalDiskon(total, member);
}

int main()
{
    double totalBelanja;
    char jawab;

    cout << "Total belanja         : Rp";
    cin >> totalBelanja;
    cout << "Member? (y/n)         : ";
    cin >> jawab;

    bool member = (jawab == 'y' || jawab == 'Y');

    cout << fixed << setprecision(0);
    cout << "\n========= RINCIAN BAYAR =========" << endl;
    cout << "Total Belanja  : Rp" << totalBelanja << endl;
    cout << "Status         : " << (member ? "Member" : "Bukan Member") << endl;
    cout << "Diskon Belanja : Rp" << hitungDiskonBelanja(totalBelanja) << endl;
    cout << "Diskon Member  : Rp" << hitungDiskonMember(totalBelanja, member) << endl;
    cout << "Total Diskon   : Rp" << hitungTotalDiskon(totalBelanja, member) << endl;
    cout << "Total Bayar    : Rp" << hitungTotalBayar(totalBelanja, member) << endl;
    cout << "=================================" << endl;
    return 0;
}
