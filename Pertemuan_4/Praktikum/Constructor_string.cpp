#include <iostream>
#include <string>

using namespace std;

class pelajaran {	//Class name 	//kelas
	public:		//Acces Specific
		pelajaran(){		//Constructor
			cout << " Ini adalah materi C++ tentang Constructor! ";
		}
};

int main (){
	pelajaran obj; //Membuat OBJ dari sebuah class 	
					//yang dipanggil kelasnya
					//obj untuk inisialisasi, jika dihapus tdk jalan
	
		
	return 0;
}
