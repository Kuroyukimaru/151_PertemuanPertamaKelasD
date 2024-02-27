#include <iostream>
using namespace std;

int main()
{//begin
   
	//numeric nAlas, nTinggi, nLuas
	//display `Masukkan Alasnya= `
	//accept nAlas
	//dislpay `Masukkan Tingginya= `
	//accept nTinggi
	//compute n luas = 1/2 * nAlas * nTinggi
	//display `Luasnya adalah = ` + nLuas

	int nAlas, nTinggi;
	double nLuas;
	cout << "Masukkan Alasnya= ";
	cin >> nAlas;
	cout << "Masukkan Tingginya= ";
	cin >> nTinggi;
	nLuas = 1 / 2 * nAlas * nTinggi;
	cout << "Luasnya adalah= " << nLuas << endl;

	int Panjang, Lebar, Luas;
	cout << "Masukkan Panjangnya=";
	cin >> Panjang;

	

	system("pause");


}//end 