// Evaluasi Modul 6 - Soal 5: Pengelolaan area parkir (while + switch-case)
#include <iostream>
using namespace std;

int main()
{
    int kapasitas, jenis;
    int motor = 0, mobil = 0, total = 0;
    int nomor = 1;

    cout << "Kapasitas parkir : ";
    cin >> kapasitas;

    while (total < kapasitas)
    {
        cout << "\nKendaraan ke-" << nomor << endl;
        cout << "Jenis kendaraan (1=Motor, 2=Mobil) : ";
        cin >> jenis;

        switch (jenis)
        {
        case 1:
            motor++;
            total++;
            nomor++;
            cout << "Motor masuk." << endl;
            break;
        case 2:
            mobil++;
            total++;
            nomor++;
            cout << "Mobil masuk." << endl;
            break;
        default:
            cout << "Jenis kendaraan tidak valid" << endl;
            break;
        }
        cout << "Sisa kapasitas : " << kapasitas - total << endl;
    }

    cout << "\n================================" << endl;
    cout << "          REKAP PARKIR" << endl;
    cout << "================================" << endl;
    cout << "Jumlah Motor     : " << motor << endl;
    cout << "Jumlah Mobil     : " << mobil << endl;
    cout << "Total Kendaraan  : " << total << endl;
    cout << "Sisa Kapasitas   : " << kapasitas - total << endl;
    cout << endl;
    cout << "Status Parkir    : " << (total >= kapasitas ? "PENUH" : "TERSEDIA") << endl;
    cout << "================================" << endl;
    return 0;
}
