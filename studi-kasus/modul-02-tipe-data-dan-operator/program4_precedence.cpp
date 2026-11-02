// Modul 2 - Program 4: Precedence
//
// a + b * c   -> perkalian dikerjakan lebih dulu: 2 + (3 * 4) = 2 + 12 = 14
// (a + b) * c -> tanda kurung dikerjakan lebih dulu: (2 + 3) * 4 = 5 * 4 = 20
// Hasilnya berbeda karena operator * memiliki prioritas lebih tinggi dari +,
// kecuali urutannya diubah dengan tanda kurung.
#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3, c = 4;

    cout << "a + b * c   = " << a + b * c << endl;
    cout << "(a + b) * c = " << (a + b) * c << endl;
    cout << endl;
    cout << "Penjelasan:" << endl;
    cout << "- Operator * lebih diprioritaskan dari +, jadi a + b * c = 2 + 12 = 14." << endl;
    cout << "- Tanda kurung dikerjakan lebih dulu, jadi (a + b) * c = 5 * 4 = 20." << endl;
    return 0;
}
