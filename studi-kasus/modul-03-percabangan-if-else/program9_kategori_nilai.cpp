// Modul 3 - Program 9: Kategori nilai dengan if - else if - else
// Contoh: 82 -> Grade A
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nilai;
    string grade;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 86)
        grade = "A+";
    else if (nilai >= 81)
        grade = "A";
    else if (nilai >= 76)
        grade = "B+";
    else if (nilai >= 71)
        grade = "B";
    else if (nilai >= 66)
        grade = "B-";
    else if (nilai >= 61)
        grade = "C+";
    else if (nilai >= 51)
        grade = "C";
    else if (nilai >= 41)
        grade = "D";
    else
        grade = "E";

    cout << "Nilai  : " << nilai << endl;
    cout << "Grade  : " << grade << endl;
    return 0;
}
