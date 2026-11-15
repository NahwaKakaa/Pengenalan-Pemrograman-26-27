// Evaluasi Modul 8 - Soal 2: Tagihan Listrik
// Function:
//   - hitungBiayaPemakaian(kwh) : biaya dengan tarif bertingkat
//   - hitungAdministrasi()      : biaya administrasi tetap
//   - hitungTotalTagihan(kwh)   : biaya pemakaian + administrasi
//
// Tarif tidak disebutkan di modul, jadi dipakai asumsi tarif bertingkat per blok:
//   - 100 kWh pertama        Rp1.000/kWh
//   - 101 - 200 kWh          Rp1.500/kWh
//   - di atas 200 kWh        Rp2.000/kWh
//   - biaya administrasi     Rp5.000
// Contoh 250 kWh = (100 x 1.000) + (100 x 1.500) + (50 x 2.000) = Rp350.000
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double BIAYA_ADMIN = 5000;

double hitungBiayaPemakaian(double kwh)
{
    if (kwh <= 100)
        return kwh * 1000;
    else if (kwh <= 200)
        return (100 * 1000) + ((kwh - 100) * 1500);
    else
        return (100 * 1000) + (100 * 1500) + ((kwh - 200) * 2000);
}

double hitungAdministrasi()
{
    return BIAYA_ADMIN;
}

double hitungTotalTagihan(double kwh)
{
    return hitungBiayaPemakaian(kwh) + hitungAdministrasi();
}

int main()
{
    int n;
    double totalSemua = 0;

    cout << "Jumlah pelanggan : ";
    cin >> n;

    cout << fixed << setprecision(0);

    for (int i = 1; i <= n; i++)
    {
        string nama;
        double kwh;

        cout << "\n=== PELANGGAN KE-" << i << " ===" << endl;
        cout << "Nama            : ";
        getline(cin >> ws, nama);
        cout << "Pemakaian (kWh) : ";
        cin >> kwh;

        if (kwh < 0)
        {
            cout << "Pemakaian tidak boleh negatif. Data dilewati." << endl;
            continue;
        }

        double total = hitungTotalTagihan(kwh);
        totalSemua += total;

        cout << "\n------ TAGIHAN LISTRIK ------" << endl;
        cout << "Nama             : " << nama << endl;
        cout << "Pemakaian        : " << setprecision(1) << kwh << " kWh" << setprecision(0) << endl;
        cout << "Biaya Pemakaian  : Rp" << hitungBiayaPemakaian(kwh) << endl;
        cout << "Administrasi     : Rp" << hitungAdministrasi() << endl;
        cout << "Total Tagihan    : Rp" << total << endl;
        cout << "-----------------------------" << endl;
    }

    cout << "\n=============================" << endl;
    cout << "Total seluruh tagihan : Rp" << totalSemua << endl;
    cout << "=============================" << endl;
    return 0;
}
