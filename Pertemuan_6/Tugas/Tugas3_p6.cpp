#include <iostream>
using namespace std;

// Kelas Induk
class BangunDatar {
protected:
    float alas, tinggi;

public:
    void setValue(float a, float b) {
        alas = a;
        tinggi = b;
    }
};

// Kelas turunan untuk persegi panjang
class PersegiPanjang : public BangunDatar {
public:
    float getValue() {
        return (alas * tinggi);
    }
};

// Kelas turunan untuk segitiga
class Segitiga : public BangunDatar {
public:
    float getValue() {
        return (0.5 * alas * tinggi);
    }
};

// Kelas turunan untuk persegi
class Persegi : public BangunDatar {
public:
    float getValue() {
        return (alas * alas);
    }
};

int main() {
	
    // Inisialisasi objek
    PersegiPanjang pp;
    Segitiga segitiga;
    Persegi persegi;

    // Inisialisasi nilai
    float alasPP, tinggiPP;
    cout << " Masukkan panjang persegi panjang : ";
    cin >> alasPP;
    cout << " Masukkan lebar persegi panjang : ";
    cin >> tinggiPP;
    pp.setValue(alasPP, tinggiPP);
	cout << endl;
	
    float alasSegitiga, tinggiSegitiga;
    cout << " Masukkan alas segitiga : ";
    cin >> alasSegitiga;
    cout << " Masukkan tinggi segitiga : ";
    cin >> tinggiSegitiga;
    segitiga.setValue(alasSegitiga, tinggiSegitiga);
    cout << endl;

    float sisiPersegi;
    cout << " Masukkan panjang sisi persegi : ";
    cin >> sisiPersegi;
    persegi.setValue(sisiPersegi, sisiPersegi);
    cout << endl << endl;

    // Nilai Kembalian
    float luasPP = pp.getValue();
    float luasSegitiga = segitiga.getValue();
    float luasPersegi = persegi.getValue();

    // Menampilkan Hasil
    cout << " --Hasil Hitung Luas Bangun Datar-- " << endl;
    cout << " Luas Persegi Panjang : " << luasPP << endl;
    cout << " Luas Segitiga : " << luasSegitiga << endl;
    cout << " Luas Persegi : " << luasPersegi << endl;

    return 0;
}
