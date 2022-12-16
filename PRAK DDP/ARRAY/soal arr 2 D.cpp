#include<iostream>
using namespace std;
int main(){
	string nama[50][50];
	int batas,j;
	string korban;
	cout<<"Maximal 50 siswa\n";
	cout<<"Masukan jumlah siswa : ";cin>>batas;
	cout<<endl;
	for(int i=0;i<batas;i++){
		j=i;
		getline(cin,korban);
		cout<<"Nim : ";getline(cin,nama[j][i]);
		j++;
		cout<<"Nama : ";getline(cin,nama[j][i]);
		}
	system("cls");
	cout<<"-------Daftar mahasiswa-------"<<endl;
	for(int i=0;i<batas;i++){
		j=i;
		cout<<nama[j][i]<<"\t";
		j++;
		cout<<nama[j][i]<<endl;
	}
}