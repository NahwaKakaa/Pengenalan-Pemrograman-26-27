// Evaluasi Modul 2 - Soal 7: Membandingkan dua bilangan
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua   : ";
    cin >> b;

    // boolalpha agar hasil ditampilkan sebagai true/false, bukan 1/0
    cout << boolalpha;
    cout << a << " >  " << b << " : " << (a > b) << endl;
    cout << a << " <  " << b << " : " << (a < b) << endl;
    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    return 0;
}
