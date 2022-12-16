9#include <iostream>
using namespace std;
int main(){
	float input, output;
	char asal, tujuan;
	
	cout<<"C untuk selsius       "<<endl;
	cout<<"F untuk fahrenheit    "<<endl;
	cout<<"K untuk kalvin        "<<endl;
	cout<<"       "<<endl;
	
	cout<<"Masukan skala asal        : ";cin>>asal;
	cout<<"Masukan suhu asal dalam "<<asal<<" : ";cin>>input;
	cout<<"Masukan skala tujuan      : ";cin>>tujuan;
	 
	switch(toupper(asal)) {
		case 'C' :
			switch(toupper(tujuan)) {
				case 'C' :
					output = input;
					break;
				case 'K' :
					output = input + 273;
					break;
				case 'F' :
					output = 1.8 * input + 32;
					break;
				default :
					cout<<"Skala tujuan tidak ditemukan!"<<endl;
					break;		
			}
			break;
		case 'K' :
			switch(toupper(tujuan)) {
				case 'C' :
					output = input - 273;
					break;
				case 'K' :
					output = input;
					break;
				case 'F' :
					output = 1.8 * (input - 273) + 32;
					break;
				default :
					cout<<"Skala tujuan tidak ditemukan!"<<endl;
					break;		
			}
			break;
		case 'F' :
			switch(toupper(tujuan)) {
				case 'C' :
					output = (input - 32) / 9 * 5;
					break;
				case 'K' :
					output = (input - 32) / 9 * 5 + 273;
					break;
				case 'F' :
					output = input;
					break;
				default :
					cout<<"Skala tujuan tidak ditemukan!"<<endl;
					break;		
			}
			break;
		default :
			cout<<"Skala asal tidak ditemukan!"<<endl;
				
	}
	
	cout<<input<<" derajat "<<asal<<" sama dengan "<<output<<" derajat "<<tujuan<<endl;
	
}
