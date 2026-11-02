// Evaluasi Modul 4 - Soal 5: Sistem Konversi Satuan Multifungsi
// Contoh: nilai 5, kode 2 -> Hasil Konversi: 5000.00 Meter
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double nilai, hasil = 0;
    int kode;
    string satuanAwal, satuanAkhir, jenis;
    bool valid = true;

    cout << "Masukkan nilai: ";
    cin >> nilai;
    cout << "\n=== MENU KONVERSI ===" << endl;
    cout << "1. Meter ke Centimeter" << endl;
    cout << "2. Kilometer ke Meter" << endl;
    cout << "3. Kilogram ke Gram" << endl;
    cout << "4. Jam ke Menit" << endl;
    cout << "5. Celsius ke Fahrenheit" << endl;
    cout << "Pilih kode konversi: ";
    cin >> kode;

    switch (kode)
    {
    case 1:
        hasil = nilai * 100;
        satuanAwal = "Meter"; satuanAkhir = "Centimeter";
        break;
    case 2:
        hasil = nilai * 1000;
        satuanAwal = "Kilometer"; satuanAkhir = "Meter";
        break;
    case 3:
        hasil = nilai * 1000;
        satuanAwal = "Kilogram"; satuanAkhir = "Gram";
        break;
    case 4:
        hasil = nilai * 60;
        satuanAwal = "Jam"; satuanAkhir = "Menit";
        break;
    case 5:
        hasil = (nilai * 9 / 5) + 32;
        satuanAwal = "Celsius"; satuanAkhir = "Fahrenheit";
        break;
    default:
        valid = false;
        cout << "\nKode konversi tidak tersedia." << endl;
        break;
    }

    if (valid)
    {
        jenis = satuanAwal + " ke " + satuanAkhir;
        cout << fixed << setprecision(2);
        cout << "\nNilai Awal     : " << nilai << " " << satuanAwal << endl;
        cout << "Jenis Konversi : " << jenis << endl;
        cout << "Hasil Konversi : " << hasil << " " << satuanAkhir << endl;
    }
    return 0;
}
