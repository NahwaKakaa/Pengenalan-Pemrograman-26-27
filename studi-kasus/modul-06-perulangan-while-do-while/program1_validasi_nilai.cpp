// Modul 6 - Program 1: Validasi Nilai dengan while
// Input diulang selama nilai di luar rentang 0 - 100
#include <iostream>
using namespace std;

int main()
{
    double nilai;

    cout << "Masukkan nilai : ";
    cin >> nilai;

    while (nilai < 0 || nilai > 100)
    {
        cout << "Nilai tidak valid." << endl << endl;
        cout << "Masukkan nilai : ";
        cin >> nilai;
    }

    cout << "Nilai  : " << nilai << endl;
    if (nilai >= 60)
        cout << "Status : Lulus" << endl;
    else
        cout << "Status : Tidak Lulus" << endl;
    return 0;
}
