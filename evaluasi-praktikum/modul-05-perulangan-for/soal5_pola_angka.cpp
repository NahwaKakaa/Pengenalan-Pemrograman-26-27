// Evaluasi Modul 5 - Soal 5: Pola angka berdasarkan jumlah baris
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
            cout << kolom;
        }
        cout << endl;
    }
    return 0;
}
