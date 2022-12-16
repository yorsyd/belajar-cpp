#include<iostream>
using namespace std;
int faktor(int n){
	int hasil = n;
	if(n==1){
		cout<<n<<endl;
		return hasil;
	}else{
		cout<<n<<"*";
		return hasil*faktor(n-1);
	}
}
int main(){
	int b;
	cout<<"masukan n : ";cin>>b;
	cout<<"NIlai faktor "<<b<<" adalah = "<<faktor(b);
}