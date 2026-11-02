// Evaluasi Modul 6 - Soal 4: Data suhu berulang (do-while)
// < 20 Dingin, 20 - 30 Normal, > 30 Panas
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double suhu, total = 0;
    int jumlah = 0, dingin = 0, normal = 0, panas = 0;
    int lagi;

    do
    {
        cout << "Masukkan suhu : ";
        cin >> suhu;

        jumlah++;
        total += suhu;

        if (suhu < 20)
        {
            dingin++;
            cout << "Kategori      : Dingin" << endl;
        }
        else if (suhu <= 30)
        {
            normal++;
            cout << "Kategori      : Normal" << endl;
        }
        else
        {
            panas++;
            cout << "Kategori      : Panas" << endl;
        }

        cout << "Masukkan data lagi? (1 = Ya, 0 = Tidak) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 1);

    cout << "Jumlah Data : " << jumlah << endl;
    cout << "Dingin      : " << dingin << endl;
    cout << "Normal      : " << normal << endl;
    cout << "Panas       : " << panas << endl;
    cout << "Rata-rata   : " << fixed << setprecision(2) << total / jumlah << endl;
    return 0;
}
