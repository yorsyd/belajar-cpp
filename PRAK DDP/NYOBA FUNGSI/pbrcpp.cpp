#include<iostream>
using namespace std;
void nukar(int &c,int &d)
{
	int e=c;
	c=d;
	d=e;
}
int main(){
	int g ,h = 3;
	cout<<"Nilai g awal : "<<endl;
	cin>>g;

	cout<<"Nilai g: "<<g<<endl;
}