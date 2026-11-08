// Modul 7 - Program 1: Menu Biodata dengan Procedure
// - Menu diulang dengan do-while sampai pengguna memilih Keluar
// - Pilihan menu diproses dengan switch-case
// - inputBiodata()  : procedure TANPA parameter
// - tampilBiodata() : procedure DENGAN parameter
// - Data biodata disimpan di variabel global
#include <iostream>
#include <string>
using namespace std;

// ===== Variabel global =====
string nama, stambuk, kelas, prodi;
int umur = 0;
bool sudahDiisi = false;

// Procedure tanpa parameter: menampilkan menu
void tampilMenu()
{
    cout << "==============================" << endl;
    cout << "         MENU BIODATA" << endl;
    cout << "==============================" << endl;
    cout << "1. Input Biodata" << endl;
    cout << "2. Tampilkan Biodata" << endl;
    cout << "3. Keluar" << endl;
    cout << "==============================" << endl;
    cout << "Pilihan : ";
}

// Procedure tanpa parameter: mengisi variabel global
void inputBiodata()
{
    cout << "\nNama          : ";
    getline(cin >> ws, nama);
    cout << "Stambuk       : ";
    getline(cin, stambuk);
    cout << "Kelas         : ";
    getline(cin, kelas);
    cout << "Program Studi : ";
    getline(cin, prodi);
    cout << "Umur          : ";
    cin >> umur;

    sudahDiisi = true;
    cout << "\nBiodata berhasil disimpan.\n" << endl;
}

// Procedure dengan parameter: menampilkan biodata
void tampilBiodata(string n, string s, string k, string p, int u)
{
    cout << "\n==============================" << endl;
    cout << "       BIODATA MAHASISWA" << endl;
    cout << "==============================" << endl;
    cout << "Nama          : " << n << endl;
    cout << "Stambuk       : " << s << endl;
    cout << "Kelas         : " << k << endl;
    cout << "Program Studi : " << p << endl;
    cout << "Umur          : " << u << " Tahun" << endl;
    cout << "==============================\n" << endl;
}

int main()
{
    int pilihan;

    do
    {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputBiodata();
            break;
        case 2:
            if (sudahDiisi)
                tampilBiodata(nama, stambuk, kelas, prodi, umur);
            else
                cout << "\nBiodata belum diisi. Pilih menu 1 terlebih dahulu.\n" << endl;
            break;
        case 3:
            cout << "\nProgram selesai. Terima kasih!" << endl;
            break;
        default:
            cout << "\nPilihan tidak tersedia. Silakan pilih 1 - 3.\n" << endl;
            break;
        }
    } while (pilihan != 3);

    return 0;
}
