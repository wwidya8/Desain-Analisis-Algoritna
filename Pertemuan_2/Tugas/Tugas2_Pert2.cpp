#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void mergeArrays(int arr[], int low, int mid, int high, int& comparisons, int& mov) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    int leftArray[leftSize];
    int rightArray[rightSize];

    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = arr[low + i];
        mov++;
    }
    for (int j = 0; j < rightSize; j++) {
        rightArray[j] = arr[mid + 1 + j];
        mov++;
    }

    int i = 0, j = 0, k = low;

    while (i < leftSize && j < rightSize) {
        comparisons++;
        if (leftArray[i] >= rightArray[j]) { 
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
        mov++;
    }

    while (i < leftSize) {
        arr[k] = leftArray[i];
        i++;
        k++;
        mov++;
    }

    while (j < rightSize) {
        arr[k] = rightArray[j];
        j++;
        k++;
        mov++;
    }
}

void mergeSort(int arr[], int low, int high, int& comparisons, int& movements) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        cout << "Memecah List [";
        print(arr + low, mid - low + 1);

        mergeSort(arr, low, mid, comparisons, movements);

        cout << "Memecah List [";
        print(arr + mid + 1, high - mid);
        mergeSort(arr, mid + 1, high, comparisons, movements);

        cout << "Menggabungkan List [";
        print(arr + low, high - low + 1);
        mergeArrays(arr, low, mid, high, comparisons, movements);
    }
}

int main() {
    int data[100], size;
    int comparisons = 0, movements = 0;
    
    cout<<"Masukan 10 elemen : ";
    for (int i = 0; i < 10; i++) {
       cin >> data[i];
    }
	
	system("cls");
	
    cout << "Data awal: [";
    for (int i = 0; i < 10; i++) {
        cout << data[i];
        if (i < 10 - 1) cout << ", ";
    }
    cout << "]" << endl;

    mergeSort(data, 0, 10 - 1, comparisons, movements);

    cout << "\nData terurut secara descending: [";
    for (int i = 0; i < 10; i++) {
        cout << data[i];
        if (i < 10 - 1) cout << ", ";
    }
    cout << "]" << endl;

}
