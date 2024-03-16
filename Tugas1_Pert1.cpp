	//--DESCENDING--//
#include <iostream>
using namespace std;

int main()
{
    char nilai[50];
    int i,n,j,tmp;

    cout << " \n Masukkan Banyaknya Array = ";
    cin >> n;
    cout << endl;
    for(int i = 0; i < n; i++)
    {
	cout << " \n Masukkan Angka Ke " << i+1 << " : "; cin >> nilai[i];
    }
    
    cout << "\n Data Sebelum Sorting : ";
	for (int i=0; i<n; i++)
    {
	cout << nilai[i] << ' ';
    }
	cout << endl;
	
    for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < n - i ; j++)
        {
        	if (nilai[j] < nilai[j+1])
            	{
                tmp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = tmp;
            	}
        }
    cout << endl;
    cout << " Proses Sorting " << i+1 << ": ";
    for (int i = 0; i < n; i++)
    {
        cout << nilai[i] << ' ';
    }
     
    }
    
    cout << " \n\n Data Setelah Sorting : ";
    for (int i = 0; i < n; i++)
    {
	cout<<nilai[i]<<' ';
    }
	
	cout<<endl;
    return 0;

}

//	//--ASCENDING--//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char nilai[50];
//    int n;
//
//    cout << " \n Masukkan Banyaknya Array = ";
//    cin >> n;
//    cout << endl;
//    for (int i = 0; i < n; i++)
//    {
//        cout << " \n Masukkan angka ke " << i + 1 << " : ";
//        cin >> nilai[i];
//    }
//    cout<<"\n Data Sebelum Sorting : ";
//        for (int i=0; i<n; i++)
//    {
//        cout<<nilai[i]<<' ';
//    }cout<<endl;
//	
//	for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (nilai[j] > nilai[j + 1])
//            {
//                char temp = nilai[j];
//                nilai[j] = nilai[j + 1];
//                nilai[j + 1] = temp;
//            }
//        }
//    cout << endl;
//    cout << " Proses Sorting "<<i+1<<": ";
//    for (int i = 0; i < n; i++)
//    {
//        cout << nilai[i] << ' ';
//    }
//    }
//    
//    cout << endl << endl;
//	cout << " Hasil Akhir = ";
//    for (int i = 0; i < n; i++)
//    {
//        cout << nilai[i] << ' ';
//    }
//    cout << endl;
//}






