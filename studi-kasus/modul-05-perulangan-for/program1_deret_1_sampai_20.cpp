// Modul 5 - Program 1: Menampilkan dan Menjumlahkan Deret 1 - 20
#include <iostream>
using namespace std;

int main()
{
    int total = 0;

    for (int i = 1; i <= 20; i++)
    {
        cout << i << " ";
        total += i;              // tambahkan bilangan ke total

        if (i % 10 == 0)         // pindah baris setiap 10 bilangan
            cout << endl;
    }

    cout << "Jumlah seluruh bilangan = " << total << endl;
    return 0;
}
