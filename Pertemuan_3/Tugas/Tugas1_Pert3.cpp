#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
	private:
	string nama;
	int npm;
	
	public:
	void setNama(string n){
		nama = n;
	}
	void setNpm(int p){
		npm = p;
	}
	
	string getNama(){
		return nama;
	}
	
	int getNpm(){
		return npm;
	}
};

int main ()
{
	Mahasiswa mahasiswa[5];
	string nama;
	int no;
	
	
	for (int i = 0; i < 5; i++){
	
	cout << " Masukkan Nama Mahasiswa " << i+1 << " : ";
	getline (cin, nama);
	
	mahasiswa[i].setNama(nama);
	
	cout << " Masukkan NPM Mahasiswa " << i+1 << " : ";
	cin >> no;
		
	cin.ignore();
	
	mahasiswa[i].setNpm(no);
	
	cout << endl;
}
	
	cout << "\n Data Mahasiswa : " << endl << endl;
	for(int i = 0; i < 5; i++){
	
	cout << " Mahasiswa " << i+1 << " :" << endl;
	cout << " Nama : " << mahasiswa[i].getNama() << endl;
	cout << " NPM : " << mahasiswa[i].getNpm() << endl << endl;
	}
	
	
}





