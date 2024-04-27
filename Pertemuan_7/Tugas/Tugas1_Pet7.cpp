#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Struktur Rak Buku
struct Rakbuku {
    string nama;
    int urutan;
};

// Fungsi pencarian sequential
int cariRakbuku(const Rakbuku daftar[], int n, string rakbukuDicari) {
    for (int i = 0; i < n; i++) {
        if (daftar[i].nama == rakbukuDicari) {
            return daftar[i].urutan; // Mengembalikan nomor rak yang ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika rak tidak ditemukan
}

int main() {
    // Array dari struktur Rak Buku Di Perpustakaan
    Rakbuku daftarRakbuku[5] = {
        {"Algoritma Pemrograman", 1},
        {"Statistika", 2},
        {"Elektronika Dasar", 3},
        {"Jaringan Komputer", 4},
        {"Matematika", 5}
    };

    // Pencarian buku pada Rak Buku
    string rakbukuDicari;
    cout << " Masukkan Judul Buku yang ingin dicari: ";
    getline(cin, rakbukuDicari);

    int indeksRak = cariRakbuku(daftarRakbuku, 5, rakbukuDicari);

    if (indeksRak != -1) {
        cout << " Buku dengan judul \"" << rakbukuDicari << "\" berada di rak nomor " << indeksRak << endl;
    } else {
        cout << " Buku dengan judul \"" << rakbukuDicari << "\" tidak ditemukan" << endl;
    }

    return 0;
}
