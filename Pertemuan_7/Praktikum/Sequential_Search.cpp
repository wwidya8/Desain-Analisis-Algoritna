#include <iostream>

using namespace std;

int main (){
	
	//deklarasi variabel
	int Nilai [20];
	int Posisi[20];
	int i, n, Bil, jum=0;
	bool ketemu;
	
	cout << "\n Masukkan jumlah deret bilangan = ";
	cin >> n;
	cout << endl;
	
	//Membaca elemen array
	for (i=0; i<n; i++){
		cout << " Nilai bilangan ke-"<<i<<" = ";
		cin >>Nilai[i];
	}
	
	cout << "\n\n Masukkan bilangan yang akan Dicari = ";
	cin >> Bil;
	
	//Melakukan Pencarian
	for (i=0; i<n; i++){
		if (Nilai[i]==Bil){
			ketemu = true;
			Posisi[jum]=i;
			jum++;
		}
	}
	if (ketemu){
		cout <<" Bilangan "<<Bil<< " Ditemukan Sebanyak "<<jum;
		cout << "\n Pada Posisi ke = ";
		for (i=0; i<jum; i++){
			cout << Posisi[i]<<" ";
		}
	}
	else {
		cout << " Maaf Bilangan "<<Bil<<" tidak ditemukan";
		getchar();
	}
}
