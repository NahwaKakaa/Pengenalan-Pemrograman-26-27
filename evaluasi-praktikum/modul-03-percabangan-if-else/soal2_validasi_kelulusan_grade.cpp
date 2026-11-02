// Evaluasi Modul 3 - Soal 2: Validasi Nilai, Kelulusan, dan Grade
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double nilai;

    cout << "Masukkan nilai akhir: ";
    cin >> nilai;

    // Validasi rentang dulu
    if (nilai < 0 || nilai > 100)
    {
        cout << "Nilai tidak valid" << endl;
    }
    else
    {
        string status = (nilai >= 60) ? "Lulus" : "Tidak Lulus";

        char grade;
        if (nilai >= 80)
            grade = 'A';
        else if (nilai >= 70)
            grade = 'B';
        else if (nilai >= 60)
            grade = 'C';
        else if (nilai >= 50)
            grade = 'D';
        else
            grade = 'E';

        cout << "Nilai  : " << nilai << endl;
        cout << "Status : " << status << endl;
        cout << "Grade  : " << grade << endl;
    }
    return 0;
}
