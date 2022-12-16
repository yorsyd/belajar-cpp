#include<iostream>
using namespace std;
int main(){
	string mahasiswa[40][40];
	int batas,j,i,k=1;
	string korban;
	cout<<"Max 40 mahasiswa \n";
	cout<<"Masukan banyak mahasiswa = \n";cin>>batas;cout<<endl<<endl;
	
	for(int i=1;i<=batas;i++){
		getline(cin,korban);
		j=0;
		cout<<"Nim  : ";getline(cin,mahasiswa[i][j]);
		j++;
		cout<<"Nama : ";getline(cin,mahasiswa[i][j]);
	}
system("cls");
	
	//pemanggilan array
	cout<<"=====DAFTAR NIM DAN NAMA=====\n";
	for(int i=1;i<=batas;i++){
		j=0;
		cout<<i<<". "<<mahasiswa[i][j]<<"\t";
		j++;
		cout<<mahasiswa[i][j]<<endl<<endl;
	}
}