#include <iostream>
using namespace std;

class contoh {
	
	private:
		int nilai; // Anggota data private yang menyimpan nilai integer
	public:
		// Constructor yang menerima satu parameter bertipe integer untuk menginisialisasi nilai anggota data nilai
		contoh (int n){
			nilai = n;
		}
		
	// Fungsi anggota untuk mengembalikan nilai dari anggota data nilai
	int getNum(){
		return nilai;
	}
};

int main (){
	
	// Membuat objek dari kelas contoh dengan nilai awal 10 menggunakan constructor
	contoh obj(10);
	
	// Mencetak nilai yang disimpan dalam objek menggunakan fungsi getNum()
	cout << " Nilai yang diinput : " << obj.getNum() << endl;
	return 0;
}


