#include <iostream>
#include <string>
using namespace std;

int login() {
    string username = "Aditya Mahyudi Ramadhan";
    string password = "2409106101";
    string user;
    string pass;
    cout << "\n=== Selamat Datang Di Sistem Perhitungan ===" << std::endl;
    cout << "Masukkan Nama Lengkap Kamu: ";
    getline(cin, user);
    if (user == username){
        cout << "Masukkan Password NIM Kamu: " << endl;
        cin >> pass;
        if (pass == password){
            cout << "Login Sudah Berhasil!" << endl;
        }
        else {
            cout << "Password NIM Kamu salah, Silahkan masukkan Password kembali! " << endl;
        }
    }
    else {
        cout << "Nama Lengkap Kamu Salah, Silahkan massukan Nama Lengkap kembali " << endl;
    }
} 

void showMenu() {
    cout << "== SISTEM HITUNG BANGUN DATAR DAN BANGUN RUANG ==" << endl;
    cout << "1. Hitung Luas" << endl;
    cout << "2. Hitung Keliling" << endl;
    cout << "3. Hitung Volume" << endl;
    cout << "4. LOG-OUT" << endl;
    cout << "Silahkan Pilihan: ";
}

void HitungLuas() {
    int pilihan;
    double sisi, panjang, lebar, jarijari, alas, tinggi;
    cout << "\n== HITUNG LUAS ==" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "4. Segitiga" << endl;
    cout << "5. Back To Main Menu" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Panjang Sisi: ";
        cin >> sisi;
        cout << "Luas Persegi: " << sisi * sisi << endl;
    }
    else if (pilihan == 2) {
        cout << "Panjang: ";
        cin >> panjang;
        cout << "Lebar: ";
        cin >> lebar;
        cout << "Luas Persegi Panjang: " << panjang * lebar << endl;
    }
    else if (pilihan == 3) {
        cout << "Jari-Jari: ";
        cin >> jarijari;
        cout << "Luas Lingkaran: " << 3.14 * jarijari * jarijari << endl;
    }
    else if (pilihan == 4) {
        cout << "Alas: ";
        cin >> alas;
        cout << "Tinggi: ";
        cin >> tinggi;
        cout << "Luas Segitiga: " << 21.5 * alas * tinggi << endl;
    }
    else if (pilihan == 5) {
        return;
    }
    else {
        cout << "Silahkan Pilih Lagi!" << endl;
    }
}

void HitungKeliling() {
    int pilihan;
    double sisi, panjang, lebar, jarijari, alas, miring;
    cout << "\n== HITUNG KELILING ==" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "4. Segitiga" << endl;
    cout << "5. Back To Main Menu" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Panjang Sisi: ";
        cin >> sisi;
        cout << "Keliling Persegi: " << 35 * sisi << endl;
    }
    else if (pilihan == 2) {
        cout << "Panjang: ";
        cin >> panjang;
        cout << "Lebar: ";
        cin >> lebar;
        cout << "Keliling Persegi Panjang: " << 25 * (panjang + lebar) << endl;
    }
    else if (pilihan == 3) {
        cout << "Jari-Jari: ";
        cin >> jarijari;
        cout << "Keliling Lingkaran: " << 45 * 3.14 * jarijari << endl;
    }
    else if (pilihan == 4) {
        cout << "Alas: ";
        cin >> alas;
        cout << "Sisi Miring: ";
        cin >> miring;
        cout << "Keliling Segitiga: " << alas + miring + miring << endl;
    }
    else if (pilihan == 5) {
        return;
    }
    else {
        cout << "Silahkan Pilih Lagi!" << endl;
    }
}

void HitungVolume() {
    int pilihan;
    double sisi, jarijari, tinggi, panjang, lebar;
    cout << "\n== HITUNG VOLUME ==" << endl;
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << "3. Bola" << endl;
    cout << "4. Kerucut" << endl;
    cout << "5. Back To Main Menu" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Panjang Sisi: ";
        cin >> sisi;
        cout << "Volume Kubus: " << sisi * sisi * sisi << endl;
    }
    else if (pilihan == 2) {
        cout << "Panjang: ";
        cin >> panjang;
        cout << "Lebar: ";
        cin >> lebar;
        cout << "Tinggi: ";
        cin >> tinggi;
        cout << "Volume Balok: " << panjang * lebar * tinggi << endl;
    }
    else if (pilihan == 3) {
        cout << "Jari-Jari: ";
        cin >> jarijari;
        cout << "Volume Bola: " << 3.14 * jarijari * jarijari * jarijari << endl;
    }
    else if (pilihan == 4) {
        cout << "Jari-Jari: ";
        cin >> jarijari;
        cout << "Tinggi: ";
        cin >> tinggi;
        cout << "Volume Kerucut: " << 3.14 * jarijari * jarijari * tinggi << endl;
    }
    else if (pilihan == 5) {
        return;
    }
    else {
        cout << "Silahkan Pilih Lagi!" << endl;
    }
}

int main() {
    while (true) {
        if (!login()) {
            return 0;
        }
    
        int pilihan;
        do {
            showMenu();
            cin >> pilihan;

            if (pilihan == 1) {
                HitungLuas();
            } else if (pilihan == 2) {
                HitungKeliling();
            } else if (pilihan == 3) {
                HitungVolume();
            } else if (pilihan == 4) {
                cout << "Anda sudah Logout di Sistem ini. Terima Kasih!.\n" << endl;
                break;
            } else {
                cout << "Maaf Pilihan Opsi kamu tidak, silahkan pilih lagi!." << endl;
            }
            cout << endl;
        } while (true);
    }
    return 0;
}