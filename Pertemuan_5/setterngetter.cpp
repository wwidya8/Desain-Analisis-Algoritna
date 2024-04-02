#include <iostream>
#include <string>
using namespace std;

class Operasi{
	
	private:
		
		float a; float b; float hasil1; float hasil2; float hasil3; float hasil4;
		
	public:
		
		void setTambah(float a, float b){
		
			hasil1=a+b;
			
		}
		
		float getTambah(){
			
			
			return hasil1;
		}
		
		void setKurang(float a, float b){
			
			hasil2=a-b;
			
		}
		
		float getKurang(){
			
			
			return hasil2;
		}
		
		void setKali(float a, float b){
			
			hasil3=a*b;
			
		}
		
		float getKali(){
			
			
			return hasil3;
		}
		
		void setBagi(float a, float b){
			
			hasil4=a/b;
			
		}
		
		float getBagi(){
			
			
			return hasil4;
		}
		
};

int main(){
	
	float ang1, ang2;
	Operasi operasi;
	
	cout << " Masukkan 2 angka : ";
	cin >> ang1;
	cout << " ";
	cin >> ang2;
	
	operasi.setTambah(ang1, ang2);
	cout << endl<< endl;
	
	cout << " Hasil Pertambahan = "<< operasi.getTambah();
	cout << endl<<endl;
	
	operasi.setKurang(ang1, ang2);
	cout << endl<< endl;
	
	cout << " Hasil Pengurangan = "<< operasi.getKurang();
	cout << endl<<endl;
	
	operasi.setKali(ang1, ang2);
	cout << endl<< endl;
	
	cout << " Hasil Perkalian = "<< operasi.getKali();
	cout << endl<<endl;
	
	operasi.setBagi(ang1, ang2);
	cout << endl<< endl;
	
	cout << " Hasil Pembagian = "<< operasi.getBagi();
	cout << endl<<endl;
}
