#include<iostream>
using namespace std;
int deret(int n){
	int nilai = n;
	if(n==1){
		return nilai;
	}else{
		return nilai+deret(n-1);
	}
}
int main(){
	int n;
	cout<<"Masukan nilai n = ";cin>>n;
	cout<<"JUmlah deret "<<n<<" adalah "<<deret(n)<<endl;
}