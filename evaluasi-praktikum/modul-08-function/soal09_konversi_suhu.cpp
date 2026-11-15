// Evaluasi Modul 8 - Soal 9: Konversi Suhu dengan Menu
// Setiap konversi dibuat dalam function terpisah:
//   - celsiusKeFahrenheit(c) : F = (C x 9/5) + 32
//   - fahrenheitKeCelsius(f) : C = (F - 32) x 5/9
//   - celsiusKeKelvin(c)     : K = C + 273.15
// switch-case menentukan function yang dipanggil, do-while mengulang menu.
#include <iostream>
#include <iomanip>
using namespace std;

double celsiusKeFahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32;
}

double fahrenheitKeCelsius(double f)
{
    return (f - 32) * 5.0 / 9.0;
}

double celsiusKeKelvin(double c)
{
    return c + 273.15;
}

void tampilMenu()
{
    cout << "\n======= KONVERSI SUHU =======" << endl;
    cout << "1. Celsius ke Fahrenheit" << endl;
    cout << "2. Fahrenheit ke Celsius" << endl;
    cout << "3. Celsius ke Kelvin" << endl;
    cout << "4. Keluar" << endl;
    cout << "=============================" << endl;
    cout << "Pilihan : ";
}

int main()
{
    int pilihan;
    double suhu;

    cout << fixed << setprecision(2);

    do
    {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Suhu (Celsius)    : ";
            cin >> suhu;
            cout << "Hasil             : " << celsiusKeFahrenheit(suhu) << " F" << endl;
            break;
        case 2:
            cout << "Suhu (Fahrenheit) : ";
            cin >> suhu;
            cout << "Hasil             : " << fahrenheitKeCelsius(suhu) << " C" << endl;
            break;
        case 3:
            cout << "Suhu (Celsius)    : ";
            cin >> suhu;
            cout << "Hasil             : " << celsiusKeKelvin(suhu) << " K" << endl;
            break;
        case 4:
            cout << "\nProgram selesai. Terima kasih!" << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia." << endl;
            break;
        }
    } while (pilihan != 4);

    return 0;
}
