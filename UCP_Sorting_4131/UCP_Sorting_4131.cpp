//1. - dimulai dari i=1 dikarenakan i<(N-1), 1<5 maka proses dari loopingnya akan di lanjutkan
//	 - tentukan j nya 
//	 - jika data [j-1].data[j] maka tukar data tersebut
//	 - jika bernilai true bisa di tukar bila bernilai false tidak usah di tukar
//   - lakukan pengulangan sampai mereka urut

//2. - pertama-tama adalah menentukan jarak mula-mula dari data yang akan di bandingkan,yaitu N/2.
//	 - apabila data pertama lebih besar dari data ke N/2 tersebut maka kedua data tersebut dapat di tukar
//	 - kemudian data kedua di bandingkan dengan jarak yang sama yaitu N/2.
//	 - demikian seterusnya sampai seluruh data dibandingkan sehingga semua data ke-j selalu lebih kecil dari pada data ke-(j+N/2).
//	 - pada berikutnya di gunkan jarak (N/2)/2 atau N/4 data pertama dibandingkan dengan data dengan jarak N/4
//	 - apabila data pertama lebih besar dari data ke n/4 maka kedua data tsb di tukar
//	 - data kedua dibandingkan dengan jarak yang sama yaitu N/4
//	 - demikian seterusnya hingga seluruh data di bandingkan ke-j lebih kecil daripadda data ke-(j+N/4)
//	 - demikian seterusnya sampai jarah yang digunakan adalah 1.

//3. insertion sort dikarenakan gampang meneruskan dara dari ke kiri ke kanan dana jika datanya yang kanan lebih kecil -
//maka bisa langsung di pindah di kiri. dari data yang kecil ke besar



//soal 4

#include <iostream>
using namespace std;
int rd[31];
int n;

void input() {
	while (true) {
		cout << "memasukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 31)
			break;
		else {
			cout << "\narray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ";";
		cin >> rd[i];
	}
}

// proses sorting
void selectionsort() {
	int i, min_index, j;

	for (i = 0; i < n - 1; i++){
		min_index = i;
		for (j = i+1; j < n; j++)
			if (rdh[min_index], rdh[i])
	}

	swap(rdh[min_index; j; ]);

}

void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << fs[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}



int main()
{
	input();
	selectionsort();
		display();
}