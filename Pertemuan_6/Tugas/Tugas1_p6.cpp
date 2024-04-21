#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
protected:
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    Mahasiswa() {}

    Mahasiswa(string nama, int umur, string jurusan, string fakultas)
        : nama(nama), umur(umur), jurusan(jurusan), fakultas(fakultas) {}

void input1() {
	
	    cout << "Masukkan Nama Mahasiswa : ";
	    getline(cin, nama);
	    cout << "Masukkan Usia Mahasiswa : ";
	    cin >> umur;
	    cout << "Masukkan Jurusan Mahasiswa : ";
	    cin.ignore(); // to clear the input buffer
	    getline(cin, jurusan);
	    cout << "Masukkan Fakultas Mahasiswa : ";
	    getline(cin, fakultas);
}


    void printInfo1() {

        cout << "Nama : " << nama << endl;
        cout << "Usia : " << umur << endl;
        cout << "Jurusan : " << jurusan << endl;
        cout << "Fakultas : " << fakultas << endl;
    }
};

class StatusMhs : public Mahasiswa {
private:
    string status;

public:
    StatusMhs() {}

    StatusMhs(string status, string nama, int umur, string jurusan, string fakultas)
        : Mahasiswa(nama, umur, jurusan, fakultas) {}

	void input2() {
	    cout << "Masukkan Status Mahasiswa : ";
	    getline(cin, status);
	    Mahasiswa::input1(); // Panggil input1() dari kelas Mahasiswa
	}


    void printInfo2() {
        
        cout << "Status : " << status << endl;
        Mahasiswa::printInfo1(); 
    }
};

int main() {
    StatusMhs mahasiswa[5];
    string status, nama, jurusan, fakultas, prodi;
    int umur;

    for (int i = 0; i < 5; ++i) {
        cout << "\nMasukkan data untuk mahasiswa ke-" << i+1 <<endl << endl;
        mahasiswa[i].input2();
    }

    cout << "\nData Mahasiswa:" << endl;
    for (int i = 0; i < 5; ++i) {
        mahasiswa[i].printInfo2();
        cout << endl;
    }

    return 0;
}
