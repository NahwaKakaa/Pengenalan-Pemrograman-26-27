// Modul 2 - Program 6: Hasil Perhitungan Nilai
// Input : nilai tugas, UTS, UAS, dan jumlah kehadiran
// Rumus :
//   nilai sebelum bonus  = (tugas + uas + uts) / 3
//   nilai akhir          = nilai sebelum bonus + bonus
//   persentase kehadiran = (jumlah kehadiran / total pertemuan) * 100
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Konstanta (nilai tetap selama program berjalan)
    const double BONUS = 2.0;
    const int JUMLAH_PERTEMUAN = 14;

    // Variabel input
    double tugas, uts, uas;
    int kehadiran;

    cout << "Masukkan nilai tugas      : ";
    cin >> tugas;
    cout << "Masukkan nilai UTS        : ";
    cin >> uts;
    cout << "Masukkan nilai UAS        : ";
    cin >> uas;
    cout << "Masukkan jumlah kehadiran : ";
    cin >> kehadiran;

    // Proses perhitungan
    double nilaiSebelumBonus = (tugas + uas + uts) / 3;
    double nilaiAkhir = nilaiSebelumBonus + BONUS;
    double persenKehadiran = static_cast<double>(kehadiran) / JUMLAH_PERTEMUAN * 100;

    // Evaluasi logika (disimpan dalam bool)
    bool nilaiLulus = nilaiAkhir >= 75;
    bool hadirCukup = persenKehadiran >= 80;
    bool keduanyaTerpenuhi = nilaiLulus && hadirCukup;

    // Output
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "========================================" << endl;
    cout << "        HASIL PERHITUNGAN NILAI" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Nilai Tugas          : " << setprecision(0) << tugas << endl;
    cout << "Nilai UTS            : " << uts << endl;
    cout << "Nilai UAS            : " << uas << endl;
    cout << "Jumlah Kehadiran     : " << kehadiran << " dari " << JUMLAH_PERTEMUAN << endl;
    cout << setprecision(2) << endl;
    cout << "Nilai Sebelum Bonus  : " << nilaiSebelumBonus << endl;
    cout << "Bonus                : " << BONUS << endl;
    cout << "Nilai Akhir          : " << nilaiAkhir << endl;
    cout << "Persentase Kehadiran : " << persenKehadiran << "%" << endl;
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "HASIL EVALUASI LOGIKA" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Nilai Akhir >= 75        : " << nilaiLulus << endl;
    cout << "Kehadiran >= 80%         : " << hadirCukup << endl;
    cout << "Keduanya Terpenuhi       : " << keduanyaTerpenuhi << endl;
    cout << endl;
    cout << "========================================" << endl;
    return 0;
}
