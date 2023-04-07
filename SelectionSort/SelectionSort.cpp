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

int a[20];
int n;

void input() {
	while (true)
	{
		cout << "masukkan jumlah data pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray maksimal 20 .\n";
		}
	}
	cout << endl;								
	cout << "====================" << endl;		
	cout << "Masukan Elemen Array" << endl;		
	cout << "====================" << endl;		

}