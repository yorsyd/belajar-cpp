#include<iostream>
using namespace std;
int main(){
	int no[2][2][2]={
	{
		//kolom 0
		{1,2},//baris 0
		{4,5}//baris 1
	},
	{
		{6,7},
		{8,9}
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