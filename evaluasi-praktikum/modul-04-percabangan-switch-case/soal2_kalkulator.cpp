// Evaluasi Modul 4 - Soal 2: Kalkulator Sederhana
#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua   : ";
    cin >> b;
    cout << "Pilih operasi (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if (b == 0)
            cout << "Error: pembagian dengan nol tidak bisa dilakukan" << endl;
        else
            cout << a << " / " << b << " = " << a / b << endl;
        break;
    default:
        cout << "Operasi '" << op << "' tidak tersedia" << endl;
        break;
    }
    return 0;
}
