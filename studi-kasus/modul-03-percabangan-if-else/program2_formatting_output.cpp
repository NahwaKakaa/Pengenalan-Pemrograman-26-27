// Modul 3 - Program 2: Formatting dengan setw, fixed, setprecision
// Contoh input: 85.756  -> ditampilkan 85.76 rata kanan selebar 15 karakter
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    cout << endl;
    cout << setw(15) << "Nilai" << endl;
    cout << setw(15) << fixed << setprecision(2) << nilai << endl;

    return 0;
}
