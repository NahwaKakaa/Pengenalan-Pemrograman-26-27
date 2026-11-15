// Evaluasi Modul 8 - Soal 3: Analisis Data Penjualan
// Function:
//   - hitungTotal()    : total sementara + nilai transaksi baru
//   - hitungMinimum()  : nilai transaksi terkecil
//   - hitungMaksimum() : nilai transaksi terbesar
//   - hitungRataRata() : memakai hasil hitungTotal() dibagi jumlah transaksi
#include <iostream>
#include <iomanip>
using namespace std;

double hitungTotal(double total, double nilai)
{
    return total + nilai;
}

double hitungMinimum(double minimum, double nilai)
{
    return (nilai < minimum) ? nilai : minimum;
}

double hitungMaksimum(double maksimum, double nilai)
{
    return (nilai > maksimum) ? nilai : maksimum;
}

double hitungRataRata(double total, int jumlah)
{
    return total / jumlah;
}

int main()
{
    int n;
    cout << "Jumlah transaksi : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Jumlah transaksi harus lebih dari 0." << endl;
        return 0;
    }

    double total = 0, minimum = 0, maksimum = 0;

    for (int i = 1; i <= n; i++)
    {
        double nilai;
        cout << "Nilai transaksi ke-" << i << " : Rp";
        cin >> nilai;

        if (i == 1)
        {
            minimum = nilai;
            maksimum = nilai;
        }

        total = hitungTotal(total, nilai);
        minimum = hitungMinimum(minimum, nilai);
        maksimum = hitungMaksimum(maksimum, nilai);
    }

    // Rata-rata memakai hasil dari function hitungTotal()
    double rataRata = hitungRataRata(total, n);

    cout << fixed << setprecision(0);
    cout << "\n======= ANALISIS PENJUALAN =======" << endl;
    cout << "Jumlah Transaksi : " << n << endl;
    cout << "Total            : Rp" << total << endl;
    cout << "Minimum          : Rp" << minimum << endl;
    cout << "Maksimum         : Rp" << maksimum << endl;
    cout << "Rata-rata        : Rp" << setprecision(2) << rataRata << endl;
    cout << "==================================" << endl;
    return 0;
}
