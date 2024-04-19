#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
protected:
    string status;
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    Mahasiswa() {}

    Mahasiswa(string status, string nama, int umur, string jurusan, string fakultas)
        : status(status), nama(nama), umur(umur), jurusan(jurusan), fakultas(fakultas) {}

    void input() {
        cout << "Masukkan Status Mahasiswa : ";
        getline(cin, status);
        cout << "Masukkan Nama Mahasiswa : ";
        cin.ignore(); // to clear the input buffer
        getline(cin, nama);
        cout << "Masukkan Usia Mahasiswa : ";
        cin >> umur;
        cout << "Masukkan Jurusan Mahasiswa : ";
        cin.ignore(); // to clear the input buffer
        getline(cin, jurusan);
        cout << "Masukkan Fakultas Mahasiswa : ";
        getline(cin, fakultas);
    }

    void printInfo() {
        cout << "Status : " << status << endl;
        cout << "Nama : " << nama << endl;
        cout << "Usia : " << umur << endl;
        cout << "Jurusan : " << jurusan << endl;
        cout << "Fakultas : " << fakultas << endl;
    }
};

int main() {
    Mahasiswa mahasiswa[5];
    string status, nama, jurusan, fakultas;
    int umur;

    for (int i = 0; i < 5; ++i) {
        cout << "\nMasukkan data untuk mahasiswa ke-" << i+1 << endl << endl;
        mahasiswa[i].input();
    }

    cout << "\nData Mahasiswa:" << endl;
    for (int i = 0; i < 5; ++i) {
        mahasiswa[i].printInfo();
        cout << endl;
    }

    return 0;
}
