#include <iostream>
using namespace std;

class Mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM : " << nim;
	cout << "\nNama : " << nama;
	}
};

class Matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "\nMasukkan Kode Matakuliah : ";
		cin >> kode;
		cout << "Masukkan Nama Matakuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nKode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaM;
		cout << "\nSKS : " << sks;
	}
};

int main() {
	Mahasiswa mhs1;
	Matakuliah mk;

	cout << "Masukkan NIM : ";
	cin >> mhs1.nim;
	cout << "Masukkan Nama : ";
	cin >> mhs1.nama;
	mhs1.cetak();

	mk.input();
	mk.tampil();
}