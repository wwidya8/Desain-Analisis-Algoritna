//Percobaan 2
#include <iostream>
#include <cstring> // buat memset di int main

using namespace std;

const int N = 100;
int dist[N] [N];

void flodyWarshall(int n)
{
	for (int k = 0; k < n; k++){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (dist[i][k] + dist[k][j] < dist [i][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
}

int main()
{
	int n;
	cout << " Masukkan jumlah node pada graph : ";
	cin >> n;
	memset(dist, 0x3f, sizeof dist);
	for (int i = 0; i < n; i++){
		dist[i][i] = 0;
	}
	cout << " Masukkan jarak antar node : ";
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		int w;
		cin >> w;
		dist[i][j] = w;
		}
	} 
	
	flodyWarshall(n);
	cout << " Hasil jalur terpendek antar node : " << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
