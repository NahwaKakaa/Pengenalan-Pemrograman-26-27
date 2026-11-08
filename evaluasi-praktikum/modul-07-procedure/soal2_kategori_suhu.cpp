// Evaluasi Modul 7 - Soal 2: Kategori Suhu dengan Procedure
//   < 20   = Dingin
//   20-30  = Normal
//   > 30   = Panas
#include <iostream>
#include <string>
using namespace std;

// ===== Variabel global =====
double suhu;
string kategori;
int jumlahDingin = 0, jumlahNormal = 0, jumlahPanas = 0;

// Procedure: menerima satu data suhu
void inputSuhu(int ke)
{
    cout << "Suhu ke-" << ke << " : ";
    cin >> suhu;
}

// Procedure dengan parameter: menentukan kategori + menambah counter
void tentukanKategori(double s)
{
    if (s < 20)
    {
        kategori = "Dingin";
        jumlahDingin++;
    }
    else if (s <= 30)
    {
        kategori = "Normal";
        jumlahNormal++;
    }
    else
    {
        kategori = "Panas";
        jumlahPanas++;
    }
}

// Procedure dengan parameter: menampilkan hasil setiap data
void tampilData(double s, string k)
{
    cout << "  -> " << s << " derajat : " << k << endl;
}

int main()
{
    int n;
    cout << "Jumlah data suhu : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        inputSuhu(i);
        tentukanKategori(suhu);
        tampilData(suhu, kategori);
    }

    cout << "\n======== REKAP SUHU ========" << endl;
    cout << "Dingin : " << jumlahDingin << endl;
    cout << "Normal : " << jumlahNormal << endl;
    cout << "Panas  : " << jumlahPanas << endl;
    cout << "============================" << endl;
    return 0;
}
