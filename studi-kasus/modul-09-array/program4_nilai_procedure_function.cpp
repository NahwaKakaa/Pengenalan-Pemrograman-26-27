// Modul 9 - Program 4: Pengolahan Nilai dengan Procedure dan Function
// - Tugas, UTS, UAS disimpan di array yang berbeda (array global)
// - hitungNilaiAkhir(), tentukanGrade(), cekLulus() dipanggil di dalam for pertama,
//   hasilnya disimpan ke array nilaiAkhir, grade, dan status
// - Procedure tampilHasil() memakai for kedua untuk menampilkan semua data
// Jumlah mahasiswa tidak dibatasi di modul; di sini maksimal 50 (ukuran array).
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAKS = 50;

// Variabel global array
double tugas[MAKS], uts[MAKS], uas[MAKS], nilaiAkhir[MAKS];
char grade[MAKS];
string status[MAKS];

double hitungNilaiAkhir(double t, double u, double a)
{
    return (t * 0.30) + (u * 0.30) + (a * 0.40);
}

char tentukanGrade(double nilai)
{
    if (nilai >= 80)
        return 'A';
    else if (nilai >= 70)
        return 'B';
    else if (nilai >= 60)
        return 'C';
    else if (nilai >= 50)
        return 'D';
    else
        return 'E';
}

// A - C = Lulus, D - E = Tidak Lulus
string cekLulus(char g)
{
    if (g == 'A' || g == 'B' || g == 'C')
        return "Lulus";
    return "Tidak Lulus";
}

// Procedure: menampilkan hasil seluruh mahasiswa dari array
void tampilHasil(int jumlahMahasiswa)
{
    int jumlahLulus = 0, jumlahTidakLulus = 0;

    cout << "\n==================================================" << endl;
    cout << left << setw(5) << "No" << setw(7) << "Tugas" << setw(6) << "UTS"
         << setw(6) << "UAS" << setw(13) << "Nilai Akhir" << setw(7) << "Grade" << "Status" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << left << setw(5) << i + 1
             << setw(7) << tugas[i] << setw(6) << uts[i] << setw(6) << uas[i]
             << fixed << setprecision(2) << setw(13) << nilaiAkhir[i]
             << setw(7) << grade[i] << status[i] << endl;
        cout.unsetf(ios::fixed);
        cout << setprecision(6);

        if (status[i] == "Lulus")
            jumlahLulus++;
        else
            jumlahTidakLulus++;
    }
    cout << "==================================================" << endl;

    cout << "\nJumlah Lulus       : " << jumlahLulus << endl;
    cout << "Jumlah Tidak Lulus : " << jumlahTidakLulus << endl;
}

int main()
{
    int jumlahMahasiswa;

    cout << "Jumlah mahasiswa (maks " << MAKS << ") : ";
    cin >> jumlahMahasiswa;
    while (jumlahMahasiswa < 1 || jumlahMahasiswa > MAKS)
    {
        cout << "Jumlah harus 1 - " << MAKS << ". Ulangi : ";
        cin >> jumlahMahasiswa;
    }

    // for pertama: input dan pengolahan, indeks i menjaga data tidak tertimpa
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nilai Tugas : ";
        cin >> tugas[i];
        cout << "Nilai UTS   : ";
        cin >> uts[i];
        cout << "Nilai UAS   : ";
        cin >> uas[i];

        nilaiAkhir[i] = hitungNilaiAkhir(tugas[i], uts[i], uas[i]);
        grade[i] = tentukanGrade(nilaiAkhir[i]);
        status[i] = cekLulus(grade[i]);
    }

    // for kedua ada di dalam procedure tampilHasil()
    tampilHasil(jumlahMahasiswa);

    return 0;
}
