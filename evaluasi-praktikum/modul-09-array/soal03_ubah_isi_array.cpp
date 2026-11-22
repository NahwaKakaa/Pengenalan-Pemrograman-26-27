// Evaluasi Modul 9 - Soal 3: Mengubah Isi Array Berdasarkan Kondisi
// Ketentuan perubahan:
//   - nilai < 50       -> diubah menjadi 0
//   - nilai 50 - 79    -> tetap
//   - nilai >= 80      -> ditambah 5 (maksimal 100)
// Data awal disalin ke array lain dulu supaya data sebelum perubahan tetap ada.
// Jumlah data tidak dibatasi di modul; di sini maksimal 50 (ukuran array).
#include <iostream>
using namespace std;

const int MAKS = 50;

int main()
{
    int awal[MAKS], hasil[MAKS];
    int n;

    cout << "Jumlah data (maks " << MAKS << ") : ";
    cin >> n;
    while (n < 1 || n > MAKS)
    {
        cout << "Jumlah harus 1 - " << MAKS << ". Ulangi : ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> awal[i];
    }

    // Salin data awal, lalu ubah salinannya
    for (int i = 0; i < n; i++)
    {
        hasil[i] = awal[i];

        if (hasil[i] < 50)
        {
            hasil[i] = 0;
        }
        else if (hasil[i] >= 80)
        {
            hasil[i] += 5;
            if (hasil[i] > 100)
                hasil[i] = 100;
        }
        // 50 - 79 tidak diubah
    }

    cout << "\nData sebelum perubahan : ";
    for (int i = 0; i < n; i++) cout << awal[i] << " ";
    cout << "\nData setelah perubahan : ";
    for (int i = 0; i < n; i++) cout << hasil[i] << " ";
    cout << endl;

    return 0;
}
