#include <iostream>
#include <vector>
using namespace std;

//Kelas utk mempresentasikan graf
class Graf {
	private:
		int jumlahSimpul; 	//Jumlah simpul dalam Graf
		vector<vector<int> > matrixKetetanggaan;	//Matrix Ketetanggaan
		
		public:
			//Konstruktor
			Graf(int simpul){
				jumlahSimpul = simpul;
		
			//Inisialisasi matrix ketetanggaan dengan nol
			for (int i = 0; i < simpul; i++){
				vector<int> baris (simpul,0);
				matrixKetetanggaan.push_back(baris);
			}	
		}


// Menambahkan sisi (edge) ke dalam Graf
void tambahSisi(int u, int v) {
	if (u >= 0 && u < jumlahSimpul && v >= 0 && v < jumlahSimpul){
		matrixKetetanggaan[u][v] = 1;	
		matrixKetetanggaan[v][u] = 1;
	}
	else{
		cout << " Sisi tidak valid! " << endl;
	}	
}

//Menghapus Sisi (edge) dari Graf
void hapusSisi(int u, int v){
	if (u >= 0 && u < jumlahSimpul && v >= 0 && v < jumlahSimpul){
	matrixKetetanggaan[u][v] = 0;	
	matrixKetetanggaan[v][u] = 0;	// For Undirected Graf
	}
	else {
		cout << " Sisi tidak valid! " << endl;
	}
}

//Menambahkan Matrix Ketetanggaan
void tampilkan() {
	for (int i = 0; i < jumlahSimpul; i++){
		for (int j = 0; j < jumlahSimpul; j++){
			cout << matrixKetetanggaan[i][j] << "  ";
		}
		cout << endl;
	}
} 

};

//Fungsi Utama
int main(){
	int simpul =5;
	Graf g(simpul);
	
	
	//Menambahkan sisi-sisi ke dalam Graf
	g.tambahSisi(0, 1);
	g.tambahSisi(0, 4);
	g.tambahSisi(1, 2);
	g.tambahSisi(1, 3);
	g.tambahSisi(1, 4);
	g.tambahSisi(2, 3);
	g.tambahSisi(3, 4);

	cout << " Matrix Ketetanggaan : " << endl;
	g.tampilkan();

	g.hapusSisi(1, 3);
	cout << " Matris Ketetanggaan setelah mengahpus sisi antara 1 dan 3 : " << endl;
	g.tampilkan();
	
	return 0;
}


