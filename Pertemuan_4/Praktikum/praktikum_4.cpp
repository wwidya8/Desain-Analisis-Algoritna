#include <iostream>
#include <string>

using namespace std;

class info{
	private : 
	string a,b;
	int c;
	
	public :
		info (string nama, string alamat, int usia):a(nama),b(alamat),c(usia){
			cout<< "\n\n ---Informasi biodata anda--- \n ";
		}
		~info(){
			
		}
			  void data (){
			  	cout << "Nama \t: " << a << endl;
				cout << " Umur \t: " << c << endl;
				cout << " Alamat : " << b <<endl; 
			  }
		 
		
};
int main (){
int z;
string y,x;
cout << " Masukan nama anda \t: ";
getline(cin,y);
cout << " Masukan usia anda \t: ";
cin >> z;
cout << " Masukan alamat anda \t: ";
cin.ignore();
getline (cin,x);
{
	info obj(y,x,z);
	obj.data();
}
return 0;
}
