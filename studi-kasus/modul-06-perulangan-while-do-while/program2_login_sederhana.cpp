// Modul 6 - Program 2: Login Sederhana
// Password tetap: fikom123, input diulang selama password salah
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string PASSWORD = "fikom123";
    string input;
    int percobaan = 0;

    cout << "Masukkan password: ";
    cin >> input;
    percobaan++;

    while (input != PASSWORD)
    {
        cout << "Password salah." << endl;
        cout << "Masukkan password: ";
        cin >> input;
        percobaan++;
    }

    cout << "Login berhasil." << endl;
    cout << "Jumlah percobaan : " << percobaan << endl;
    return 0;
}
