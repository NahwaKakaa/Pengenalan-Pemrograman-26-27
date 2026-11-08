// Modul 7 - Program 2: Membentuk Kalimat dengan Procedure
// - inputKata()  : menerima satu kata dari pengguna
// - tambahKata() : menambahkan kata ke dalam kalimat
// - Kalimat lengkap, jumlah kata, dan pola ditampilkan dari main()
#include <iostream>
#include <string>
using namespace std;

// ===== Variabel global =====
string kata = "";
string kalimat = "";
int jumlahKata = 0;

// Procedure: menerima satu kata
void inputKata()
{
    cout << "Masukkan kata : ";
    cin >> kata;
}

// Procedure: menambahkan kata ke kalimat
void tambahKata()
{
    if (jumlahKata == 0)
        kalimat = kata;             // kata pertama tanpa spasi di depan
    else
        kalimat = kalimat + " " + kata;
    jumlahKata++;
}

int main()
{
    int pilihan;

    do
    {
        cout << "\n1 = Tambah kata" << endl;
        cout << "0 = Selesai" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            inputKata();
            tambahKata();
        }
        else if (pilihan != 0)
        {
            cout << "Pilihan tidak tersedia." << endl;
        }
    } while (pilihan != 0);

    // Hasil akhir ditampilkan dari main(), bukan dari procedure
    // to_string() mengubah angka menjadi teks agar bisa digabung dengan string
    string info = "Jumlah Kata  : " + to_string(jumlahKata);

    cout << "\nKalimat      : " << kalimat << endl;
    cout << info << endl;

    cout << "\nPola:" << endl;
    for (int i = 1; i <= jumlahKata; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
