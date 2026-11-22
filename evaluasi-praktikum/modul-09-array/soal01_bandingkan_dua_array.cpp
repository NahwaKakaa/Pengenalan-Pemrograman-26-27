// Evaluasi Modul 9 - Soal 1: Membandingkan Dua Array
// Dua kelompok data (masing-masing 5 bilangan) disimpan di array A dan B.
// Elemen pada indeks yang sama dibandingkan, yang lebih besar disimpan di array hasil.
// Dihitung juga berapa kali A lebih besar, B lebih besar, dan keduanya sama.
#include <iostream>
using namespace std;

const int N = 5;

int main()
{
    int a[N], b[N], hasil[N];
    int aLebihBesar = 0, bLebihBesar = 0, sama = 0;

    cout << "Masukkan 5 bilangan Array A" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "A[" << i << "] : ";
        cin >> a[i];
    }

    cout << "\nMasukkan 5 bilangan Array B" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "B[" << i << "] : ";
        cin >> b[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] > b[i])
        {
            hasil[i] = a[i];
            aLebihBesar++;
        }
        else if (b[i] > a[i])
        {
            hasil[i] = b[i];
            bLebihBesar++;
        }
        else
        {
            hasil[i] = a[i];
            sama++;
        }
    }

    cout << "\nArray A : ";
    for (int i = 0; i < N; i++) cout << a[i] << " ";
    cout << "\nArray B : ";
    for (int i = 0; i < N; i++) cout << b[i] << " ";
    cout << "\n\nHasil   : ";
    for (int i = 0; i < N; i++) cout << hasil[i] << " ";

    cout << "\n\nA lebih besar : " << aLebihBesar << endl;
    cout << "B lebih besar : " << bLebihBesar << endl;
    cout << "Sama          : " << sama << endl;

    return 0;
}
