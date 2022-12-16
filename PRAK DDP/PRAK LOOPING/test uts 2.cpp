#include <iostream>
using namespace std;
int main ()
{
	while(true){
		char denda_apa,lanjut;
		double hrg,total_hrg;
		
		cout<<"Denda apa yang anda langgar? \n";
		cout<<"1.tidak ada lampu dan spion\n";
		cout<<"2.tidak menggunakan helm\n";
		cout<<"3.tidak membawa SIM\n";
		cout<<"4.tidak membawa sim dan helm\n";
		cout<<"5.melanggar semua peraturan\n";
		cin>>denda_apa;
		
		double denda1=100.000,denda2=200.000,denda3=250.000,denda4=350.000,denda5=500.000;
		if(denda_apa == '1'){
			cout<<"denda anda adalah "<<(double) denda1;
		}else if(denda_apa == '2'){
			cout<<"denda anda adalah "<<denda2;
		}else if(denda_apa == '3'){
			cout<<"denda anda adalah "<<denda3;
		}else if(denda_apa == '4'){
			cout<<"denda anda adalah "<<denda4;
		}else if(denda_apa == '5'){
			cout<<"denda anda adalah "<<denda5;
		}
		cout<<endl;
		cout<<"Lanjut (Y/T)";cin>>lanjut;
		if(lanjut=='Y'||lanjut=='y'){
			system("CLS");
			continue;
		}else{
			cout<<"\nProgram selesai!";
			break;
		}
		return 0;
}
}