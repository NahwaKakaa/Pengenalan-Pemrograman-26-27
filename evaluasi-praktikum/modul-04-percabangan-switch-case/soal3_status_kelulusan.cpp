// Evaluasi Modul 4 - Soal 3: Menentukan Status Kelulusan
#include <iostream>
using namespace std;

int main()
{
    double nilai;

    cout << "Masukkan nilai akhir: ";
    cin >> nilai;

    cout << "Nilai  : " << nilai << endl;
    if (nilai >= 60)
    {
        cout << "Status : Lulus" << endl;
    }
    else
    {
        cout << "Status : Tidak Lulus" << endl;
    }
    return 0;
}
