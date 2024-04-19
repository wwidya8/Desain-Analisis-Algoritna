#include <iostream>
#include <string>
using namespace std;

// Kelas dasar Kendaraan
class Kendaraan {
protected:
    string merek;
    int tahunProduksi;

public:
    // Konstruktor Kendaraan dengan parameter merek dan tahun produksi
    Kendaraan(string _merek, int _tahunProduksi) : merek(_merek), tahunProduksi(_tahunProduksi) {}

    // Untuk mencetak informasi merek dan tahun produksi kendaraan
    void info() {
        cout << " Merek : " << merek << ", " << "Tahun Produksi : " << tahunProduksi << endl;
    }
};

// Kelas turunan Mobil dari Kendaraan
class Mobil : public Kendaraan {
private:
    int jumlahPintu;

public:
    // Konstruktor Mobil dengan parameter merek, tahun produksi, dan jumlah pintu
    Mobil(string _merek, int _tahunProduksi, int _jumlahPintu)
        : Kendaraan(_merek, _tahunProduksi), jumlahPintu(_jumlahPintu) {}

    // Untuk mencetak informasi merek, tahun produksi, dan jumlah pintu mobil
    void info() {
        Kendaraan::info(); // Memanggil metode info() dari kelas Kendaraan
        cout << " Jumlah Pintu : " << jumlahPintu << endl;
    }
};


int main() {
	
    // Deklarasi variabel untuk menyimpan informasi mobil
    string merekMobil;
    int tahunProduksiMobil, jumlahPintuMobil;

    
    cout << " \n Masukkan Informasi Mobil \t" << endl << endl;
    cout << " Merek Mobil : ";
    getline(cin, merekMobil);
    cout << " Tahun Produksi : ";
    cin >> tahunProduksiMobil;
    cout << " Jumlah Pintu : ";
    cin >> jumlahPintuMobil;

    // Membuat objek mobil berdasarkan informasi yang dimasukkan user
    Mobil mobil(merekMobil, tahunProduksiMobil, jumlahPintuMobil);

    // Mencetak informasi menggunakan metode info() dari kelas Mobil
    cout << "\n Informasi Mobil :" << endl;
    mobil.info();

    return 0;
}
