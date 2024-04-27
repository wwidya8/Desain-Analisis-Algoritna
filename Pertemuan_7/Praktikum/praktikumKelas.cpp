#include <iostream>
using namespace std;

// Struktur Barang
struct Barang {
    string nama;
    int harga;
};

// Fungsi pencarian sequential
int cariBarang(const Barang daftar[], int n, string barangDiacari) {
    for (int i = 0; i < n; i++) {
        if (daftar[i].nama == barangDiacari) {
            return i; // Mengembalikan indeks barang yang ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika barang tidak ditemukan
}

int main() {
    // Array dari struktur barang
    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };
    

    // Pencarian barang
	string barangDicari;
	cout << " Masukkan nama barang yang ingin dicari : ";
	cin >> barangDicari;

    int indeksBarang = cariBarang(daftarBarang, 5, barangDicari); 

    if (indeksBarang != -1) {
        cout << " Barang " << barangDicari << " ditemukan dengan harga Rp. " << daftarBarang[indeksBarang].harga << endl;
    } else {
        cout << " Barang " << barangDicari << " tidak ditemukan";
    }

    return 0;
}
