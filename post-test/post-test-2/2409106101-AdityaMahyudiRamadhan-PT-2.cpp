#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;
const string USERNAME = "Aditya Mahyudi Ramadhan";
const string PASSWORD = "2409106101";

const int MAX_SERVIS = 100;
int idServis[MAX_SERVIS];
string namaPelanggan[MAX_SERVIS];
string jenisKerusakan[MAX_SERVIS];
string nomorKontak[MAX_SERVIS];
string status[MAX_SERVIS];  // "Diterima", "Perbaikan", "Selesai"
string biayaEstimasi[MAX_SERVIS];
int jumlahServis = 0;

int main() {
    string inputUsername, inputPassword;
    int attempts = 0;
    while (attempts < 3) {
        system("cls");
        cout << "===========================================\n";
        cout << "|           LOGIN SISTEM SERVIS           |\n";
        cout << "===========================================\n";
        cout << "  Username : "; getline(cin, inputUsername);
        cout << "  Password : "; getline(cin, inputPassword);
        if (inputUsername == USERNAME && inputPassword == PASSWORD) {
            cout << "\n Login berhasil! Selamat datang, " << USERNAME << "!\n";
            system("pause");
            break;
        } else {
            cout << "\n Username atau password salah! Percobaan tersisa: " << (2 - attempts) << "\n";
            system("pause");
            attempts++;
        }
    }
    if (attempts == 3) {
        cout << "\n Terlalu banyak percobaan gagal. Program keluar.\n";
        return 0;
    }
    int pilih;
    do {
        system("cls");
        cout << "\n===========================================\n";
        cout << "|         PROGRAM SERVIS KOMPUTER          |\n";
        cout << "===========================================\n";
        cout << "| 1. Tambah Data Servis                    |\n";
        cout << "| 2. Tampilkan Data Servis                 |\n";
        cout << "| 3. Keluar                                |\n";
        cout << "===========================================\n";
        cout << "  Pilih menu : ";
        cin >> pilih;
        cin.ignore();
        if (pilih == 1) {
            if (jumlahServis < MAX_SERVIS) {
                idServis[jumlahServis] = jumlahServis + 1;
                system("cls");
                cout << "\n===========================================\n";
                cout << "            Input Data Pelanggan \n";
                cout << "===========================================\n";
                cout << "  Masukkan Nama pelanggan  : "; 
                getline(cin, namaPelanggan[jumlahServis]);
                cout << "  Masukkan No. Telephon    : ";
                getline(cin, nomorKontak[jumlahServis]);
                cout << "  Masukkan jenis kerusakan : ";
                getline(cin, jenisKerusakan[jumlahServis]);
                cout << "  Estimasi Biaya          Rp. ";
                getline(cin, biayaEstimasi[jumlahServis]);
                cout << "  Status Perbaikan         : ";
                getline(cin, status[jumlahServis]);
                jumlahServis++;
                cout << "===========================================\n";
                cout << "    Data Berhasil ditambahkan..!\n";
                cout << "===========================================\n";
            } else {
                cout << "Data servis penuh, tidak dapat menambahkan lagi.\n";
            }
            system("pause");
        } else if (pilih == 2) {
            if (jumlahServis == 0) {
                cout << " Tidak ada data servis.\n";
            } else {
                cout << "\nDaftar Servis Komputer:\n";
                cout << "============================================\n";
                for (int i = 0; i < jumlahServis; i++) {
                    cout << "| No. ID : " << idServis[i] 
                         << " | Pelanggan : " << namaPelanggan[i]
                         << " | No. Tlp. : " << nomorKontak[i]
                         << " | Kerusakan : " << jenisKerusakan[i]
                         << " | Estimasi Biaya Rp. " << biayaEstimasi[i] 
                         << " | Status Perbaikan : " << status[i] << endl;
                }
                cout << "============================================\n";
            }
            system("pause");
        } else if (pilih == 3) {
            cout << " Terima kasih telah menggunakan sistem ini..!\n";
            system("pause");
            break;
        } else {
            cout << " Pilihan tidak valid! Silakan coba lagi.\n";
            system("pause");
        }
    } while (true);
    return 0;
}
