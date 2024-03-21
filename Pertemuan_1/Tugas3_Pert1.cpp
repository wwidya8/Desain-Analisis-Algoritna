#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, i, j;
    string tmp;
    string buku[100];

    cout << "\n Masukkan Banyaknya Judul Buku = ";
    cin >> n;
    cin.ignore();
    
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " Judul Buku Ke-" << i + 1 << " : ";
        getline(cin, buku[i]);
    }

    cout << "\n\n Data Setelah Sorting :\n";
    for (i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(buku[j] > buku[j + 1]) { 
                tmp = buku[j];
                buku[j] = buku[j + 1];
                buku[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }
    cout << endl;

    return 0;
}
