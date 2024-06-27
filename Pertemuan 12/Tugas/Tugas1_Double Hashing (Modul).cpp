#include <iostream>
#include <vector>
#define TABLE_SIZE 13

using namespace std;

class HashTable {
private:
    vector<int> table;
    int hash1(int key) {
        return key % TABLE_SIZE;
    }
    int hash2(int key) {
        return 7 - (key % 7);
    }

public:
    HashTable() {
        table.resize(TABLE_SIZE, -1);
    }

    void insert(int key) {
        int index = hash1(key);
        if (table[index] != -1) {
            int i = 1;
            while (true) {
                int newIndex = (index + i * hash2(key)) % TABLE_SIZE;
                if (table[newIndex] == -1) {
                    table[newIndex] = key;
                    break;
                }
                i++;
            }
        } else {
            table[index] = key;
        }
    }

    void remove(int key) {
        int index = hash1(key);
        int i = 0;
        while (table[(index + i * hash2(key)) % TABLE_SIZE] != key) {
            if (table[(index + i * hash2(key)) % TABLE_SIZE] == -1) {
                cout << " Kunci tidak ditemukan." << endl;
                return;
            }
            i++;
        }
        table[(index + i * hash2(key)) % TABLE_SIZE] = -1;
        cout << " Kunci " << key << " telah dihapus." << endl;
    }

    void display() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (table[i] != -1) {
                cout << i << " --> " << table[i] << endl;
            } else {
                cout << i << " --> " << endl;
            }
        }
    }
};

int main() {
    HashTable ht;
    int pilihan, kunci;

    while (true) {
        cout << " Menu:\n";
        cout << " 1. Masukkan\n";
        cout << " 2. Hapus\n";
        cout << " 3. Tampilkan\n";
        cout << " 4. Keluar\n";
        cout << " Masukkan pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << " Masukkan kunci yang akan dimasukkan: ";
                cin >> kunci;
                ht.insert(kunci);
                break;
            case 2:
                cout << " Masukkan kunci yang akan dihapus: ";
                cin >> kunci;
                ht.remove(kunci);
                break;
            case 3:
                ht.display();
                break;
            case 4:
                cout << " Keluar dari program..." << endl;
                return 0;
            default:
                cout << " Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}

