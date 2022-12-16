#include<iostream>
using namespace std;
float luas(int t = 2,int l = 1)
{
	float luas;
	luas = 0.5*t*l;
	return luas;
}
int main()
{
	int x,y;
	cout<<"Masukan tinggi : ";cin>>x;
	cout<<"Masukan lebar  : ";cin>>y;
	int hasil = luas(x,y);
	cout<<"Luas segitiga dengan fungsi = "<<hasil<<" cm";
}