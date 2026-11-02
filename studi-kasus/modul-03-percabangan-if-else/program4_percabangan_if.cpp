// Modul 3 - Program 4: Percabangan if
// Contoh input: 75 -> "Anda dinyatakan Lulus."
// Jika nilai < 60, tidak ada pesan yang ditampilkan.
#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 60)
    {
        cout << "Anda dinyatakan Lulus." << endl;
    }

    return 0;
}
