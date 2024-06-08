// Graf Tidak Berarah
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

vector<int> adjList[MAX];
int n = 5; // Jumlah simpul secara langsung ditentukan

void addEdge(int x, int y) {
    adjList[x].push_back(y);
    adjList[y].push_back(x); // Menambahkan sisi balik untuk memastikan graph tidak berarah
}

void displayGraph() {
    cout << "Daftar Ketetanggaan (Graf Tidak berarah) :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Simpul " << i << " :";
        for (size_t j = 0; j < adjList[i].size(); j++) {
            cout << " -> " << adjList[i][j];
        }
        cout << endl;
    }
}

int main() {
    // Menambahkan edge ke graph
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    // Menampilkan graph
    displayGraph();

    return 0;
}

