// Modul 8 - Program 2: Kalkulator dengan Function Bertingkat
// - Semua input dibaca sebagai string, lalu diubah ke angka dengan stod()/stoi()
// - Semua hasil diubah kembali ke string sebelum ditampilkan
// - hitung() memanggil function operasi sesuai pilihan (switch-case)
// - faktorial() dibuat secara rekursif
// - Menu diulang dengan do-while sampai pengguna memilih Keluar
#include <iostream>
#include <string>
using namespace std;

// ===== Function operasi aritmatika =====
double tambah(double a, double b) { return a + b; }
double kurang(double a, double b) { return a - b; }
double kali(double a, double b)   { return a * b; }
double bagi(double a, double b)   { return a / b; }

// Function rekursif: n! = n x (n-1) x ... x 1, berhenti saat n <= 1
int faktorial(int n)
{
    if (n <= 1)
        return 1;
    return n * faktorial(n - 1);
}

// Function: memanggil function operasi sesuai pilihan pengguna
double hitung(int pilihan, double a, double b)
{
    switch (pilihan)
    {
    case 1: return tambah(a, b);
    case 2: return kurang(a, b);
    case 3: return kali(a, b);
    case 4: return bagi(a, b);
    case 5: return faktorial((int)a);
    default: return 0;
    }
}

// Function: memeriksa apakah teks berisi angka (boleh minus dan satu titik desimal)
bool cekAngka(string teks)
{
    if (teks.length() == 0)
        return false;

    int jumlahTitik = 0, jumlahDigit = 0;
    for (int i = 0; i < (int)teks.length(); i++)
    {
        char c = teks[i];
        if (c >= '0' && c <= '9')
            jumlahDigit++;
        else if (c == '.')
            jumlahTitik++;
        else if (c == '-' && i == 0)
            continue;
        else
            return false;
    }
    return jumlahDigit > 0 && jumlahTitik <= 1;
}

// Function: mengubah angka menjadi string tanpa nol berlebih (8.500000 -> "8.5")
string keTeks(double angka)
{
    string teks = to_string(angka);
    while (teks.back() == '0')
        teks.pop_back();
    if (teks.back() == '.')
        teks.pop_back();
    if (teks == "-0")
        teks = "0";
    return teks;
}

// Function: membaca input sampai berupa angka, hasilnya tetap string
string inputAngka(string label)
{
    string teks;
    cout << label;
    cin >> teks;
    while (!cekAngka(teks))
    {
        cout << "Input harus berupa angka. " << label;
        cin >> teks;
    }
    return teks;
}

// Procedure: menampilkan menu
void tampilMenu()
{
    cout << "\n==============================" << endl;
    cout << "      KALKULATOR FUNCTION" << endl;
    cout << "==============================" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Faktorial" << endl;
    cout << "6. Keluar" << endl;
    cout << "==============================" << endl;
    cout << "Pilihan : ";
}

int main()
{
    string pilihanTeks;
    int pilihan;

    do
    {
        tampilMenu();
        cin >> pilihanTeks;
        pilihan = cekAngka(pilihanTeks) ? (int)stod(pilihanTeks) : 0;

        if (pilihan >= 1 && pilihan <= 4)
        {
            string teksA = inputAngka("Bilangan pertama : ");
            string teksB = inputAngka("Bilangan kedua   : ");
            double a = stod(teksA);
            double b = stod(teksB);

            string simbol;
            if (pilihan == 1) simbol = " + ";
            else if (pilihan == 2) simbol = " - ";
            else if (pilihan == 3) simbol = " x ";
            else simbol = " / ";

            // Pembagian dengan 0 tidak diproses
            if (pilihan == 4 && b == 0)
            {
                cout << "Pembagian dengan 0 tidak dapat diproses." << endl;
            }
            else
            {
                string hasil = keTeks(hitung(pilihan, a, b));
                cout << "Hasil : " + keTeks(a) + simbol + keTeks(b) + " = " + hasil << endl;
            }
        }
        else if (pilihan == 5)
        {
            string teksN = inputAngka("Bilangan (0 - 12) : ");
            double n = stod(teksN);

            // Batas 12 karena 13! sudah melebihi kapasitas tipe int
            if (n < 0 || n > 12 || n != (int)n)
            {
                cout << "Faktorial hanya untuk bilangan bulat 0 - 12." << endl;
            }
            else
            {
                string hasil = keTeks(hitung(pilihan, n, 0));
                cout << "Hasil : " + keTeks(n) + "! = " + hasil << endl;
            }
        }
        else if (pilihan == 6)
        {
            cout << "\nProgram selesai. Terima kasih!" << endl;
        }
        else
        {
            cout << "Pilihan tidak tersedia. Silakan pilih 1 - 6." << endl;
        }
    } while (pilihan != 6);

    return 0;
}
