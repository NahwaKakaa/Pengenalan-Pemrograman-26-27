// Modul 3 - Program 6: Nested if
// Contoh input: 85 -> Status: Lulus, Keterangan: Sangat Baik
// Pemeriksaan nilai >= 80 hanya dilakukan jika nilai >= 60 terpenuhi.
#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    if (nilai >= 60)
    {
        cout << "Status: Lulus" << endl;

        if (nilai >= 80)
        {
            cout << "Keterangan: Sangat Baik" << endl;
        }
    }
    else
    {
        cout << "Status: Tidak Lulus" << endl;
    }
    return 0;
}
