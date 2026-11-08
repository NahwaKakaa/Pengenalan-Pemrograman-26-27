// Evaluasi Modul 7 - Soal 1: Pelayanan Pencetakan Dokumen
// Procedure:
//   - inputPelanggan()       : menerima nama, kode layanan, dan jumlah lembar
//   - tentukanLayanan(kode)  : menentukan nama layanan dan tarif
//   - tampilHasil()          : menampilkan hasil pelayanan
//
// Tarif tidak disebutkan di modul, jadi dipakai asumsi berikut:
//   1. Print Hitam Putih  Rp500/lembar
//   2. Print Warna        Rp1.500/lembar
//   3. Fotokopi           Rp300/lembar
//   4. Scan Dokumen       Rp1.000/lembar
#include <iostream>
#include <string>
using namespace std;

// ===== Variabel global =====
string nama, namaLayanan;
int kodeLayanan, jumlahLembar;
long long tarif, biaya;
bool layananValid;

void inputPelanggan()
{
    cout << "Nama pelanggan : ";
    getline(cin >> ws, nama);
    cout << "Jenis layanan" << endl;
    cout << "  1. Print Hitam Putih  (Rp500/lembar)" << endl;
    cout << "  2. Print Warna        (Rp1.500/lembar)" << endl;
    cout << "  3. Fotokopi           (Rp300/lembar)" << endl;
    cout << "  4. Scan Dokumen       (Rp1.000/lembar)" << endl;
    cout << "Pilih layanan  : ";
    cin >> kodeLayanan;
    cout << "Jumlah lembar  : ";
    cin >> jumlahLembar;
}

void tentukanLayanan(int kode)
{
    layananValid = true;
    switch (kode)
    {
    case 1: namaLayanan = "Print Hitam Putih"; tarif = 500;  break;
    case 2: namaLayanan = "Print Warna";       tarif = 1500; break;
    case 3: namaLayanan = "Fotokopi";          tarif = 300;  break;
    case 4: namaLayanan = "Scan Dokumen";      tarif = 1000; break;
    default:
        namaLayanan = "Tidak tersedia";
        tarif = 0;
        layananValid = false;
        break;
    }
    biaya = tarif * jumlahLembar;
}

void tampilHasil()
{
    cout << "\n------ HASIL PELAYANAN ------" << endl;
    cout << "Nama Pelanggan : " << nama << endl;
    cout << "Jenis Layanan  : " << namaLayanan << endl;
    if (layananValid)
    {
        cout << "Jumlah Lembar  : " << jumlahLembar << endl;
        cout << "Tarif          : Rp" << tarif << "/lembar" << endl;
        cout << "Total Biaya    : Rp" << biaya << endl;
    }
    else
    {
        cout << "Keterangan     : Kode layanan tidak valid, tidak diproses." << endl;
    }
    cout << "-----------------------------" << endl;
}

int main()
{
    int n, diproses = 0;
    long long totalPendapatan = 0;

    cout << "Jumlah pelanggan yang akan dilayani : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\n=== PELANGGAN KE-" << i << " ===" << endl;
        inputPelanggan();
        tentukanLayanan(kodeLayanan);
        tampilHasil();

        if (layananValid)
        {
            diproses++;
            totalPendapatan += biaya;
        }
    }

    cout << "\n=============================" << endl;
    cout << "Jumlah pelanggan diproses : " << diproses << " dari " << n << endl;
    cout << "Total pendapatan          : Rp" << totalPendapatan << endl;
    cout << "=============================" << endl;
    return 0;
}
