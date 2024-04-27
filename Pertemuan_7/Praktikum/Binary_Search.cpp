#include <iostream>
#include <algorithm> // Header <algorithm> untuk menggunakan fungsi pengurutan

using namespace std;

const int N = 100;
int nim[N];

// Fungsi untuk melakukan binary search
int binarySearch(int x, int l, int r) {
    while (r >= l) {
        int mid = l + (r - l) / 2; // Menghitung indeks tengah
        if (nim[mid] == x)
            return mid;

        if (nim[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Masukkan Jumlah Mahasiswa: ";
    cin >> n;

    cout << "Masukkan NIM Mahasiswa: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nim[i];
    }

    // Mengurutkan NIM Mahasiswa
    sort(nim, nim + n);

    int x;
    cout << "Masukkan NIM yang dicari: ";
    cin >> x;

    int hasil = binarySearch(x, 0, n - 1);
    if (hasil == -1) {
        cout << "NIM Tidak Ditemukan" << endl;
    } else {
        cout << "NIM Ditemukan Pada Indeks " << hasil << endl;
    }

    return 0;
}

