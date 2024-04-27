#include <iostream>
#include <algorithm> // Header <algorithm> untuk menggunakan fungsi pengurutan

using namespace std;

const int N = 100;
string judul[N]; // Menggunakan array string untuk menyimpan judul buku

// Fungsi untuk melakukan binary search
int binarySearch(string x, int l, int r) {
    while (r >= l) {
        int mid = l + (r - l) / 2; 
        if (judul[mid] == x)
            return mid;

        if (judul[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Masukkan Jumlah Buku: ";
    cin >> n;

    cout << "Masukkan Judul Buku: " << endl;
    for (int i = 0; i < n; i++) {
        cin.ignore(); 
        getline(cin, judul[i]); // Input judul buku
    }

    // Mengurutkan judul buku
    sort(judul, judul + n);

    string judulDicari;
    cout << "Masukkan Judul Buku yang dicari: ";
    cin.ignore();
    getline(cin, judulDicari);

    int hasil = binarySearch(judulDicari, 0, n - 1);
    if (hasil == -1) {
        cout << "Buku Tidak Ditemukan" << endl;
    } else {
        cout << "Buku Ditemukan Pada Indeks " << hasil << endl;
    }

    return 0;
}
