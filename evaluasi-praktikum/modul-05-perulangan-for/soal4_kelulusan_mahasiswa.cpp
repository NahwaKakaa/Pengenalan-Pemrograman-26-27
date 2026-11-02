// Evaluasi Modul 5 - Soal 4: Rekap kelulusan beberapa mahasiswa
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, lulus = 0, tidakLulus = 0;
    double nilai, totalNilai = 0;

    cout << "Jumlah mahasiswa : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Nilai mahasiswa ke-" << i << " : ";
        cin >> nilai;

        totalNilai += nilai;
        if (nilai >= 60)
            lulus++;
        else
            tidakLulus++;
    }

    cout << "\nJumlah Lulus       : " << lulus << endl;
    cout << "Jumlah Tidak Lulus : " << tidakLulus << endl;
    cout << "Total Nilai        : " << totalNilai << endl;
    if (n > 0)
        cout << "Rata-rata          : " << fixed << setprecision(2) << totalNilai / n << endl;
    else
        cout << "Rata-rata          : -" << endl;
    return 0;
}
