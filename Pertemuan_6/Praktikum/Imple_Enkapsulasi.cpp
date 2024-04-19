#include<iostream>

using namespace std;

class Karyawan {
	private :	//atribut
		int gaji;	//atribut
		
		public :	//metode
		
			void setGaji(int s)	//metode
			{	
				gaji = s;
			}
			
			int getGaji()	//metode
			{
				return gaji;
			}
};

int main ()
{
	Karyawan myObj;
	
	myObj.setGaji(50000);
	cout << myObj.getGaji();
	
}
