#include<iostream>
using namespace std;
int deret(int x){
	if(x==0){
		return x;
	}else{
		return x + deret (x-1);
	}
}int main(){
	int angka;
	
	cout<<"Masukan angka yang di inginkan : ";cin>>angka;
	cout<<"Jumlah nilai sampai 1: "<<deret(angka);
}