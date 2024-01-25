#include "Model/AkunModel.h"
#include "Model/KamarModel.h"
#include "Model/VillaModel.h"
#include "View/AkunView.h"
#include "View/KamarView.h"
#include "View/VillaView.h"

using namespace std;

int main() {
    Akun user;
    int pilihan;

    daftarAkun(user);

    if (login(user, user.username, user.password)) {
        tampilInfoAkun(user);
        tampilMenuUtama();

        // Tampilkan menu utama
        do {
            cout << "Pilih menu: ";
            cin >> pilihan;

            switch (pilihan) {
                case 1:
                    // Panggil fungsi-fungsi terkait Info Villa
                    break;
                case 2:
                    // Panggil fungsi-fungsi terkait Pembayaran
                    break;
                case 3:
                    // Panggil fungsi-fungsi terkait Info Profil
                    break;
                case 4:
                    ubahMember(user);
                    break;
                case 5:
                    cout << "Keluar dari program.\n";
                    break;
                default:
                    cout << "Pilihan tidak valid.\n";
                    break;
            }

        } while (pilihan != 5);
    } else {
        cout << "Login gagal. Program berhenti.\n";
    }

    return 0;
}