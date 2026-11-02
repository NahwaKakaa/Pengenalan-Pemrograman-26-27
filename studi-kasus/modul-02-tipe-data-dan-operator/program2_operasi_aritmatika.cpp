// Modul 2 - Program 2: Operasi Aritmatika
// Input dua bilangan bulat lalu tampilkan hasil +, -, *, /, dan %.
// Karena A dan B bertipe int, pembagian menghasilkan bilangan bulat.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Bilangan A: ";
    cin >> a;
    cout << "Bilangan B: ";
    cin >> b;

    cout << "Hasil penjumlahan = " << a << " + " << b << " = " << a + b << endl;
    cout << "Hasil pengurangan = " << a << " - " << b << " = " << a - b << endl;
    cout << "Hasil perkalian = " << a << " * " << b << " = " << a * b << endl;
    cout << "Hasil pembagian = " << a << " / " << b << " = " << a / b << endl;
    cout << "Hasil Sisa pembagian = " << a % b << endl;
    return 0;
}
