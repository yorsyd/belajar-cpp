#include <iostream>

using namespace std;

int main(){
	string user, pass; //validUser = "user", validPass = "pass";
	cout<<"-- Valid User --"<<endl;
	cout<<"User  : "<</*validUser*/<<endl;
	cout<<"Pass  : "<<validPass<<endl;
	cout<<"-----------------"<<endl<<endl;
	
	cout<<"Masukan username : ";cin>>user;
	cout<<"Masukan password : ";cin>>pass;
	
	system("CLS");
	
	if(user == validUser){
		if(pass == validPass){
			cout<<"~~ Login berhasil! ~~"<<endl;
		}else {
			cout<<"~~ Password salah! ~~"<<endl;
		}
	}else{
		cout<<"~~ Username tidak terdaftar! ~~"<<endl;
	}
}
