// Evaluasi Modul 8 - Soal 7: Faktorial dan Kombinasi
// faktorial() dibuat rekursif, lalu dipakai di dalam kombinasi():
//   C(n, r) = n! / (r! x (n - r)!)
// Syarat: 0 <= r <= n, dan n <= 20 agar n! masih muat di long long
#include <iostream>
using namespace std;

long long faktorial(int n)
{
    if (n <= 1)
        return 1;
    return n * faktorial(n - 1);
}

long long kombinasi(int n, int r)
{
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main()
{
    int n, r;

    cout << "Masukkan n (0 - 20) : ";
    cin >> n;
    cout << "Masukkan r          : ";
    cin >> r;

    if (n < 0 || n > 20)
    {
        cout << "n harus di antara 0 sampai 20." << endl;
    }
    else if (r < 0 || r > n)
    {
        cout << "r tidak boleh negatif atau lebih besar dari n." << endl;
    }
    else
    {
        cout << "\n" << n << "! = " << faktorial(n) << endl;
        cout << r << "! = " << faktorial(r) << endl;
        cout << "(" << n << " - " << r << ")! = " << faktorial(n - r) << endl;
        cout << "C(" << n << ", " << r << ") = " << kombinasi(n, r) << endl;
    }
    return 0;
}
