#include<iostream>
using namespace std;
int main(){
	int no[2][2][2]={
	//Lebar 0
	{
		//kolom 0
		{1,2},//baris 0
			//kolom1
		//kolom 0
		{4,5}//baris 1
			//kolom1
	},
	//lebar 1
	{
		//kolom 0
		{6,7},//baris 0
			//kolom 1
		//kolom 0
		{8,9}//baris 1
			//kolom 1
	}
};

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				cout<<"lebar ["<<i<<"] baris ["<<j<<"] kolom ["<<k<<"] adalah "<<no[i][j][k]<<endl;
			}cout<<endl;
		}
	}
}