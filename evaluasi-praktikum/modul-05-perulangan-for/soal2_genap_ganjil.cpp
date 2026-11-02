// Evaluasi Modul 5 - Soal 2: Genap dan ganjil dengan for + if-else
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int batas;
    int banyakGenap = 0, banyakGanjil = 0;
    string daftarGenap = "", daftarGanjil = "";

    cout << "Masukkan batas akhir: ";
    cin >> batas;

    // Satu kali perulangan, dikelompokkan dengan if-else
    for (int i = 1; i <= batas; i++)
    {
        if (i % 2 == 0)
        {
            daftarGenap += to_string(i) + " ";
            banyakGenap++;
        }
        else
        {
            daftarGanjil += to_string(i) + " ";
            banyakGanjil++;
        }
    }

    cout << "\nBilangan Genap: " << daftarGenap << endl;
    cout << "Bilangan Ganjil: " << daftarGanjil << endl;
    cout << "Jumlah bilangan genap: " << banyakGenap << endl;
    cout << "Jumlah bilangan ganjil: " << banyakGanjil << endl;
    return 0;
}
