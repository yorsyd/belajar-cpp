#include<iostream>
using namespace std;
int jum_int(int x,int y)
{
	return x*y;
}
float jum_flo(float x,float y)
{
	return x*y;
}
int main()
{
	int hasil = jum_int(8,100);
	float result = jum_flo(0.123,23.567);
	
	cout<<" Hasil int = "<<hasil<<endl<<" Hasil float = "<<result;
}