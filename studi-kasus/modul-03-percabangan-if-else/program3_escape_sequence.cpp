// Modul 3 - Program 3: Escape Sequence
// Contoh input: 13020260001
//
// Catatan: di modul, variabel nim bertipe int. Nilai 13020260001 melebihi
// batas int (sekitar 2.147.483.647), sehingga input akan error/overflow.
// Karena itu di sini dipakai long long.
#include <iostream>
using namespace std;

int main()
{
    long long nim;

    cout << "Masukkan NIM: ";
    cin >> nim;

    cout << "\nDATA MAHASISWA\n";               // \n = baris baru
    cout << "NIM\t: " << nim << endl;            // \t = tab
    cout << "\"Pengenalan Pemrograman\"" << endl; // \" = tanda kutip

    return 0;
}
