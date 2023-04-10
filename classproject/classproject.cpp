#include <iostream>
using namespace std;

class Mahasiswa {
public:
	string nim;
	string nama;

public: void input() {
	cout << "\nMasukkan Nama Mahasiswa : ";
	cin >> nama;
	cout << "\nMasukkan NIM : ";
	cin >> nim;
}

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

	mhs1.input();
	mhs1.cetak();

	mk.input();
	mk.tampil();
}