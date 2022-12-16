#include<iostream>
using namespace std;
int total(int x,int y)
{
    return x*y;
}
double total(double x,double y)
{
    return x*y;
}
int main()
{
    int hasil = total(10,8);
    double koma = total(4.8,1.24);

    cout<<"int : "<<hasil<<endl;
    cout<<"double :"<<koma<<endl;
}
