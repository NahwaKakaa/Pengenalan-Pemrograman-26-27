// Modul 8 - Program 1: Pengolahan Nilai Mahasiswa dengan Beberapa Function
// Function:
//   - hitungNilaiAkhir(tugas, uts, uas) : mengembalikan nilai akhir (double)
//   - tentukanGrade(nilaiAkhir)         : mengembalikan grade (char)
//   - cekLulus(grade)                   : mengembalikan status lulus (bool)
// Procedure:
//   - tampilHasil(...)                  : menampilkan nama, nilai akhir, grade, status
// Rumus: Nilai Akhir = (Tugas x 30%) + (UTS x 30%) + (UAS x 40%)
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function: menghitung nilai akhir
double hitungNilaiAkhir(double tugas, double uts, double uas)
{
    return (tugas * 0.30) + (uts * 0.30) + (uas * 0.40);
}

// Function: menentukan grade dari nilai akhir
char tentukanGrade(double nilaiAkhir)
{
    if (nilaiAkhir >= 80)
        return 'A';
    else if (nilaiAkhir >= 70)
        return 'B';
    else if (nilaiAkhir >= 60)
        return 'C';
    else if (nilaiAkhir >= 50)
        return 'D';
    else
        return 'E';
}

// Function: Grade A, B, C = Lulus; D, E = Tidak Lulus
bool cekLulus(char grade)
{
    return grade == 'A' || grade == 'B' || grade == 'C';
}

// Procedure: menampilkan hasil satu mahasiswa
void tampilHasil(string nama, double nilaiAkhir, char grade, bool lulus)
{
    cout << "\nHASIL PENILAIAN" << endl;
    cout << "Nama        : " << nama << endl;
    cout << "Nilai Akhir : " << fixed << setprecision(2) << nilaiAkhir << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Status      : " << (lulus ? "LULUS" : "TIDAK LULUS") << endl;
    cout << "================================" << endl;
}

int main()
{
    int n;
    int jumlahLulus = 0, jumlahTidakLulus = 0;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string nama;
        double tugas, uts, uas;

        cout << "\n================================" << endl;
        cout << "DATA MAHASISWA KE-" << i << endl;
        cout << "================================" << endl;
        cout << "Nama        : ";
        getline(cin >> ws, nama);
        cout << "Nilai Tugas : ";
        cin >> tugas;
        cout << "Nilai UTS   : ";
        cin >> uts;
        cout << "Nilai UAS   : ";
        cin >> uas;

        // Hasil function satu dipakai oleh function berikutnya
        double nilaiAkhir = hitungNilaiAkhir(tugas, uts, uas);
        char grade = tentukanGrade(nilaiAkhir);
        bool lulus = cekLulus(grade);

        tampilHasil(nama, nilaiAkhir, grade, lulus);

        if (lulus)
            jumlahLulus++;
        else
            jumlahTidakLulus++;
    }

    cout << "\n================================" << endl;
    cout << "        REKAP KELULUSAN" << endl;
    cout << "================================" << endl;
    cout << "Jumlah Mahasiswa     : " << n << endl;
    cout << "Jumlah Lulus         : " << jumlahLulus << endl;
    cout << "Jumlah Tidak Lulus   : " << jumlahTidakLulus << endl;
    cout << "================================" << endl;

    return 0;
}
