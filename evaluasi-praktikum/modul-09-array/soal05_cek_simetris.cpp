// Evaluasi Modul 9 - Soal 5: Memeriksa Array Simetris
// Array disebut simetris jika susunannya sama dibaca dari depan maupun belakang,
// misalnya 1 2 3 2 1.
// Function bool cekSimetris() membandingkan elemen ke-i dari depan dengan
// elemen ke-i dari belakang. Hasilnya ditampilkan dari main().
#include <iostream>
using namespace std;

const int MAKS = 50;

bool cekSimetris(int angka[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (angka[i] != angka[n - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int angka[MAKS];
    int n;

    cout << "Jumlah data (maks " << MAKS << ") : ";
    cin >> n;
    while (n < 1 || n > MAKS)
    {
        cout << "Jumlah harus 1 - " << MAKS << ". Ulangi : ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> angka[i];
    }

    cout << "\nData  : ";
    for (int i = 0; i < n; i++) cout << angka[i] << " ";

    if (cekSimetris(angka, n))
        cout << "\nHasil : SIMETRIS" << endl;
    else
        cout << "\nHasil : TIDAK SIMETRIS" << endl;

    return 0;
}
