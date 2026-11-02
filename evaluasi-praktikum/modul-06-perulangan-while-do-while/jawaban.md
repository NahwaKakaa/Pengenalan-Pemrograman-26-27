# Evaluasi Praktikum 6 — Soal 6 (Analisis While)

```cpp
int angka = 20;
while (angka >= 5)
{
    cout << angka << " ";
    angka -= 3;
}
```

Jejak nilai `angka` setiap iterasi:

| Iterasi | `angka` dicek | `angka >= 5`? | Dicetak | `angka` setelah `-= 3` |
|---|---|---|---|---|
| 1 | 20 | ya | 20 | 17 |
| 2 | 17 | ya | 17 | 14 |
| 3 | 14 | ya | 14 | 11 |
| 4 | 11 | ya | 11 | 8 |
| 5 | 8 | ya | 8 | 5 |
| 6 | 5 | ya | 5 | 2 |
| – | 2 | **tidak** | – | berhenti |

**a. Output:** `20 17 14 11 8 5`

**b. Jumlah perulangan:** 6 kali.

**c. Nilai `angka` setelah perulangan selesai:** 2.

**d. Kondisi berhenti:** perulangan berhenti ketika kondisi `angka >= 5` bernilai **false**, yaitu saat `angka` sudah turun menjadi 2 (kurang dari 5) setelah dikurangi 3 pada iterasi ke-6.

Prediksi ini sudah dicek dengan menjalankan `soal6_analisis_while.cpp`, dan hasilnya sama.
