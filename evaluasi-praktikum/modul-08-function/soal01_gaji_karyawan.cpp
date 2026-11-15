// Evaluasi Modul 8 - Soal 1: Sistem Gaji Karyawan
// Function:
//   - hitungGajiPokok(jam, tarif) : jam normal x tarif
//   - hitungLembur(jam, tarif)    : jam lembur x tarif x 1,5
//   - hitungTotalGaji(jam, tarif) : memanggil hitungGajiPokok() dan hitungLembur()
//
// Aturan lembur tidak disebutkan di modul, jadi dipakai asumsi:
//   - jam kerja normal maksimal 40 jam
//   - kelebihan dari 40 jam dihitung lembur dengan tarif 1,5 x tarif per jam
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double JAM_NORMAL = 40;
const double FAKTOR_LEMBUR = 1.5;

double hitungGajiPokok(double jam, double tarif)
{
    if (jam > JAM_NORMAL)
        return JAM_NORMAL * tarif;
    return jam * tarif;
}

double hitungLembur(double jam, double tarif)
{
    if (jam > JAM_NORMAL)
        return (jam - JAM_NORMAL) * tarif * FAKTOR_LEMBUR;
    return 0;
}

// Total gaji memanggil function lainnya
double hitungTotalGaji(double jam, double tarif)
{
    return hitungGajiPokok(jam, tarif) + hitungLembur(jam, tarif);
}

int main()
{
    int n;
    double totalSemuaGaji = 0;

    cout << "Jumlah karyawan : ";
    cin >> n;

    cout << fixed << setprecision(0);

    for (int i = 1; i <= n; i++)
    {
        string nama;
        double jam, tarif;

        cout << "\n=== KARYAWAN KE-" << i << " ===" << endl;
        cout << "Nama           : ";
        getline(cin >> ws, nama);
        cout << "Jam kerja      : ";
        cin >> jam;
        cout << "Tarif per jam  : Rp";
        cin >> tarif;

        double totalGaji = hitungTotalGaji(jam, tarif);
        totalSemuaGaji += totalGaji;

        cout << "\n------- SLIP GAJI -------" << endl;
        cout << "Nama        : " << nama << endl;
        cout << "Gaji Pokok  : Rp" << hitungGajiPokok(jam, tarif) << endl;
        cout << "Lembur      : Rp" << hitungLembur(jam, tarif) << endl;
        cout << "Total Gaji  : Rp" << totalGaji << endl;
        cout << "-------------------------" << endl;
    }

    cout << "\n=========================" << endl;
    cout << "Total gaji seluruh karyawan : Rp" << totalSemuaGaji << endl;
    cout << "=========================" << endl;
    return 0;
}
