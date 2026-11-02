// Modul 6 - Program 4: Input Nilai Sampai Pengguna Berhenti (do-while)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double nilai, total = 0;
    int jumlahData = 0, lulus = 0, tidakLulus = 0;
    int lagi;

    do
    {
        cout << "Masukkan nilai : ";
        cin >> nilai;

        if (nilai >= 0 && nilai <= 100)
        {
            jumlahData++;
            total += nilai;
            if (nilai >= 60)
            {
                lulus++;
                cout << "Status         : Lulus" << endl;
            }
            else
            {
                tidakLulus++;
                cout << "Status         : Tidak Lulus" << endl;
            }
        }
        else
        {
            cout << "Nilai tidak valid, tidak ikut dihitung." << endl;
        }

        cout << "Input nilai lagi? (1 = Ya, 0 = Tidak) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 1);

    cout << "================================" << endl;
    cout << "        HASIL PENGOLAHAN" << endl;
    cout << "================================" << endl;
    cout << "Jumlah Data Valid  : " << jumlahData << endl;
    cout << "Total Nilai        : " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Rata-rata          : " << (jumlahData > 0 ? total / jumlahData : 0.0) << endl;
    cout << "Jumlah Lulus       : " << lulus << endl;
    cout << "Jumlah Tidak Lulus : " << tidakLulus << endl;
    cout << "================================" << endl;
    cout << "Program selesai." << endl;
    return 0;
}
