#include<iostream>
using namespace std;
int deret(int n);
int main(){
	int n;
	cout<<"Masukan nilai n = ";cin>>n;
	cout<<"jumlah deret = "<<n<<" adalah: "<<deret(n)<<endl;
}
int deret(int n){
	int nilai = n;
		if(n==1){
			return nilai;
		}else{
			return nilai+deret(n-1);       
		}
}
