// Modul 1 - Program 4: Debugging Sintaks
//
// Kode awal (error):
//   #include <iostream>
//   using namespace std
//
//   int main() {
//       Cout << "Praktikum C++"
//       return 0
//   }
//
// Perbaikan:
//   1. "using namespace std" kurang titik koma (;)
//   2. "Cout" harus "cout" (C++ case-sensitive)
//   3. Baris cout kurang titik koma (;)
//   4. "return 0" kurang titik koma (;)
#include <iostream>
using namespace std;

int main() {
    cout << "Praktikum C++";
    return 0;
}
