#include<iostream>
using namespace std;
void Matrix_jumlah(){
	int kolom,baris;
	cout<<"Masukan Baris = ";cin>>baris;
	cout<<"Masukan kolom = ";cin>>kolom;

	int arr1[baris][kolom],arr2[baris][kolom];
	cout<<"Input Array 1\n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<" Input nilai array ["<<i<<"]"<<"["<<j<<"] = ";
		cin>>arr1[i][j];	
		}cout<<endl;
}
	cout<<"Input Array 2\n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<" Input nilai array ["<<i<<"]"<<"["<<j<<"] = ";
		cin>>arr2[i][j];	
		}cout<<endl;
}
	system("CLS");
	cout<<"Output Array 1= \n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<arr1[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"Output Array 2= \n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<arr1[i][j]<<" ";
		}cout<<endl;
	}
	
	cout<<"Penjumlahan Array 1 dan Array 2 adalah = \n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<arr1[i][j] + arr2[i][j]<<" ";
		}cout<<endl;
	}
}
void Matrix_kurang(){
	int kolom,baris;
	cout<<"Masukan Baris = ";cin>>baris;
	cout<<"Masukan kolom = ";cin>>kolom;

	int arr1[baris][kolom],arr2[baris][kolom];
	cout<<"Input Array 1\n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<" Input nilai array ["<<i<<"]"<<"["<<j<<"] = ";
		cin>>arr1[i][j];	
		}cout<<endl;
}
	cout<<"Input Array 2\n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<" Input nilai array ["<<i<<"]"<<"["<<j<<"] = ";
		cin>>arr2[i][j];	
		}cout<<endl;
}
	system("CLS");
	cout<<"Output Array 1= \n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<arr1[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"Output Array 2= \n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<arr1[i][j]<<" ";
		}cout<<endl;
	}
	
	cout<<"Penjumlahan Array 1 dan Array 2 adalah = \n";
	for(int i = 0;i<baris;i++){
		for(int j = 0;j<kolom;j++){
		cout<<arr1[i][j] - arr2[i][j]<<" ";
		}cout<<endl;
	}
}
int main(){	
	int pil;
do{
	cout<<endl;
	cout<<"Pilih\n1. Matrix Jumlah\n2. Matrix Kurang\npilih:";cin>>pil;
	switch(pil){
	case 1:
		Matrix_jumlah();
	break;
	case 2:
		Matrix_kurang();
	break;
	default:
		system("CLS");
		cout<<"Pilih Yang benar woii!!!";
	}
}while(pil<4);
}