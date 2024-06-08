// Graf Berarah
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

vector<int> adjList[MAX];
int n = 5; 

void addEdge(int x, int y) {
    adjList[x].push_back(y);
}

void displayGraph() {
    cout << "Daftar Ketetanggaan (Graf Berarah) :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Simpul " << i << " :";
        for (size_t j = 0; j < adjList[i].size(); j++) {
            cout << " -> " << adjList[i][j];
        }
        cout << endl;
    }
}

int main() {

    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    displayGraph();

    return 0;
}

