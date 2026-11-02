// Evaluasi Modul 2 - Soal 3: Variabel vs konstanta
#include <iostream>
using namespace std;

int main() {
    int skor = 10;               // variabel: nilainya boleh diubah
    const double PI = 3.14159;   // konstanta: nilainya tetap

    skor = 20;                   // boleh
    // PI = 3.14;                // ERROR jika dibuka: konstanta tidak bisa diubah

    cout << "Variabel skor = " << skor << endl;
    cout << "Konstanta PI  = " << PI << endl;
    return 0;
}
