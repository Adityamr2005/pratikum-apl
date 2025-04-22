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

void inputNama(string& nama) {
    cout << "Tulis Nama Kamu: ";
    getline(cin, nama);
}

void tampilkanMenuHariRaya() {
    cout << "Jadi menu di hari raya saya makan Rendang, Kentang Mustofa, Teh Kotak, Macam Macam Kue Lebaran, dll" << endl;
    cout << "Habis Makan mari kita foto keluarga, setelah itu pergi ke rumah tetangga di cokro saya, kemudian pergi lagi ke rumah keluarga om saya" << endl;
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

void tambahTHR(int* ptrTHR, int tambahan) {
    *ptrTHR += tambahan;
    cout << "THR kamu ditambah Rp" << tambahan << ", total sekarang: Rp" << *ptrTHR << endl;
}

void resetTHR(int* ptrTHR) {
    *ptrTHR = 0;
    cout << "THR kamu telah di-reset menjadi: Rp" << *ptrTHR << endl;
}

void tampilkanAlamatTHR(int* ptrTHR) {
    cout << "Alamat memori dari variabel jumlahTHR: " << ptrTHR << endl;
}

void tampilkanIsiTHR(int* ptrTHR) {
    cout << "Nilai THR (melalui pointer): Rp" << *ptrTHR << endl;
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

    int tambahan;
    cout << "\nApakah kamu dapat tambahan THR? Masukkan jumlahnya: ";
    cin >> tambahan;
    tambahTHR(&jumlahTHR, tambahan);
    tampilkanRingkasan(nama, jumlahTHR);

    tampilkanAlamatTHR(&jumlahTHR);
    tampilkanIsiTHR(&jumlahTHR);

    char konfirmasi;
    cout << "\nApakah kamu ingin me-reset THR ke 0? (y/n): ";
    cin >> konfirmasi;
    if (konfirmasi == 'y' || konfirmasi == 'Y') {
        resetTHR(&jumlahTHR);
        tampilkanRingkasan(nama, jumlahTHR);
    }

    return 0;
}
