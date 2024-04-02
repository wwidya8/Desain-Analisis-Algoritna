#include <iostream>
using namespace std;

void pengurangan(){
	int u,a,b;
	
	cout << " Masukkan dua angka : ";
	cin >> a;
	cout << " ";
	cin >> b;	
	
	
	if (b>a){
		u=a;
		a=b;
		b=u;
	}
	double rumus2;       
	rumus2 = a-b;
	
	cout << " Hasil: "<<rumus2;	
}


void pertambahan(){
	int rumus1,a,b;
	
	cout << " Masukkan dua angka : ";
	cin >> a;
	cout << " ";
	cin >> b;	
       
	rumus1= a+b;
	
	cout << " Hasil: "<<rumus1;	
}

void perkalian(){
	int rumus3,a,b;
	
	cout << " Masukkan dua angka : ";
	cin >> a;
	cout << " ";
	cin >> b;	
       
	rumus3= a*b;
	
	cout << " Hasil: "<<rumus3;	
}

void pembagian(){
	int u,a,b;
	
	cout << " Masukkan dua angka : ";
	cin >> a;
	cout << " ";
	cin >> b;	

	if (a==0){
		cout << " Pembagian Tidak Bisa Dengan 0 ";
	}
	if (b==0){
		cout << " Pembagian Tidak Bisa Dengan 0 ";
	}
	if (b>a){
		u=a;
		a=b;
		b=u;
	}
	else if (b==0){
		cout << " Pembagian Tidak Bisa Dengan 0 ";
	}
	double rumus4;       
	rumus4 = a/b;
	
	cout << " Hasil: "<<rumus4;	
	
}





int main()
{
	int pilih;
	int input;
	char t;
	
	ulang:
		
	cout<<" Pilih Operasi :"<<endl;
	cout<<endl;
	cout<<" 1. Pertambahan (+) "<<endl;
	cout<<" 2. Pengurangan (-) "<<endl;
	cout<<" 3. Perkalian (x) "<<endl;
	cout<<" 4. Pembagian (/) "<<endl;
	cout<<endl;
	cout<<"================================================="<<endl;
	cout<<endl<<endl;
	cout<<" >> Silahkan Pilih : ";
	cin>>pilih;
	cout<<endl;
	switch (pilih){
	
	case 1 : 
//    double rumus1;      
//	rumus1 = a+b;
//	cout<<endl;           
//	cout<<" Maka Hasilnya \t = "<<rumus1<<endl;

	pertambahan();
	break;   
	
	case 2 : 
//	double rumus2;       
//	rumus2 = a-b;
	pengurangan();
	break;                  
	
	case 3 : 
//	double rumus3;
//	rumus3 = a*b;
//	cout<<" Maka Hasilnya \t = "<<rumus3<<endl;
perkalian();
	break;   
	
	case 4 : 
//	double rumus4;
//	rumus4 = a/b;
//	cout<<" Maka Hasilnya \t = "<<rumus4<<endl;
pembagian();
	break; 
		}
		
		
		cout << " \n\nApakah Anda Ingin Melanjutkan ? (y/n) : ";
		cin >> t;
		if (t=='y' || t=='Y'){
			goto ulang;
		}
		else {
			system("cls");
			exit (0);
		}
}
