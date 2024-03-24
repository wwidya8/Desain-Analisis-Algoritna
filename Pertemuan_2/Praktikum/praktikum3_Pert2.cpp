#include <iostream>
using namespace std;

	void swap(int arr[], int pos1, int pos2){
		int temp;
		temp = arr[pos1];
		arr[pos1] = arr [pos2];
		arr[pos2] = temp;
	}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    const int size = 5;
    int arr[size];

    cout << "Masukkan " << size << " elemen : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, size - 1);

    cout << "Array setelah diurutkan secara descending: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
