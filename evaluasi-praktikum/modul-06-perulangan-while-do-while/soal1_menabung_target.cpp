// Evaluasi Modul 6 - Soal 1: Menabung sampai target tercapai (while)
#include <iostream>
using namespace std;

int main()
{
    long long target, tabungan, total;
    int ke = 1;   // tabungan awal dihitung sebagai tabungan ke-1

    cout << "Target tabungan    : ";
    cin >> target;
    cout << "Tabungan awal      : ";
    cin >> total;

    while (total < target)
    {
        ke++;
        cout << "Tabungan " << ke << " : ";
        cin >> tabungan;
        total += tabungan;
        cout << "Total tabungan saat ini: " << total << endl;
    }

    cout << "Target tercapai." << endl;
    cout << "Jumlah tabungan + tabungan awal : " << ke << endl;
    return 0;
}
