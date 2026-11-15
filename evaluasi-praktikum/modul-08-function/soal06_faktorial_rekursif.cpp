// Evaluasi Modul 8 - Soal 6: Faktorial Rekursif
// n! = n x (n-1)!, kondisi berhenti: n = 0 atau n = 1 menghasilkan 1
// Memakai long long sehingga bisa sampai 20! (21! sudah melebihi kapasitasnya)
#include <iostream>
using namespace std;

long long faktorial(int n)
{
    if (n == 0 || n == 1)       // kondisi berhenti
        return 1;
    return n * faktorial(n - 1);  // pemanggilan rekursif
}

int main()
{
    int n;
    cout << "Masukkan n (0 - 20) : ";
    cin >> n;

    if (n < 0 || n > 20)
    {
        cout << "n harus di antara 0 sampai 20." << endl;
        return 0;
    }

    cout << n << "! = " << faktorial(n) << endl;
    return 0;
}
