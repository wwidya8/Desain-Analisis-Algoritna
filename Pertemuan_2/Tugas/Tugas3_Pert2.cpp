#include<iostream> 
using namespace std;

// 	QUICK SORT COMMENT

// Fungsi swap untuk menukar dua elemen dalam array
void swap(int arr[], int pos1, int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

// Fungsi partition untuk membagi array menjadi dua bagian berdasarkan pivot
int partition(int arr[], int low, int high, int pivot){
    int i = low - 1; 	// Index terakhir dari elemen yang lebih kecil dari pivot
    for (int j = low; j <= high - 1; j++){
        
        if (arr[j] < pivot){ 	// Jika elemen saat ini lebih kecil dari pivot
            i++; 	// Meningkatkan index terakhir dari elemen yang lebih kecil
            swap(arr, i, j); 	// Menukar elemen saat ini dengan elemen yang lebih kecil
        }
    }
    swap(arr, i + 1, high); 	// Menukar pivot dengan elemen yang lebih kecil berikutnya
    return (i + 1); 	// Mengembalikan index pivot yang baru
}

// Fungsi quicksort untuk mengurutkan array dengan menggunakan metode quicksort
void quicksort(int arr[], int low, int high){
    if (low < high){ 	// Jika masih ada lebih dari satu elemen dalam array
        
        int pivot = arr[high]; 	// Memilih pivot dari elemen terakhir
        int pi = partition(arr, low, high, pivot); 	// Membagi array dan mendapatkan index pivot
        
        // Panggil quicksort secara rekursif untuk bagian kiri dan kanan dari pivot
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

// Fungsi main sebagai titik masuk program
int main(){
    int n;
    cout << "Tentukan Panjang Array : ";
    cin >> n; // Input panjang array 
    int arr[n]; 	// Deklarasi array dengan panjang 'n'
    cout << "Masukkan Elemen Array : \n";
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 	// Meminta input elemen array 
    }
    quicksort(arr, 0, n - 1); // Memanggil fungsi quicksort untuk mengurutkan array
    cout << "Berikut Adalah Array Yang telah disortir: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " "; // Menampilkan array yang telah diurutkan
    }
    return 0; // Mengembalikan 0 untuk menunjukkan bahwa program berakhir dengan sukses
}








