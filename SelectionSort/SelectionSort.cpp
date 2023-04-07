// 1.Suatu algoritma dibutuhkan untuk menyelesaikan suatu masalah karena algoritma merupakan serangkaian instruksi langkah demi langkah yang dirancang untuk memecahkan masalah tertentu.

// 2.-Linear Data Structure: Linear data structure adalah struktur data yang elemen-elemennya disimpan secara teratur dalam urutan tertentu. Contoh dari struktur data ini adalah array, linked list, stack, dan queue.
//   -Non-Linear Data Structure: Non-linear data structure adalah struktur data yang elemen-elemennya disimpan tidak dalam urutan tertentu. Contoh dari struktur data ini adalah tree, graph, dan heap. Struktur data ini memungkinkan penyimpanan elemen yang lebih kompleks dan lebih fleksibel dibandingkan dengan linear data structure.

// 3.-Penggunaan Memory: Program algoritma yang efisien harus memanfaatkan memory secara efektif. Jika program menggunakan memory secara berlebihan, hal ini akan memperlambat kinerja program dan mengurangi efisiensi.
//   -Ukuran Input: Semakin besar ukuran input yang diolah oleh program algoritma, semakin besar pula waktu yang dibutuhkan untuk menyelesaikan algoritma. Oleh karena itu, ukuran input perlu diperhatikan dalam menentukan efisiensi algoritma.
//   -Algoritma yang Dipilih: Pemilihan algoritma yang tepat juga mempengaruhi efisiensi program.

// 4.SelectionSort karena paling efisien mengurutkan data karena memiliki kompleksitas waktu yang relatif cepat

// 5.-Quadratic : bubblesort, selectionsort, dan insertionsort
//   -Loglinear : mergesort, dan quicksort

//6

#include <iostream>
using namespace std;

const int JumlahData = 10;


void input(int Luthfi[], int n) {
	cout << "Masukkan Panjang Data (<=10): ";
	cin >> n;
	cout << "Masukkan " << n << " data:\n";
	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << i + 1 << ": ";
		cin >> Luthfi[i];
	}
}
		
	

	

void selectionsort(int Luthfi[], int n) {
	for (int LR = 0; LR <= n - 2; LR++) {
		int min_index = LR;
		for (int i = LR + 1; i <= n - 1; i++) {
			if (Luthfi[i] < Luthfi[min_index]) {
				min_index = i;
			}
		}
		int temp = Luthfi[LR];
		Luthfi[LR] = Luthfi[min_index];
		Luthfi[min_index] = temp;
	}
}

void display(int Luthfi[], int n) {
	cout << endl;											
	cout << "=================================" << endl;	
	cout << "Element Array yang telah tersusun" << endl;	
	cout << "=================================" << endl;	

	for (int LR = 0; LR < n; LR++) {
		cout << Luthfi[LR] << endl;
	}
}

int main() {
	int size = 28;
	int n = 2 * 15 + 10 + 20;
	int Luthfi[10];
	input(Luthfi, 10);
	selectionsort(Luthfi, 10);
	display(Luthfi, 10);
	return 0;
}