// Modul 3 - Program 8: Status kelulusan (batas 70)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double nilai;
    string status;

    cout << "Masukkan nilai akhir (0 - 100): ";
    cin >> nilai;

    if (nilai >= 70)
    {
        status = "Lulus";
    }
    else
    {
        status = "Tidak Lulus";
    }

    cout << "Nilai  : " << nilai << endl;
    cout << "Status : " << status << endl;
    return 0;
}
