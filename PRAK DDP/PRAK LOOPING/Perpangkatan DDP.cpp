#include<iostream>
using namespace std;
int main()
{
			int no,a,b,c = 1,i=0;
//			cout<<"======PERKALIAN======\n";
//			cout<<"Masukan nilai a : ";cin>>a;
//			cout<<"masukan nilai b : ";cin>>b;

			cout<<"Masukan nomor yang anda inginkan !\n";
			cout<<"1. While\n";
			cout<<"2. for\n";
			cin>>no;
	switch(no){
	
		case 1:
			//int i = 0;
			cout<<"masukan bilangan a ";cin>>a;
			cout<<"masukan bilangan b ";cin>>b;
			while(i < b){
				c *= a;
				i++;
				}
				cout<<"Hasil dari "<<a<<" pangkat "<<b<<" adalah : "<< c <<endl;
				break;
		case 2:
			cout<<"masukan bilangan a ";cin>>a;
			cout<<"masukan bilangan b ";cin>>b;
			for(i ;i < b;i++)
			{
				c *= a ;
			}
			cout<<"Hasil dari "<<a<<" pangkat "<<b<<" adalah "<<c<<endl;
				break;
	}
}