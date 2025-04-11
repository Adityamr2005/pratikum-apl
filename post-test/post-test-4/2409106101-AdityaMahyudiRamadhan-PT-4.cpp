#include <iostream>
#include <string>
using namespace std;

void ucapanLebaran() {
    cout << "Selamat Idul Fitri 1446H Mohon Maaf Lahir dan Batin!" << endl;
}

void ulangUcapan(int n) {
    if (n <= 0) return;
    cout << "Selamat Idul Fitri 1446H Mohon Maaf Lahir dan Batin!" << endl;
    ulangUcapan(n - 1);
}

void inputNama(string&nama) {
    cout << "Tulis Nama Kamu: ";
    getline(cin, nama);
}

void tampilkanMenuHariRaya() {
    cout << "========Menu Makanan dan Minuman Lebaran========" << endl;
    cout << "1. Kentang Mustofa" << endl;
    cout << "2. Rendang" << endl;
    cout << "3. Soto Ayam" << endl;
    cout << "4. Buras" << endl;
    cout << "5. Kacang Mente" << endl;
    cout << "6. Kue Butter" << endl;
    cout << "7. Es Teh" << endl;
    cout << "8. Air Mineral" << endl;
    cout << "9. Kue Palm Sugar" << endl;
    cout << "10. Soda Cola" << endl;
}

void inputTHR(string nama, int& jumlahTHR) {
    cout << "\nBerapa hasil THR " << nama << " yang didapatkan? ";
    cin >> jumlahTHR;
}

void tampilkanRingkasan(string nama, int jumlahTHR) {
    cout << "\nRingkasan Lebaran untuk " << nama << ":" << endl;
    cout << "Jumlah THR yang diterima: Rp" << jumlahTHR << endl;
}

void tampilkanRingkasan(string nama) {
    cout << "\nUcapan selamat untuk " << nama << ":" << endl;
    cout << "Wow! Selamat Ya Hasil THR kamu sudah dapat banyak!." << endl;
}

int main() {
    string nama;
    int jumlahTHR;
    int jumlahUcapan;

    cout << "Cetak berapa kali ucapan hari raya Lebaran? ";
    cin >> jumlahUcapan;
    cin.ignore();

    ulangUcapan(jumlahUcapan);
    inputNama(nama);
    tampilkanMenuHariRaya();
    inputTHR(nama, jumlahTHR);
    tampilkanRingkasan(nama, jumlahTHR); 
    tampilkanRingkasan(nama);           

    return 0;
}