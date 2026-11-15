// Modul 8 - Program 3: Pengelolaan Data Aggregate dengan Function
// Setiap bilangan yang diinput langsung diproses oleh function,
// sehingga hasil sementara (total, min, max, genap, ganjil) selalu diperbarui.
//   - hitungTotal()     : total sementara + bilangan baru
//   - hitungMinimum()   : nilai terkecil antara min sementara dan bilangan baru
//   - hitungMaksimum()  : nilai terbesar antara max sementara dan bilangan baru
//   - hitungRataRata()  : memakai hasil hitungTotal() dibagi jumlah data
//   - cekGenap()        : bilangan % 2 == 0
//   - hitungGenap() / hitungGanjil() : memakai cekGenap()
//   - tampilRekap()     : procedure untuk menampilkan seluruh hasil
#include <iostream>
#include <iomanip>
using namespace std;

long long hitungTotal(long long total, int bilangan)
{
    return total + bilangan;
}

int hitungMinimum(int minimum, int bilangan)
{
    if (bilangan < minimum)
        return bilangan;
    return minimum;
}

int hitungMaksimum(int maksimum, int bilangan)
{
    if (bilangan > maksimum)
        return bilangan;
    return maksimum;
}

// Rata-rata = Total / Jumlah Data (total berasal dari hitungTotal())
double hitungRataRata(long long total, int jumlahData)
{
    return (double)total / jumlahData;
}

bool cekGenap(int bilangan)
{
    return bilangan % 2 == 0;
}

int hitungGenap(int jumlahGenap, int bilangan)
{
    if (cekGenap(bilangan))
        return jumlahGenap + 1;
    return jumlahGenap;
}

int hitungGanjil(int jumlahGanjil, int bilangan)
{
    if (!cekGenap(bilangan))
        return jumlahGanjil + 1;
    return jumlahGanjil;
}

// Procedure: menampilkan rekap
void tampilRekap(int jumlahData, long long total, int minimum, int maksimum,
                 double rataRata, int jumlahGenap, int jumlahGanjil)
{
    cout << "\n================================" << endl;
    cout << "          REKAP DATA" << endl;
    cout << "================================" << endl;
    cout << "Jumlah Data   : " << jumlahData << endl;
    cout << "Total         : " << total << endl;
    cout << "Minimum       : " << minimum << endl;
    cout << "Maksimum      : " << maksimum << endl;
    cout << "Rata-rata     : " << fixed << setprecision(2) << rataRata << endl;
    cout << "Jumlah Genap  : " << jumlahGenap << endl;
    cout << "Jumlah Ganjil : " << jumlahGanjil << endl;
    cout << "================================" << endl;
}

int main()
{
    int n;
    cout << "Masukkan jumlah data : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Jumlah data harus lebih dari 0." << endl;
        return 0;
    }

    long long total = 0;
    int minimum = 0, maksimum = 0;
    int jumlahGenap = 0, jumlahGanjil = 0;

    for (int i = 1; i <= n; i++)
    {
        int bilangan;
        cout << "Bilangan ke-" << i << " : ";
        cin >> bilangan;

        if (i == 1)
        {
            // Data pertama jadi patokan awal minimum dan maksimum
            minimum = bilangan;
            maksimum = bilangan;
        }

        total = hitungTotal(total, bilangan);
        minimum = hitungMinimum(minimum, bilangan);
        maksimum = hitungMaksimum(maksimum, bilangan);
        jumlahGenap = hitungGenap(jumlahGenap, bilangan);
        jumlahGanjil = hitungGanjil(jumlahGanjil, bilangan);
    }

    double rataRata = hitungRataRata(total, n);
    tampilRekap(n, total, minimum, maksimum, rataRata, jumlahGenap, jumlahGanjil);

    return 0;
}
