// Evaluasi Modul 6 - Soal 2: COUNT, SUM, MIN, MAX, AVERAGE dengan sentinel
// Input berhenti saat bilangan negatif dimasukkan (tidak ikut dihitung)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double bil, sum = 0, minVal = 0, maxVal = 0;
    int count = 0;

    cout << "Masukkan bilangan : ";
    cin >> bil;

    while (bil >= 0)
    {
        if (count == 0)
        {
            minVal = bil;   // data pertama jadi patokan awal min dan max
            maxVal = bil;
        }
        else
        {
            if (bil < minVal) minVal = bil;
            if (bil > maxVal) maxVal = bil;
        }
        count++;
        sum += bil;

        cout << "Masukkan bilangan : ";
        cin >> bil;
    }

    cout << "\n================================" << endl;
    cout << "      HASIL PENGOLAHAN DATA" << endl;
    cout << "================================" << endl;
    if (count == 0)
    {
        cout << "Tidak ada data yang dimasukkan." << endl;
    }
    else
    {
        cout << "Jumlah Data   : " << count << endl;
        cout << "Total         : " << sum << endl;
        cout << "Nilai Minimum : " << minVal << endl;
        cout << "Nilai Maksimum: " << maxVal << endl;
        cout << "Rata-rata     : " << fixed << setprecision(2) << sum / count << endl;
    }
    cout << "================================" << endl;
    return 0;
}
