#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


struct Karyawan
{
	string Nama;
	char JenisKelamin;
	int Usia;
	string Status;
	int TTL;
};

int main()
{
	Karyawan A[5];

	A[0].Nama = "Rizky Khapidsyah";
	A[0].JenisKelamin = 'P';
	A[0].Usia = 28;
	A[0].Status = "Lajang";
	A[0].TTL = 14101991;

	A[1].Nama = "Bambang Aditya";
	A[1].JenisKelamin = 'P';
	A[1].Usia = 29;
	A[1].Status = "Menikah";
	A[1].TTL = 111990;

	A[2].Nama = "Dwi Pradana";
	A[2].JenisKelamin = 'P';
	A[2].Usia = 28;
	A[2].Status = "Lajang";
	A[2].TTL = 111991;

	A[3].Nama = "Adisti Ariyani Hasibuan";
	A[3].JenisKelamin = 'W';
	A[3].Usia = 24;
	A[3].Status = "Lajang";
	A[3].TTL = 10081993;

	A[4].Nama = "Muhammad Reza";
	A[4].JenisKelamin = 'P';
	A[4].Usia = 28;
	A[4].Status = "Lajang";
	A[4].TTL = 11061991;

	cout << "===========================" << endl;
	cout << "CONTOH 1 - Menampilkan Data" << endl;
	cout << "===========================" << endl;
	cout << endl;

	for (int i = 0; i <= 4; i++)
	{
		cout << "------------------------------------------" << endl;
		cout << "Nama           : " << A[i].Nama << endl;
		cout << "Jenis Kelamin  : " << A[i].JenisKelamin << endl;
		cout << "Usia           : " << A[i].Usia << endl;
		cout << "Status         : " << A[i].Status << endl;
		cout << "Tanggal Lahir  : " << A[i].TTL << endl;

		if (i == 4)
		{
			cout << "------------------------------------------" << endl;
		}
	}




	_getch();
	return 0;
}