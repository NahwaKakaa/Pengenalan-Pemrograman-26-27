// Modul 5 - Program 4: Pola angka dengan nested loop
// 1
// 12
// 123
// 1234
// 12345
#include <iostream>
using namespace std;

int main()
{
    for (int baris = 1; baris <= 5; baris++)        // loop luar: baris
    {
        for (int angka = 1; angka <= baris; angka++) // loop dalam: angka 1..baris
        {
            cout << angka;
        }
        cout << endl;
    }
    return 0;
}
