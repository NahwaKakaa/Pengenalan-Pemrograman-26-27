// Dipakai otomatis oleh task "Buat .exe untuk Windows".
// Menahan jendela console di Windows agar hasil program sempat terbaca
// sebelum jendelanya tertutup. Tidak perlu di-#include di kode program.
#include <cstdlib>
#include <iostream>
#include <limits>

static void tunggu_enter_sebelum_keluar()
{
    std::cout << "\n\nTekan Enter untuk keluar..." << std::flush;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

static const int daftar_tunggu_enter = (std::atexit(tunggu_enter_sebelum_keluar), 0);
