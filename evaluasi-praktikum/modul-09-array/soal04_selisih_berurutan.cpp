// Evaluasi Modul 9 - Soal 4: Selisih Elemen Berurutan
// 6 bilangan disimpan di array data, selisihnya disimpan di array kedua:
//   Selisih[i] = Data[i+1] - Data[i]   (menghasilkan 5 selisih)
// Lalu dihitung jumlah selisih positif dan negatif.
#include <iostream>
using namespace std;

const int N = 6;

int main()
{
    int dataAwal[N], selisih[N - 1];
    int positif = 0, negatif = 0;

    cout << "Masukkan 6 bilangan" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Data[" << i << "] : ";
        cin >> dataAwal[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        selisih[i] = dataAwal[i + 1] - dataAwal[i];

        if (selisih[i] > 0)
            positif++;
        else if (selisih[i] < 0)
            negatif++;
    }

    cout << "\nData Awal : ";
    for (int i = 0; i < N; i++) cout << dataAwal[i] << " ";
    cout << "\nSelisih   : ";
    for (int i = 0; i < N - 1; i++) cout << selisih[i] << " ";

    cout << "\n\nJumlah selisih positif : " << positif << endl;
    cout << "Jumlah selisih negatif : " << negatif << endl;

    return 0;
}
