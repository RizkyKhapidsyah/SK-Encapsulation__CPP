#pragma warning(disable:4996)

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

/*
	Akses Modifier :
	- private
	- protected
	- public
*/

class Mobil {
private:
	char aPlatNomor[100];
	char aWarna[100];
	int aKecepatan;

public:
	void Berjalan() {
		cout << "Mobil Sedang Berjalan.." << endl;
	}

	/* SETTER */
	void setPlatNomor(const char aPlatNomor[100]) {
		strcpy(this->aPlatNomor, aPlatNomor);
	}

	void setWarna(const char Wrn[100]) {
		strcpy(aWarna, Wrn);
	}

	void setKecepatan(int K) {
		aKecepatan = K;
	}

	/* GETTER */
	char* getPlatNomor() {
		return aPlatNomor;
	}

	char* getWarna() {
		return aWarna;
	}

	int getKecepatan() {
		return aKecepatan;
	}
};

int main() {
	/* Objek */
	Mobil M;

	M.setPlatNomor("BK121KY");
	M.setWarna("Merah");
	M.setKecepatan(56);

	cout << "Plat Nomor  : " << M.getPlatNomor() << endl;
	cout << "Warna       : " << M.getWarna() << endl;
	cout << "Kecepatan   : " << M.getKecepatan() << endl << endl;

	M.Berjalan();

	_getch();
	return 0;
}