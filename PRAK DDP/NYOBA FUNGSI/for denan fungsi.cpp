#include<iostream>
using namespace std;
void gen_ats(){
	int i,j,k,n;
	cout<<"Masukan nilai batas: \n";cin>>n;
//	for(i=1;i<=n*2+1;i++){
//	cout<<"*";
//	}cout<<endl;
	for(i=1;i<=n-1;i++){
		for(j=i;j<n;j++)
		cout<<" ";
		for(k=1;k<=2*n-1;k++){
			if(/*8i==n||*/k==n||k==2*i-1)
				cout<<"*";
			else
				cout<<" ";
		}cout<<endl;
}
	for(i=n-1;i>=1;i--){
		for(j=n;j>i;j--)
		cout<<" ";
		for(k=1;k<=2*n-1;k++){
			if(k==n||k==2*i-1)
			cout<<"*";
			else
			cout<<" ";
		}cout<<endl;
	}
}
void gen_bwh(){
	int i,j,k,n;
	for(i=1;i<=n-1;i++){
		for(j=i;j<n;j++)
		cout<<" ";
		for(k=1;k<=2*n-1;k++){
			if(/*8i==n||*/k==n||k==2*i-1)
				cout<<"*";
			else
				cout<<" ";
		}cout<<endl;
}
	for(i=n-1;i>=1;i--){
		for(j=n;j>i;j--)
		cout<<" ";
		for(k=1;k<=2*n-1;k++){
			if(k==n||k==2*i-1)
				cout<<"*";
			else
				cout<<" ";
		}cout<<endl;
	}
}
int main(){
	gen_ats();
	gen_bwh();

}
