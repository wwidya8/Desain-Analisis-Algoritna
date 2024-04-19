#include<iostream>

using namespace std;

// mempersingkat code dan waktu running atau mempermudah pengembangan program

// class induk
class BangunDatar{
	protected:
		int lebar, tinggi;
		
		public:
			void setValue(int a, int b){
				lebar = a;
				tinggi = b;
			}
};

// class turunan 1
class PersegiPanjang : public BangunDatar{
	public :
		int getValue(){
			return (lebar * tinggi);
		}
};

// class turunan 2
class Segitiga : public BangunDatar{
	public: 
	int getValue (){
		((lebar * tinggi) / 2);
	}
};

int main (){
	
	//inisialisasi Object
	PersegiPanjang persegi_panjang;
	Segitiga segitiga;
	
	
	//Inisialisasi Nilai
	persegi_panjang.setValue(4,5);
	segitiga.setValue(10,5);
	
	//mendapatkan nilai kembalian 
	cout << persegi_panjang.getValue() << endl;
	cout << segitiga.getValue() << endl;
	return 0;
}















