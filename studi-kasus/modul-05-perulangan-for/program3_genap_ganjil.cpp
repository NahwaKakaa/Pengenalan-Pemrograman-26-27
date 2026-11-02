// Modul 5 - Program 3: Bilangan Genap dan Ganjil
// "Jumlah bilangan" di sini = banyaknya bilangan (sesuai contoh output modul)
#include <iostream>
using namespace std;

int main()
{
    int batas;
    int banyakGenap = 0, banyakGanjil = 0;

    cout << "Masukkan batas akhir: ";
    cin >> batas;

    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            banyakGenap++;
        }
    }
    cout << endl;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            banyakGanjil++;
        }
    }
    cout << endl << endl;

    cout << "Jumlah bilangan genap: " << banyakGenap << endl;
    cout << "Jumlah bilangan ganjil: " << banyakGanjil << endl;
    return 0;
}
