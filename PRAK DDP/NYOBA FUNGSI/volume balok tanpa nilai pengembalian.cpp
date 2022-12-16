#include<iostream>
using namespace std;
void rumus()
{
	int v,p = 12,l = 4,t = 8;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~Volume balok~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Diketahui sebuah balok memiliki panjang "<<p<<" cm,Lebar "<<l<<" cm,\ndan tinggi "<<t<<" cm. Maka hitunglah volume balok tsb.\n";
	int hasil = p*l*t;
	cout<<"Volume balok :\nPanjang = "<<p<<" cm\nLebar = "<<l<<" cm\nTinggi = "<<t<<" cm\n";
	cout<<"Hasil nya adalah : "<<hasil<<" cm\n";
}
int main()
{
	rumus();
}