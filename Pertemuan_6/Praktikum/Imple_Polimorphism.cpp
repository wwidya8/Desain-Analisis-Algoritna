#include<iostream>

using namespace std;

class Hewan {
	public :
		virtual void bersuara(){
			cout << "..." << endl;
		}
};

class Kucing : public Hewan{
	public :
		void bersuara(){
			cout << "Meow" << endl;
		}
};

class Kambing : public Hewan{
		public :
		void bersuara(){
			cout << "Mbekk" << endl;
		}
};

int main (){
	Hewan *h1 = new Kucing();
	Hewan *h2 = new Kambing();
	
	h1->bersuara();
	h2->bersuara();
}







