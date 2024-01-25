#ifndef AKUN_MODEL_H
#define AKUN_MODEL_H

#include "Akun.h"
#include <iostream>

using namespace std;

bool login(const Akun &akun, const string &username, string &password){
    if (akun.username == username && akun.password == password) {
        cout << "Login berhasil. \n";
        return true;
    } else {
        cout << "Login gagal. Username dan password salah. \n";
        return false;
    }
}
void daftarAkun(Akun &akun) {
    cout << "Masukkan nama: ";
    cin >> akun.nama;

    cout << "Masukkan nomor telepon: ";
    cin >> akun.notelp;

    cout << "Masukkan username: ";
    cin >> akun.username;

    cout << "Masukkan password: ";
    cin >> akun.password;
}

#endif