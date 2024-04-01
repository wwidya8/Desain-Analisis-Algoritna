#include <iostream>
#include <string>

using namespace std;

class Data {
private:
    string nama;
    int nomorHp;

public:
    Data() {}
    
    Data(string nama, int nomorHp) : nama(nama), nomorHp(nomorHp) {}

    void display() {
        cout << " Nama Kontak : " << nama << endl;
        cout << " Nomor Telepon Kontak : " << nomorHp << endl;
    }
};

int main() { 
    const int jum_input = 10;
    string nama;
    int nomorHp;
   
    Data data_baru[jum_input];
    int n = 0;
    
    cout << "\n Masukkan Kontak (Maksimal 10 Kontak)\n\n";
    for (int i = 0; i < jum_input; i++) {
        cout << " Masukkan Nama Kontak ke-" << i + 1 << ": ";
        getline(cin, nama);

        cout << " Masukkan Nomor Kontak : ";
        cin >> nomorHp;
        cin.ignore(); 

        data_baru[i] = Data(nama, nomorHp);
        n++;
		char pil = 'y';
        if (i < jum_input - 1) {
        	
            tanya:
            cout << " Apakah Anda ingin menambahkan kontak lagi? (y/n): ";
            cin >> pil;
            cin.ignore();
            if (pil == 'y' || pil == 'Y')
                continue;
            else if (pil != 'n' && pil != 'N') {
                cout << " Pilihan tidak valid. Silakan masukkan 'y' untuk Ya atau 'n' untuk Tidak." << endl;
                goto tanya;
            }
        }
        if (pil == 'n' || pil == 'N')
            break;
    }

    cout << "\n Daftar Kontak : \n";
    for (int i = 0; i < n; ++i) {
        cout << " Data kontak ke-" << i + 1 << ":" << endl;
        data_baru[i].display();
        cout << "---------------------------" << endl;
    }

    return 0;
}
