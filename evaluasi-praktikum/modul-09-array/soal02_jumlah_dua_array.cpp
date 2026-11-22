// Evaluasi Modul 9 - Soal 2: Menjumlahkan Dua Array
// Array C dibentuk dari penjumlahan elemen dengan indeks yang sama:
//   C[i] = A[i] + B[i]
// Ketiga array ditampilkan, lalu dihitung total seluruh isi Array C.
#include <iostream>
using namespace std;

const int N = 5;

int main()
{
    int a[N], b[N], c[N];
    int totalC = 0;

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
        c[i] = a[i] + b[i];
        totalC += c[i];
    }

    cout << "\nArray A : ";
    for (int i = 0; i < N; i++) cout << a[i] << " ";
    cout << "\nArray B : ";
    for (int i = 0; i < N; i++) cout << b[i] << " ";
    cout << "\nArray C : ";
    for (int i = 0; i < N; i++) cout << c[i] << " ";

    cout << "\n\nTotal Array C : " << totalC << endl;

    return 0;
}
