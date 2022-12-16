#include<iostream>
using namespace std;
int main(){
	int i,j,k,n;
	cout<<"Masukan nilai batas: \n";cin>>n;
	for(i=1;i<=n*2+1;i++){
	cout<<"*";
	}cout<<endl;
	for(i=1;i<=n;i++){
		for(j=0;j<=n-i;j++)
		cout<<"*";
		for(k=1;k<=i;k++)
		cout<<" ";
		for(k=1;k<i;k++)
		cout<<" ";
		for(j=0;j<=n-i;j++)
		cout<<"*";
	cout<<endl;
}	for(i=n;i>=1;i--){
		for(j=n-i;j>=0;j--)
		cout<<"*";
		for(k=1;k<=i;k++)
		cout<<" ";
		for(k=1;k<i;k++)
		cout<<" ";
		for(j=n-i;j>=0;j--)
		cout<<"*";
	cout<<endl;
}	for(i=1;i<=n*2+1;i++){
	cout<<"*";
	}cout<<endl;
}