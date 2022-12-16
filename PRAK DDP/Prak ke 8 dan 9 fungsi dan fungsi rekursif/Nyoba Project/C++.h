#include<iostream>
using namespace std;
void tukar(int &a,int &b)
{
    int
    c=a;
    a=b;
    c=a;
}
int main()
{
    int x = 4, y = 8;
    cout<<"Nilai x awal : "<<x<<endl;
    cout<<"Nilai y awal : "<<y<<endl;

    tukar(x,y)
    cout<<"=============== \n";
    cout<<"Nilai x akhir : "<<x<<endl;
    cout<<"Nilai y akhir : "<<y<<endl;
}
