// Modul 9 - Program 2: Pencarian Data pada Array
// - Jumlah data maksimal 15, dimasukkan dengan for
// - Perulangan + if memeriksa seluruh elemen untuk mencari nilai
// - Menampilkan indeks (dimulai dari 0) dan jumlah kemunculan
// - Function bertipe int hitungKemunculan() menghitung jumlah kemunculan
#include <iostream>
using namespace std;

const int MAKS = 15;

// Function: menghitung berapa kali nilai dicari muncul di dalam array
int hitungKemunculan(int data[], int n, int cari)
{
    int jumlah = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i] == cari)
            jumlah++;
    }
    return jumlah;
}

int main()
{
    int data[MAKS];
    int n, cari;

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
        cin >> data[i];
    }

    cout << "\nData : ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;

    cout << "\nCari nilai : ";
    cin >> cari;

    int jumlah = hitungKemunculan(data, n, cari);

    if (jumlah > 0)
    {
        cout << "\nData ditemukan." << endl;
        cout << "Nilai dicari      : " << cari << endl;
        cout << "Indeks            : ";
        for (int i = 0; i < n; i++)
        {
            if (data[i] == cari)
                cout << i << " ";
        }
        cout << endl;
        cout << "Jumlah kemunculan : " << jumlah << endl;
    }
    else
    {
        cout << "\nData tidak ditemukan" << endl;
    }

    return 0;
}
