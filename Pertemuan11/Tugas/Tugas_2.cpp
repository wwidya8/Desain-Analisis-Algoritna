#include <iostream>
#include <vector>
#include <queue>
#include <climits> // For INT_MAX

using namespace std;

const int MAX = 7; // Jumlah maksimum node + 1 (indeks 1 sampai 6)

vector<pair<int, int> > adj[MAX]; // Adjacency list untuk menyimpan graf
int dist[MAX]; // Array untuk menyimpan jarak terpendek dari node 1 ke node-i

void dijkstra(int start) {
    // Inisialisasi jarak awal semua node ke takhingga
    for (int i = 1; i <= MAX; ++i) {
        dist[i] = INT_MAX;
    }

    // Priority queue untuk Dijkstra
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push({0, start}); // Jarak dari start ke start adalah 0
    dist[start] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int u_dist = pq.top().first;
        pq.pop();

        // Skip jika sudah dikunjungi
        if (u_dist > dist[u]) continue;

        // Iterasi semua tetangga dari u
        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            // Perbarui jarak jika menemukan jarak yang lebih pendek
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    // Menambahkan edge-edge sesuai dengan graf yang diberikan
    adj[1].push_back({2, 7});
    adj[1].push_back({3, 9});
    adj[1].push_back({6, 14});

    adj[2].push_back({1, 7});
    adj[2].push_back({3, 10});
    adj[2].push_back({4, 15});

    adj[3].push_back({1, 9});
    adj[3].push_back({2, 10});
    adj[3].push_back({4, 11});
    adj[3].push_back({6, 2});

    adj[4].push_back({2, 15});
    adj[4].push_back({3, 11});
    adj[4].push_back({5, 6});

    adj[5].push_back({4, 6});
    adj[5].push_back({6, 9});

    adj[6].push_back({1, 14});
    adj[6].push_back({3, 2});
    adj[6].push_back({5, 9});

    int startNode = 1; // Node awal
    int endNode = 6;   // Node tujuan
    dijkstra(startNode);

    // Menampilkan jarak terpendek dari node 1 ke node 6
    cout << "Jarak terpendek dari node " << startNode << " ke node " << endNode << " adalah " << dist[endNode] << endl;

    return 0;
}

