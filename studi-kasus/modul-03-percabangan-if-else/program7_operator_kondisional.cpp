// Modul 3 - Program 7: Operator Kondisional (ternary)
// Contoh input: 70 -> Status: Lulus
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    string status = (nilai >= 60) ? "Lulus" : "Tidak Lulus";

    cout << "Status: " << status << endl;

    return 0;
}
