// Evaluasi Modul 8 - Soal 4: Penentuan Grade dan Kelulusan
// Function:
//   - char tentukanGrade(nilai) : A >= 80, B >= 70, C >= 60, D >= 50, E < 50
//   - bool cekLulus(grade)      : Grade A, B, C = Lulus; D, E = Tidak Lulus
#include <iostream>
#include <string>
using namespace std;

char tentukanGrade(double nilai)
{
    if (nilai >= 80)
        return 'A';
    else if (nilai >= 70)
        return 'B';
    else if (nilai >= 60)
        return 'C';
    else if (nilai >= 50)
        return 'D';
    else
        return 'E';
}

bool cekLulus(char grade)
{
    return grade == 'A' || grade == 'B' || grade == 'C';
}

int main()
{
    int n, jumlahLulus = 0;

    cout << "Jumlah mahasiswa : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string nama;
        double nilai;

        cout << "\nMahasiswa ke-" << i << endl;
        cout << "Nama   : ";
        getline(cin >> ws, nama);
        cout << "Nilai  : ";
        cin >> nilai;

        char grade = tentukanGrade(nilai);
        bool lulus = cekLulus(grade);

        if (lulus)
            jumlahLulus++;

        cout << "Grade  : " << grade << endl;
        cout << "Status : " << (lulus ? "Lulus" : "Tidak Lulus") << endl;
    }

    cout << "\n=============================" << endl;
    cout << "Jumlah mahasiswa       : " << n << endl;
    cout << "Jumlah mahasiswa lulus : " << jumlahLulus << endl;
    cout << "=============================" << endl;
    return 0;
}
