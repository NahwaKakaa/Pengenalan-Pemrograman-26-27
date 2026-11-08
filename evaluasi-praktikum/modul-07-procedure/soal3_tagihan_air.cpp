// Evaluasi Modul 7 - Soal 3: Tagihan Air Pelanggan
// Tarif ditentukan oleh total pemakaian:
//   0 - 10 m3   = Rp2.000/m3
//   11 - 20 m3  = Rp3.000/m3
//   > 20 m3     = Rp4.000/m3
// Tagihan = pemakaian x tarif
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ===== Variabel global =====
string nama;
double pemakaian, tarif, tagihan;

// Procedure: menerima data pelanggan
void inputPelanggan()
{
    cout << "Nama             : ";
    getline(cin >> ws, nama);
    cout << "Pemakaian air(m3): ";
    cin >> pemakaian;
}

// Procedure dengan parameter: menghitung tagihan
void hitungTagihan(double m3)
{
    if (m3 <= 10)
        tarif = 2000;
    else if (m3 <= 20)
        tarif = 3000;
    else
        tarif = 4000;

    tagihan = m3 * tarif;
}

// Procedure dengan parameter: menampilkan hasil tagihan
void tampilTagihan(string n, double m3, double t, double total)
{
    cout << fixed << setprecision(0);
    cout << "\n------ TAGIHAN AIR ------" << endl;
    cout << "Nama      : " << n << endl;
    cout << "Pemakaian : " << setprecision(1) << m3 << " m3" << endl;
    cout << setprecision(0);
    cout << "Tarif     : Rp" << t << "/m3" << endl;
    cout << "Tagihan   : Rp" << total << endl;
    cout << "-------------------------" << endl;
}

int main()
{
    int n;
    double totalSemua = 0;

    cout << "Jumlah pelanggan : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\n=== PELANGGAN KE-" << i << " ===" << endl;
        inputPelanggan();
        hitungTagihan(pemakaian);
        tampilTagihan(nama, pemakaian, tarif, tagihan);
        totalSemua += tagihan;
    }

    cout << "\n=========================" << endl;
    cout << "Total seluruh tagihan : Rp" << fixed << setprecision(0) << totalSemua << endl;
    cout << "=========================" << endl;
    return 0;
}
