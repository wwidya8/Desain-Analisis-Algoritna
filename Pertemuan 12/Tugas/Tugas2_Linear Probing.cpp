#include <iostream>
#include <vector>

using namespace std;

class HashTable {
private:
    vector<int> table;
    vector<bool> occupied;
    int table_size;

    int hash(int key) {
        return key % table_size;
    }

public:
    HashTable(int size) : table_size(size) {
        table.resize(table_size, -1);
        occupied.resize(table_size, false);
    }

    void insert(int key) {
        int index = hash(key);

        if (!occupied[index]) {
            table[index] = key;
            occupied[index] = true;
        } else {
            int i = 1;
            while (true) {
                int newIndex = (index + i) % table_size;
                if (!occupied[newIndex]) {
                    table[newIndex] = key;
                    occupied[newIndex] = true;
                    break;
                }
                i++;
            }
        }
    }

    bool search(int key) {
        int index = hash(key);
        int i = 0;
        while (occupied[(index + i) % table_size]) {
            if (table[(index + i) % table_size] == key) {
                return true;
            }
            i++;
        }
        return false;
    }

    void display() {
        cout << " Isi Tabel Hash:\n";
        for (int i = 0; i < table_size; i++) {
            if (occupied[i]) {
                cout << i << " --> " << table[i] << endl;
            } else {
                cout << i << " --> " << endl;
            }
        }
    }
};

int main() {
    int table_size, num_elements;
    
    cout << " Masukkan ukuran tabel hash: ";
    cin >> table_size;

    HashTable ht(table_size);

    cout << " Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> num_elements;

    for (int i = 0; i < num_elements; ++i) {
        int key;
        cout << " Masukkan kunci " << i + 1 << ": ";
        cin >> key;
        ht.insert(key);
    }

    ht.display();

    int search_key;
    cout << " Masukkan elemen yang ingin dicari pada tabel hash: ";
    cin >> search_key;

    if (ht.search(search_key)) {
        cout << " Elemen " << search_key << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << " Elemen " << search_key << " tidak ditemukan dalam tabel hash." << endl;
    }

    return 0;
}

