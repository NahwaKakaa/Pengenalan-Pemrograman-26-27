// Modul 5 - Program 2: Penjumlahan deret dengan batas dari pengguna
#include <iostream>
using namespace std;

int main()
{
    int batas, total = 0;

    cout << "Masukkan batas akhir : ";
    cin >> batas;

    for (int i = 1; i <= batas; i++)
    {
        cout << i << " ";
        total += i;
    }
    cout << endl;
    cout << "Jumlah = " << total << endl;
    return 0;
}
