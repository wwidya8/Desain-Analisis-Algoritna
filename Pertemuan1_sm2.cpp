#include<iostream>
using namespace std;

void buble(int arr[], int n){
	int i, j, tmp;
	for(i = 0; i < n; i++){
		for(j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}


int main (){
	int array [100], n, i, j;
	cout << "Masukkan Banyak Elemen : ";
	cin >> n;
	cout << "Masukkan Nilai : \n";
	for (i=0; i<n; i++) {
		cin >> array [i];
	}
	cout << "\n";
	return 0;
}
