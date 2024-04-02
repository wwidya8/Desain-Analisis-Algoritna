#include <iostream>
using namespace std;
 
void array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
 
void InsertionSort(int arr[], int size) {
  for (int step = 1; step < size; step++) {
    int key = arr[step];
    int j = step - 1;
 

    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}
 

int main() {
  int data[] = {12, 11, 13, 5, 6};
//  int n=5;
  int size = sizeof(data) / sizeof(data[0]);
  
  cout << " Data Sebelum Disorting : ";
  for (int i=0; i<size; i++){
  	cout << data[i] << " ";
  }
  InsertionSort(data, size);
  cout << "\n\n Data Setelah Disoring :\n";
  array(data, size); 
}
