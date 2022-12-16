#include<iostream>
using namespace std;
int main(){
	int no[3][2]=
	{
	//kolom 0
	{1,4},//baris 0
	{3,2},//baris 1
	{6,5} //baris 2
       //kolom 1
	};
	//perulangan buat memanggil array
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<"nilai Baris["<<i<<"] dan kolom ["<<j<<"] adalah : "<<no[i][j]<<endl;
		}
	}
}