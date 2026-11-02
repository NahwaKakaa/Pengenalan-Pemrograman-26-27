// Modul 2 - Program 5: Konversi Tipe
// 7 / 2 dengan int  -> 3   (bagian pecahan dibuang)
// static_cast<double>(7) / 2 -> 3.5 (pembagian pecahan)
#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 2;

    cout << "Pembagian integer      : a / b = " << a / b << endl;
    cout << "Setelah static_cast    : static_cast<double>(a) / b = "
         << static_cast<double>(a) / b << endl;
    return 0;
}
