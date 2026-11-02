// Evaluasi Modul 2 - Soal 9: Perbaikan tipe data
//
// Kode awal:
//   int nilai = 85.75;     -> int membuang pecahan (jadi 85)
//   char nama = "Andi";    -> char hanya 1 karakter, "Andi" adalah teks
//   bool aktif = "true";   -> "true" adalah string, bukan nilai logika
#include <iostream>
#include <string>
using namespace std;

int main() {
    double nilai = 85.75;   // double agar pecahan .75 tidak hilang
    string nama = "Andi";   // string untuk menyimpan kumpulan karakter
    bool aktif = true;      // true tanpa tanda kutip = nilai logika

    cout << "Nilai : " << nilai << endl;
    cout << "Nama  : " << nama << endl;
    cout << "Aktif : " << boolalpha << aktif << endl;
    return 0;
}
