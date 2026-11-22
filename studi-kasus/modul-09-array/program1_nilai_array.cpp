// Modul 9 - Program 1: Input, Tampil, dan Pengolahan Nilai Array
// - Jumlah mahasiswa maksimal 10
// - Nilai dimasukkan ke array dengan for, lalu ditampilkan kembali dengan for
// - Menghitung total, rata-rata, nilai tertinggi, nilai terendah
// - if-else untuk menghitung jumlah Lulus (>= 60) dan Tidak Lulus (< 60)
#include <iostream>
#include <iomanip>
using namespace std;

const int MAKS = 10;

int main()
{
    int nilai[MAKS];
    int n;

    cout << "Jumlah mahasiswa (maks " << MAKS << ") : ";
    cin >> n;
    while (n < 1 || n > MAKS)
    {
        cout << "Jumlah harus 1 - " << MAKS << ". Ulangi : ";
        cin >> n;
    }

    // Input nilai ke dalam array
    for (int i = 0; i < n; i++)
    {
        cout << "Nilai mahasiswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    // Tampilkan kembali seluruh nilai
    cout << "\nNilai : ";
    for (int i = 0; i < n; i++)
        cout << nilai[i] << " ";
    cout << endl;

    // Pengolahan nilai
    int total = 0;
    int tertinggi = nilai[0], terendah = nilai[0];
    int jumlahLulus = 0, jumlahTidakLulus = 0;

    for (int i = 0; i < n; i++)
    {
        total += nilai[i];

        if (nilai[i] > tertinggi)
            tertinggi = nilai[i];
        if (nilai[i] < terendah)
            terendah = nilai[i];

        if (nilai[i] >= 60)
            jumlahLulus++;
        else
            jumlahTidakLulus++;
    }

    double rataRata = (double)total / n;

    cout << "\nTotal Nilai        : " << total << endl;
    cout << "Rata-rata          : " << fixed << setprecision(2) << rataRata << endl;
    cout << "Nilai Tertinggi    : " << tertinggi << endl;
    cout << "Nilai Terendah     : " << terendah << endl;
    cout << "Jumlah Lulus       : " << jumlahLulus << endl;
    cout << "Jumlah Tidak Lulus : " << jumlahTidakLulus << endl;

    return 0;
}
