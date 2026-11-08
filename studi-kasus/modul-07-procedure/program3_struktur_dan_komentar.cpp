/*
 * Modul 7 - Program 3: Struktur dan Komentar
 * Memproses nilai beberapa mahasiswa menggunakan procedure:
 *   - inputNilai()  : menerima nilai Tugas, UTS, dan UAS
 *   - hitungNilai() : menghitung nilai akhir, grade, dan status
 *   - tampilHasil() : menampilkan hasil penilaian setiap mahasiswa
 * Rumus: Nilai Akhir = (Tugas x 30%) + (UTS x 30%) + (UAS x 40%)
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ===== Variabel global untuk data mahasiswa yang sedang diproses =====
string nama;
double tugas, uts, uas, nilaiAkhir;
char grade;
string status;

// ===== Counter rekap =====
int jumlahLulus = 0, jumlahTidakLulus = 0;

// Procedure: menerima nilai Tugas, UTS, UAS
void inputNilai()
{
    cout << "Nilai Tugas : ";
    cin >> tugas;
    cout << "Nilai UTS   : ";
    cin >> uts;
    cout << "Nilai UAS   : ";
    cin >> uas;
}

// Procedure: menghitung nilai akhir, grade, status, dan counter
void hitungNilai()
{
    nilaiAkhir = (tugas * 0.30) + (uts * 0.30) + (uas * 0.40);

    if (nilaiAkhir >= 80)
        grade = 'A';
    else if (nilaiAkhir >= 70)
        grade = 'B';
    else if (nilaiAkhir >= 60)
        grade = 'C';
    else if (nilaiAkhir >= 50)
        grade = 'D';
    else
        grade = 'E';

    // Grade A, B, C = Lulus; D, E = Tidak Lulus
    if (grade == 'A' || grade == 'B' || grade == 'C')
    {
        status = "LULUS";
        jumlahLulus++;
    }
    else
    {
        status = "TIDAK LULUS";
        jumlahTidakLulus++;
    }
}

// Procedure: menampilkan hasil penilaian
void tampilHasil()
{
    cout << "\nHASIL PENILAIAN" << endl;
    cout << "Nilai Akhir : " << fixed << setprecision(2) << nilaiAkhir << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Status      : " << status << endl;
    cout << "================================" << endl;
}

int main()
{
    int n;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    // Proses data setiap mahasiswa dengan perulangan for
    for (int i = 1; i <= n; i++)
    {
        cout << "\n================================" << endl;
        cout << "DATA MAHASISWA KE-" << i << endl;
        cout << "================================" << endl;
        cout << "Nama        : ";
        getline(cin >> ws, nama);

        inputNilai();
        hitungNilai();
        tampilHasil();
    }

    // Rekap kelulusan
    cout << "\n================================" << endl;
    cout << "        REKAP KELULUSAN" << endl;
    cout << "================================" << endl;
    cout << "Jumlah Mahasiswa     : " << n << endl;
    cout << "Jumlah Lulus         : " << jumlahLulus << endl;
    cout << "Jumlah Tidak Lulus   : " << jumlahTidakLulus << endl;
    cout << "================================" << endl;

    return 0;
}
