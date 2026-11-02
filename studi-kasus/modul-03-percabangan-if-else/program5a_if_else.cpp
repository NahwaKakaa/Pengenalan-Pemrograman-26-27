// Modul 3 - Program 5a: if-else (dua kemungkinan)
// Contoh input: 55 -> Tidak Lulus
#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 60)
    {
        cout << "Lulus" << endl;
    }
    else
    {
        cout << "Tidak Lulus" << endl;
    }

    return 0;
}
