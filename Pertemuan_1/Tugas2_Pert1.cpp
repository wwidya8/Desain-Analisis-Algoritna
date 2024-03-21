		//--DESCENDING--//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "\n Masukkan jumlah elemen : ";
    cin >> n;

    int arr[n];
    cout << "\n Masukkan nilai elemen : " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "\n Elemen Array Ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "\n Data sebelum disorting : ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; ++i) {
        int index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
    
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;

        
        cout << " Iterasi ke-" << i + 1 << " : ";
        for (int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout << "\n Data setelah di sorting : ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

		//--ASCENDING--//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "\n Masukkan jumlah elemen : ";
//    cin >> n;
//
//    int arr[n];
//    cout << "\n Masukkan nilai elemen : " << endl;
//    for (int i = 0; i < n; ++i) {
//        cout << "\n Elemen Array Ke-" << i + 1 << " : ";
//        cin >> arr[i];
//    }
//
//    cout << "\n Data sebelum disorting : ";
//    for (int i = 0; i < n; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < n - 1; ++i) {
//        int index = i;
//        for (int j = i + 1; j < n; ++j) {
//            if (arr[j] < arr[index]) {
//                index = j;
//            }
//        }
//    
//        int temp = arr[i];
//        arr[i] = arr[index];
//        arr[index] = temp;
//
//        
//        cout << " Iterasi ke-" << i + 1 << " : ";
//        for (int k = 0; k < n; ++k) {
//            cout << arr[k] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << "\n Data setelah di sorting : ";
//    for (int i = 0; i < n; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}





