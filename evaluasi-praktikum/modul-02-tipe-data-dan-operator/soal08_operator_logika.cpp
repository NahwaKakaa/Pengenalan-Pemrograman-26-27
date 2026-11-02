// Evaluasi Modul 2 - Soal 8: Operator logika &&, ||, !
#include <iostream>
using namespace std;

int main() {
    int nilai = 80;
    int kehadiran = 70;

    bool nilaiBagus = nilai >= 75;       // true
    bool hadirCukup = kehadiran >= 80;   // false

    cout << boolalpha;
    cout << "nilaiBagus = " << nilaiBagus << ", hadirCukup = " << hadirCukup << endl;

    // && (AND): true hanya jika KEDUANYA true
    cout << "nilaiBagus && hadirCukup = " << (nilaiBagus && hadirCukup) << endl; // false

    // || (OR): true jika SALAH SATU true
    cout << "nilaiBagus || hadirCukup = " << (nilaiBagus || hadirCukup) << endl; // true

    // ! (NOT): membalik nilai
    cout << "!hadirCukup              = " << (!hadirCukup) << endl;              // true
    return 0;
}
