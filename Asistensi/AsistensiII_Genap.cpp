// Asistensi II (Stambuk Genap) - Kunci Jawaban Ujian Asistensi Modul 5-8: Bank Sampah "UMI Hijau"
// Materi: for (Modul 5), while & do-while (Modul 6), procedure (Modul 7), function (Modul 8)
#include <iostream>
#include <string>
using namespace std;

// ===== Function (Modul 8) =====
int hargaPerKg(int kode)
{
    if (kode == 1) return 2500;      // Kardus
    else if (kode == 2) return 1500; // Botol Kaca
    else return 10000;               // Aluminium
}

int hitungNilai(int kode, int berat)  // memanggil hargaPerKg()
{
    return hargaPerKg(kode) * berat;
}

int hitungBonus(int total)
{
    if (total >= 60000)
        return 6000;
    return 0;
}

// ===== Procedure (Modul 7) =====
void tampilMenu()
{
    cout << "\n1. Kardus     (Rp2.500/kg)" << endl;
    cout << "2. Botol Kaca (Rp1.500/kg)" << endl;
    cout << "3. Aluminium  (Rp10.000/kg)" << endl;
    cout << "4. Selesai" << endl;
    cout << "Pilihan : ";
}

void tampilStruk(string nama, int total, int bonus)
{
    cout << "\n===== STRUK =====" << endl;
    cout << "Nama           : " << nama << endl;
    cout << "Nilai Sampah   : Rp" << total << endl;
    cout << "Bonus          : Rp" << bonus << endl;
    cout << "Total Diterima : Rp" << total + bonus << endl;
    cout << "=================" << endl;
}

int main()
{
    int n, totalHarian = 0;

    cout << "Jumlah nasabah : ";
    cin >> n;

    for (int i = 1; i <= n; i++)                 // Modul 5: for
    {
        string nama;
        int kode, berat, total = 0;

        cout << "\nNasabah ke-" << i << endl;
        cout << "Nama : ";
        cin >> nama;

        do                                       // Modul 6: do-while
        {
            tampilMenu();
            cin >> kode;

            if (kode >= 1 && kode <= 3)
            {
                cout << "Berat (kg) : ";
                cin >> berat;
                while (berat <= 0)               // Modul 6: while (validasi)
                {
                    cout << "Berat harus lebih dari 0. Ulangi : ";
                    cin >> berat;
                }
                total += hitungNilai(kode, berat);
            }
            else if (kode != 4)
            {
                cout << "Pilihan tidak tersedia." << endl;
            }
        } while (kode != 4);

        int bonus = hitungBonus(total);
        tampilStruk(nama, total, bonus);
        totalHarian += total + bonus;
    }

    cout << "\nTotal uang dibayarkan hari ini : Rp" << totalHarian << endl;
    return 0;
}
