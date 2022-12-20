#include<iostream>
using namespace std;
struct mahasiswa{
	string nama,tmpat_tnggl_lahir,prodi,fakultas;
	double nim,nip; 
};
int main(){
	mahasiswa mhs[40];char dftr;
	mahasiswa dsn[30];
	int pilih,n=0,d=0;
do{
	cout<<"Pilih Menu:\n";
	cout<<"1. Daftar mahasiswa : \n";
	cout<<"2. Tambah mahasiswa : \n";
	cout<<"3. daftar dosen     : \n";
	cout<<"4. Tambah dosen     : \n";
	cout<<"5. Keluar \n";
	cout<<"Pilih 1|2|3|4|5 = ";cin>>pilih;
	cout<<endl<<endl;
	
	if(pilih==2){
		//daftar mahasiswa
		tm:
		cin.ignore();
		cout<<"===Pendaftaran mahasiswa!!!=== \n";
		cout<<"Masukan nama anda\t: ";getline(cin,mhs[n].nama);
		cout<<"Masukan NIM anda\t: ";cin>>mhs[n].nim;
		cin.ignore();
		cout<<"Masukan TTl anda\t: ";getline(cin,mhs[n].tmpat_tnggl_lahir);
		cout<<"Masukan prodi anda\t: ";getline(cin,mhs[n].prodi);
		cout<<"Masukan fakultas anda\t: ";getline(cin,mhs[n].fakultas);
		n++;
	}else if(pilih==1){
		//Tambah mahasiswa
		if(n==0){
			cout<<"Belum ada mahasiswa, ingin mendaftar? (Y/N) = ";cin>>dftr;
			if(dftr=='Y'||dftr=='y'){
				system("cls");
				goto tm;
			}else{
				break;
			}
		}else{
			cout<<"===Daftar mahasiswa Universitas Ahmad Dahlan===\n";
			cout<<endl;
			for(int i=0;i<n;i++){
				cout<<"Mahasiswa ke-"<<i+1<<endl;
				cout<<"Nama mahasiswa\t\t\t: "<<mhs[i].nama<<endl;
				cout<<"NIM mahasiswa\t\t\t: "<<mhs[i].nim<<endl;
				cout<<"Tempat Tanggal Lahir mahasiswa\t: "<<mhs[i].tmpat_tnggl_lahir<<endl;
				cout<<"Prodi mahasiswa\t\t\t: "<<mhs[i].prodi<<endl;					
				cout<<"Fakultas mahasiswa\t\t: "<<mhs[i].fakultas<<endl;
				cout<<endl<<endl;
			}
		}
  	}else if(pilih==3){
  		//daftar dosen
  		if(d==0){
			cout<<"Belum ada dosen, ingin mendaftar? (Y/N) = ";cin>>dftr;
			if(dftr=='Y'||dftr=='y'){
				system("cls");
				goto td;
			}else{
				breaks
			}	
		}else{
			cout<<"===Daftar dosen Universitas Ahmad Dahlan===\n";
			cout<<endl;
			for(int i=0;i<d;i++){
				cout<<"Dosen ke-"<<i+1<<endl;
				cout<<"Nama dosen\t\t\t: "<<dsn[i].nama<<endl;
				cout<<"NIP dosen\t\t\t: "<<dsn[i].nip<<endl;
				cout<<"Tempat Tanggal Lahir dosen\t: "<<dsn[i].tmpat_tnggl_lahir<<endl;
				cout<<"Prodi yang di ajar dosen\t: "<<dsn[i].prodi<<endl;					
				cout<<endl<<endl;
			}
		}
	}else if(pilih==4){
		//tambah dosen
		td:
		cin.ignore();
		cout<<"===Pendaftaran dosen!!!=== \n";
		cout<<"Masukan nama anda\t: ";getline(cin,dsn[d].nama);
		cout<<"Masukan NIP anda\t: ";cin>>dsn[d].nim;
		cin.ignore();
		cout<<"Masukan TTl anda\t: ";getline(cin,dsn[d].tmpat_tnggl_lahir);
		cout<<"Masukan prodi anda\t: ";getline(cin,dsn[d].prodi);
		d++;
	}
	system("pause");
	system("cls");
  }while(pilih!=5);
}
