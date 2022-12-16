#include<iostream>
using namespace std;
int luas(int x,int y){
	int result=x*y;
	return result;
}
float keliling(float r){
	float phi=22/7;
	float result=2*phi*r;
	return result;
}
int main(){
	int p,l,r;
	cout<<"Panjang: ";cin>>p;
	cout<<"Lebar  : ";cin>>l;
	cout<<"Jari-jari : ";cin>>r;
	cout<<"Hasil Luas persegi : "<<luas(p,l)<<" cm\n";
	cout<<"Hasil Keliling lingkaran : "<<keliling(r)<<" cm\n";
}
