// Evaluasi Modul 5 - Soal 6: Pola angka dan bintang selang-seling
// Baris ganjil berisi nomor baris, baris genap berisi '*'
// 1
// **
// 333
// ****
// 55555
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (int baris = 1; baris <= n; baris++)
    {
        for (int kolom = 1; kolom <= baris; kolom++)
        {
            if (baris % 2 == 1)
                cout << baris;
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
