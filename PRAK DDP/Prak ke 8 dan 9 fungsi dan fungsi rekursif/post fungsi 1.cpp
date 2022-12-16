#include<iostream>
using namespace std;
void pilihan(){
	int pilih;
	cout<<"1. luas persegi\n2. keliling persegi\n3. luas persegi panjang\n4. keliling persegi panjang\n5. luas lingkaran\n6. keliling lingkaran\n7. jumlah deret\n";
	
}//luas_persegi
int luaspersegi(int s){
	int hasil=s*s;
	return hasil;
}//keliling_persegi
 int kelilingper(int s){
	int hasil=4*s;
	return hasil;
}//luas_persegi_panjang
int luasperpan(int p,int l){
	int hasil=p*l;
	return hasil;
}//keliling_persegi_panjang
int kellperpan(int p,int l){
	int hasil=2*(p+l);
	return hasil;
}//luas_lingkaran
float luling(float r){
	float phi=3.14,hasil=phi*r*r;
	return hasil;
}//keliling_lingkaran
float kelling(float r){
	float phi=3.14,hasil=2*phi*r;
}//deret
int deret(int n){
	int nilai = n;
	if(n==1){
		return nilai;
	}else{
		return nilai+deret(n-1);
	}
	
}
	
int main(){
	int pil;
do{
	int pil,a,b;
	float r;
	pilihan();
	cout<<"Masukan pilihan : ";cin>>pil;
	if(pil==1){
		system("cls");
		cout<<"Masukan sisi : ";cin>>a;
		cout<<"luas persegi : "<<luaspersegi(a)<<endl;
	}else if(pil==2){
		system("cls");
		cout<<"Masukan sisi : ";cin>>a;
		cout<<"Keliling persegi : "<<kelilingper(a)<<endl;
	}else if(pil==3){
		system("cls");
		cout<<"Masukan panjang : ";cin>>a;
		cout<<"Masukan lebar :";cin>>b;
		cout<<"Luas persegi panjang : "<<luasperpan(a,b)<<endl;
	}else if(pil==4){
		system("cls");
		cout<<"Masukan panjang : ";cin>>a;
		cout<<"Masukan lebar :";cin>>b;
		cout<<"Keliling persegi panjang : "<<kellperpan(a,b)<<endl;
	}else if(pil==5){
		system("cls");
		cout<<"Masukan jari-jari : ";cin>>a;
		cout<<"Luas lingkaran : "<<luling(a)<<endl;
	}else if(pil==6){
		system("cls");
		cout<<"Masukan jari-jari : ";cin>>a;
		cout<<"keliling lingkaran : "<<kelling(a)<<endl;
	}else if(pil==7){
		system("cls");
		cout<<"Masukan nilai n : ";cin>>a;
		cout<<"Jumlah deret "<<a<<" adalah "<<deret(a)<<endl;
	}
}while(pil==7);
	return 0;
}
