#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Graph {
private:
    int jumlahKota;
    vector<vector<int> > costMatrix;

public:
    Graph(int kota) : jumlahKota(kota) {
        costMatrix.resize(jumlahKota, vector<int>(jumlahKota));
    }

    void inputCostMatrix() {
        for (int i = 0; i < jumlahKota; ++i) {
            cout << "cost elemen baris ke - " << i + 1 << endl;
            for (int j = 0; j < jumlahKota; ++j) {
                cin >> costMatrix[i][j];
                if (i != j && costMatrix[i][j] == 0) {
                    costMatrix[i][j] = INT_MAX; // No path from i to j
                }
            }
        }
    }

    void printCostMatrix() {
        cout << "\nCost List = " << endl;
        for (int i = 0; i < jumlahKota; ++i) {
            for (int j = 0; j < jumlahKota; ++j) {
                if (costMatrix[i][j] == INT_MAX) {
                    cout << "INF ";
                } else {
                    cout << costMatrix[i][j] << " ";
                }
            }
            cout << endl;
        }
    }

    void floydWarshall() {
        vector<vector<int> > dist = costMatrix;
        vector<vector<int> > next(jumlahKota, vector<int>(jumlahKota, -1));

        for (int i = 0; i < jumlahKota; ++i) {
            for (int j = 0; j < jumlahKota; ++j) {
                if (costMatrix[i][j] != INT_MAX && i != j) {
                    next[i][j] = j;
                }
            }
        }

        for (int k = 0; k < jumlahKota; ++k) {
            for (int i = 0; i < jumlahKota; ++i) {
                for (int j = 0; j < jumlahKota; ++j) {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        next[i][j] = next[i][k];
                    }
                }
            }
        }

        int minCost = INT_MAX;
        int start = -1;
        int end = -1;
        for (int i = 0; i < jumlahKota; ++i) {
            for (int j = 0; j < jumlahKota; ++j) {
                if (dist[i][j] < minCost) {
                    minCost = dist[i][j];
                    start = i;
                    end = j;
                }
            }
        }

        if (minCost == INT_MAX) {
            cout << "Tidak ada jalur yang tersedia" << endl;
        } else {
            cout << "\nJalur Terpendek : ";
            int current = end;
            while (current != start) {
                cout << current + 1 << "-->";
                current = next[start][current];
            }
            cout << start + 1 << endl;

            cout << "Minimum Cost : " << minCost << endl;
        }
    }
};

int main() {
    int jumlahKota;
    cout << "Masukan Jumlah Kota = ";
    cin >> jumlahKota;
    cout << "Nilai Cost Matriks \n";

    Graph graph(jumlahKota);
    graph.inputCostMatrix();
    graph.printCostMatrix();
    graph.floydWarshall();

    return 0;
}

