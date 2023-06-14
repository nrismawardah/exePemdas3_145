#include <iostream>
using namespace std;

class bidangDatar {			// Variabel untuk menyimpan input dari lingkaran maupun bujursangkar
private:
	int x;
public:
	bidangDatar() {			// Constructor
		x = 0;
	}
	virtual void input(){}							// Fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0;}			// Fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0;}		// Fungsi untuk menghitung keliling
	void setX(int a) {								// Fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {									// Fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran:public bidangDatar{
public:
	void input() {
		cout << "Lingkaran dibuat\n";
		cout << "Masukkan jejari: ";
		int r;
		cin >> r;
		setX(r);
	}

	float Luas() {
		float r = getX();
		return 3.14 * r * r;
	}

	float Keliling() {
		float r = getX();
		return 2 * 3.14 * r;
	}
};

class Bujursangkar:public bidangDatar{
public:
	void input() {
		cout << "\nBujursangkar dibuat\n";
		cout << "Masukkan sisi: ";
		int s;
		cin >> s;
		setX(s);
	}

	float Luas() {
		float s = getX();
		return s * s;
	}

	float Keliling() {
		float s = getX();
		return 4 * s;
	}
};

int main() {
	Lingkaran lingkaran;
	lingkaran.input();
	cout << "Luas Lingkaran = " << lingkaran.Luas() << endl;
	cout << "Keliling Lingkaran = " << lingkaran.Keliling() << endl;

	Bujursangkar bujursangkar;
	bujursangkar.input();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas() << endl;
	cout << "Keliling Bujursangkar = " << bujursangkar.Keliling() << endl;

	return 0;
}
