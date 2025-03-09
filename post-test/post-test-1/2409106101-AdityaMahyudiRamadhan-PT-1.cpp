#include <iostream>
#include <cmath>

using namespace std;


const string USERNAME = "Aditya Mahyudi Ramadhan";
const string PASSWORD = "2409106101";

const double PI = 3.14;
double getPositiveInput(const string& prompt);

void menuUtama();
void menuLuas();
void menuKeliling();
void menuVolume();
void login();

int main() {
    login();
    return 0;
}

void login() {
    string inputUsername, inputPassword;
    int attempt = 3; 

    while (attempt > 0) {
        cout << "\n|| Selamat Datang Di Sistem Hitung..!!! ||\n";
        cout << "Masukkan Username Anda : ";
        getline(cin, inputUsername);
        cout << "Masukkan Password Anda : ";
        getline(cin, inputPassword);

        if (inputUsername == USERNAME && inputPassword == PASSWORD) {
            cout << "\nLogin Berhasil, Welcome! " << USERNAME << ".\n";
            menuUtama();
            return;
        } else {
            attempt--;
            cout << "\nPassword Anda salah, Silahkan masukkan Password kembali..!!!: " << attempt << "\n";
        }
    }

    cout << "\nUser Anda Salah, Silahkan masukan User Anda kembali.\n";
}

void menuUtama() {
    int pilihan;
    do {
        cout << "\n*************************************1******\n";
        cout << "|  SISTEM HITUNG BANGUN DATAR & RUANG     |\n";
        cout << "*******************************************\n";
        cout << "  1. Hitung luas                           \n";
        cout << "  2. Hitung keliling                       \n";
        cout << "  3. Hitung volume                         \n";
        cout << "  4. Log-Out                               \n";
        cout << "*******************************************\n";
        cout << "Pilih menu: "; cin >> pilihan;
        cout << "*******************************************\n";
        cin.ignore();
        switch (pilihan) {
            case 1: menuLuas(); break;
            case 2: menuKeliling(); break;
            case 3: menuVolume(); break;
            case 4: cout << "Logout berhasil.\n"; return;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (true);
}

void menuLuas() {
    int pilihan;
    double sisi, panjang, lebar, jarijari, alas, tinggi;
    do {
        cout << "\n*******************************************\n";
        cout << "|  HITUNG LUAS                            |\n";
        cout << "*******************************************\n";
        cout << " 1. Persegi                              \n";
        cout << " 2. Persegi Panjang                      \n";
        cout << " 3. Lingkaran                            \n";
        cout << " 4. Segitiga                             \n";
        cout << " 5. Kembali                              \n";
        cout << "******************************************\n";
        cout << "Pilih: "; cin >> pilihan;
        cout << "******************************************\n";
        switch (pilihan) {
            case 1: 
                sisi = getPositiveInput("Sisi: ");
                cout << "Luas: " << sisi * sisi << "\n"; 
                break;
                break;
            case 2: 
                panjang = getPositiveInput("Panjang: ");
                lebar = getPositiveInput("Lebar: ");
                cout << "Luas: " << panjang * lebar << "\n"; 
                break;
                break;
            case 3: 
                jarijari = getPositiveInput("Jari-jari: ");
                cout << "Luas: " << PI * jarijari * jarijari << "\n"; 
                break;
                break;
            case 4: 
                alas = getPositiveInput("Alas: ");
                tinggi = getPositiveInput("Tinggi: ");
                cout << "Luas: " << 0.5 * alas * tinggi << "\n"; 
                break;
                break;
            case 5: return;
            default: cout << "Pilihan Anda Salah..!!!\n";
        }
    } while (true);
}

void menuKeliling() {
    int pilihan;
    double sisi, panjang, lebar, A, D, I, T;
    do {
        cout << "\n*******************************************\n";
        cout << "| HITUNG KELILING                         |\n";
        cout << "*******************************************\n";
        cout << "  1. Persegi                              \n";
        cout << "  2. Persegi Panjang                      \n";
        cout << "  3. Lingkaran                            \n";
        cout << "  4. Segitiga                             \n";
        cout << "  5. Kembali                              \n";
        cout << "******************************************\n";
        cout << "Pilih: "; cin >> pilihan;
        cout << "******************************************\n";
        switch (pilihan) {
            case 1: 
                sisi = getPositiveInput("Sisi: ");
                cout << "Keliling: " << 4 * sisi << "\n"; 
                break;
            case 2: 
                panjang = getPositiveInput("Panjang: ");
                lebar = getPositiveInput("Lebar: ");
                cout << "Keliling: " << 2 * (panjang + lebar) << "\n"; 
                break;
            case 3: 
                A = getPositiveInput("Jari-jari: ");
                cout << "Keliling: " << 2 * PI * A << "\n"; 
                break;
            case 4: 
                cout << "Sisi 1: "; cin >> D; 
                cout << "Sisi 2: "; cin >> I; 
                cout << "Sisi 3: "; cin >> T; 
                cout << "Keliling: " << D + I + T << "\n"; 
                break;
            case 5: return;
            default: cout << "Pilihan Anda Salah..!!!\n";
        }
    } while (true);
}

void menuVolume() {
    int pilihan;
    double sisi, panjang, lebar, tinggi, jarijari;
    do {
        cout << "\n*******************************************\n";
        cout << "| HITUNG VOLEME                           |\n";
        cout << "*******************************************\n";
        cout << "  1. Kubus                                \n";
        cout << "  2. Balok                                \n";
        cout << "  3. Bola                                 \n";
        cout << "  4. Kerucut                              \n";
        cout << "  5. Kembali                              \n";
        cout << "*******************************************\n";
        cout << "Pilih: "; cin >> pilihan;
        cout << "*******************************************\n";
         
        
        switch (pilihan) {
            case 1: 
                sisi = getPositiveInput("Sisi: ");
                cout << "Volume: " << sisi * sisi * sisi << "\n"; 
                break;
            case 2: 
                panjang = getPositiveInput("Panjang: ");
                lebar = getPositiveInput("Lebar: ");
                tinggi = getPositiveInput("Tinggi: ");
                cout << "Volume: " << panjang * lebar * tinggi << "\n"; 
                break;
            case 3: 
            jarijari = getPositiveInput("Jari-jari: ");
                cout << "Volume: " << (4.0 / 3) * PI * jarijari * jarijari * jarijari << "\n"; 
                break;
            case 4: 
                jarijari = getPositiveInput("Jari-jari: ");
                tinggi = getPositiveInput("Tinggi: ");
                cout << "Volume: " << (1.0 / 3) * PI * jarijari * jarijari * tinggi << "\n"; 
                break;
            case 5: return;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (true);
}

double getPositiveInput(const string& prompt) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (value < 0) {
            cout << "Tidak di perbolehkan Input Bilangan negatif. Silakan coba lagi.\n";
        }
    } while (value < 0);
    return value;
}
