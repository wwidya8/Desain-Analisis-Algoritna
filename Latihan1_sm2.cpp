		
	//LATIHAN
//#include<iostream>
//using namespace std;
//
//int main (){
//	int x [] = {5, 2, 1, 4};
//	int j = sizeof(x)/sizeof(*x);
//	int temp;
//	
//	for (int i=0; i<j; i++){
//		cout << x[i] << " ";
//	}
//	cout << endl;
//	
//	for (int i=0; i<j; i++){
//		for (int h=0; h<j-1; h++){
//			if (x[h] > x [h+1]){
//				temp = x[h];
//				x[h] = x[h+1];
//				x[h+1] = temp;
//			}
//		}
//		cout << endl;
//		cout << " Tahap " << i + 1 << " : ";{
//		for (int a = 0; a < j; a++){
//			cout << x [a] << " ";
//		}
//	}
//		
//	}
//}

		//CONTOH KODE///
#include<iostream>
using namespace std;
int main()
{
    int i, arr[3], j, temp;
    cout<<"Enter 4 Elements: \n";
    for(i=0; i<4; i++)
        cin>>arr[i];
    cout<<endl;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<(4-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<"Step "<<i+1<<": ";
        for(j=0; j<4; j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    
    cout << "\n Result : "; 
    for(j=0; j<4; j++) {
    	 cout<<arr[j]<<" ";
	}
	
    cout<<endl;
//    return 0;
}

