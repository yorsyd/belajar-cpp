#include<iostream>
using namespace std;
int faktorial(int n);

int main(){
	int n;
	cout<<"Masukan n = ";cin>>n;
	cout<<"Nilai faktorial "<<n<<" adalah = "<<faktorial(n)<<endl;
	return 0;
}
int faktorial(int n){
	int nilai = n;
	if(n==1){
		cout<<n<<endl;
			return nilai;
	}else{
		cout<<n<<"*";
		return nilai*faktorial(n-1);
	}
}
