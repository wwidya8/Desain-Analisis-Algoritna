// Graf Berbobot
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

vector<pair<int, int> > adjList[MAX];
int n = 5;

void addEdge(int x, int y, int weight) {
    adjList[x].push_back(make_pair(y, weight));
}

void displayGraph() {
    cout << "Daftar Ketetanggaan (Graf Berbobot) :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Simpul " << i << " :";
        for (size_t j = 0; j < adjList[i].size(); j++) {
            cout << " -> " << adjList[i][j].first << " (Bobot: " << adjList[i][j].second << ")";
        }
        cout << endl;
    }
}

int main() {
    // Menambahkan edge ke graph dengan bobot yang diminta
    addEdge(0, 1, 10);
    addEdge(0, 4, 20);
    addEdge(1, 2, 30);
    addEdge(1, 3, 40);
    addEdge(1, 4, 50);
    addEdge(2, 3, 60);
    addEdge(3, 4, 70);

    displayGraph();

    return 0;
}

