// Evaluasi Modul 8 - Soal 8: Pemeriksaan Bilangan
// bool cekGenap(bilangan) : true jika bilangan % 2 == 0
// Perulangan for menampilkan bilangan genap dan ganjil dari 1 sampai batas akhir,
// sekaligus menghitung jumlah masing-masing.
#include <iostream>
using namespace std;

bool cekGenap(int bilangan)
{
    return bilangan % 2 == 0;
}

int main()
{
    int batas, jumlahGenap = 0, jumlahGanjil = 0;

    cout << "Masukkan batas akhir : ";
    cin >> batas;

    cout << "\nBilangan genap  : ";
    for (int i = 1; i <= batas; i++)
    {
        if (cekGenap(i))
        {
            cout << i << " ";
            jumlahGenap++;
        }
    }

    cout << "\nBilangan ganjil : ";
    for (int i = 1; i <= batas; i++)
    {
        if (!cekGenap(i))
        {
            cout << i << " ";
            jumlahGanjil++;
        }
    }

    cout << "\n\nJumlah bilangan genap  : " << jumlahGenap << endl;
    cout << "Jumlah bilangan ganjil : " << jumlahGanjil << endl;
    return 0;
}
