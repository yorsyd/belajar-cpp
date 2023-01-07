#include<iostream>
using namespace std;

int pulsa,total,saldo=10000000,paket,transaksi=1500,pil,pln,indhme=280000, PPN = 280000*11/100,nominal = 125000,tiket=5000,tagihan = 100000;
char no_id[20], lnjt;

void konfir_pulsa(),konfir_paket(),konfir_pln(), pembayaran();

void kurang(){
	system("cls");
	cout<<"Saldo anda kurang!"<<endl;
}
void berhasil(){
	system("cls");
	cout<<"===pembayaran berhasil==="<<endl;
	cout<<"Sisa saldo anda : "<< saldo <<endl;
}
void menu_paket(){
	system("cls");
	cout<<"Pilih paket \n";
	cout<<"1. 2 GB    5. 20 GB\n";
	cout<<"2. 8 GB    6. 30 GB\n";
	cout<<"3. 10 GB   7. 50 GB\n";
	cout<<"4. 15 GB   8. 60 GB\n";
	cin>>pil;
	if(pil==1){
		paket=10000;
		konfir_paket();
	}else if(pil==2){
		paket=25000;
		konfir_paket();
	}else if(pil==3){
		paket=30000;
		konfir_paket();
	}else if(pil==4){
		paket=40000;
		konfir_paket();
	}else if(pil==5){
		paket=55000;
		konfir_paket();
	}else if(pil==6){
		paket=65000;
		konfir_paket();
	}else if(pil==7){
		paket=100000;
		konfir_paket();
	}else if(pil==8){
		paket=120000;
		konfir_paket();
	}
}
void menu_pulsa(){
	system("cls");
	cout<<"Pilih nominal \n";
	cout<<"1. 15000	  5. 40000\n";
	cout<<"2. 20000	  6. 50000\n";
	cout<<"3. 25000	  7. 75000\n";
	cout<<"4. 30000	  8. 100000\n";
	cout<<"Pilih nominal : ";
	cin>>pil;
	if(pil==1){
		pulsa = 15000;
		konfir_pulsa();
	}else if(pil==2){
		pulsa = 20000;
		konfir_pulsa();
	}else if(pil==3){
		system("cls");
		pulsa = 25000;
		konfir_pulsa();
	}else if(pil==4){
		system("cls");
		pulsa = 30000;
		konfir_pulsa();
	}else if(pil==5){
		system("cls");
		pulsa = 40000;
		konfir_pulsa();
	}else if(pil==6){
		system("cls");
		pulsa = 50000;
		konfir_pulsa();
	}else if(pil==7){
		system("cls");
		pulsa = 75000;
		konfir_pulsa();
	}else if(pil==8){
		system("cls");
		pulsa = 100000;
		konfir_pulsa();
	}
	
}
void menu_PLN(){
	cout<<"Masukan ID Pelanggan/No Meter : "; cin >> no_id;
	system("CLS");
	
	cout<<"Pilih nominal \n";
	cout<<"1. 20000 	 5. 500000\n";
	cout<<"2. 50000 	 6. 1 juta\n";
	cout<<"3. 100000	 7. 5 juta\n";
	cout<<"4. 200000	 8. 10 juta\n";
	cin>>pil;
	if(pil==1){
		pln = 20000;
		konfir_pln();
	}else if(pil==2){
		pln = 50000;
		konfir_pln();
	}else if(pil==3){
		pln = 100000;
		konfir_pln();
	}else if(pil==4){
		pln = 200000;
		konfir_pln();
	}else if(pil==5){
		pln = 500000;
		konfir_pln();
	}else if(pil==6){
		pln = 1000000;
		konfir_pln();
	}else if(pil==7){
		pln = 5000000;
		konfir_pln();
	}else if(pil==8){
		pln = 10000000;
		konfir_pln();
	}

}
void konfir_pulsa(){
	system("cls");
	total = pulsa + transaksi;
	saldo -= total;
	cout<<"Nomor            : "<< no_id <<endl;
	cout<<"Nominal          : "<< pulsa <<endl;
	cout<<"Biaya transaksi  : "<< transaksi <<endl;
	cout<<"Total pembayaran : "<< total <<endl;
	cout<<"Lanjutkan Transaksi? (y/n): ";
	cin>>lnjt;
	if(lnjt == 'y'||lnjt == 'Y'){
		if(saldo<total){
			kurang();
		} else{
			berhasil();
		}
	}else if(lnjt=='n'){
		system("cls");
		menu_pulsa();
	}
}
void konfir_paket(){
	system("cls");
	total = paket+transaksi;
	saldo -= total;
	cout<<"Nomor            : "<<no_id<<endl;
	cout<<"Paket 2GB        : "<<paket<<endl;
	cout<<"Biaya transaksi  : "<<transaksi<<endl;
	cout<<"Total pembayaran : "<<total<<endl;
	cout<<"Lanjut Transaksi? (y/n)"<<endl;
	cin>>lnjt;
	if(lnjt == 'y'||lnjt == 'Y'){
		if (saldo < total){
			kurang();
		} else{
			berhasil();
		}
	}else if(lnjt=='n'){
		system("cls");
		menu_paket();
	}
}
void konfir_internet(){
	cout<<"Masukan nomor jastel : ";
	cin >> no_id;
	
	system("cls");
	total = indhme+PPN;
	saldo -= total;
	cout<<"Nomor tagihan       : "<<no_id<<endl;
	cout<<"Tagihan anda        : "<<indhme<<endl;
	cout<<"PPN 11%             : "<<PPN<<endl;
	cout<<"Total tagihan anda  : "<<indhme+PPN<<endl;
	cout<<"Lanjut Transaksi?(y/n)";
	cin>>lnjt;
	if(lnjt == 'y'||lnjt == 'Y'){
		if(saldo<indhme+PPN){
			kurang();
		} else{
			berhasil();
		}
	} else if(lnjt=='n'||lnjt=='N'){
		system("cls");
		pembayaran();
	}
}
void konfir_tiket(){
	system("cls");
	cout<<"Masukan No. VA : "; cin >> no_id;
	
	system("cls");
	total = nominal + tiket;
	saldo -= total;
	cout<<"Nomor tagihan       : "<<no_id<<endl;
	cout<<"Harga tiket anda    : "<<nominal<<endl;
	cout<<"Biaya transaksi     : "<<tiket<<endl;
	cout<<"Total tagihan anda  : "<< total <<endl;
	cout<<"Lanjut Transaksi? (y/n)";cin>>lnjt;			
	if(lnjt == 'y'||lnjt == 'Y'){
		if(saldo<nominal){
			kurang();
		}else{
			berhasil();
		}
	}else if(lnjt=='n'||lnjt=='N'){
		system("cls");
		pembayaran();
	}
}
void konfir_PDAM(){
	system("cls");
	cout<<"Pembayaran air bersih  \n";
	cout<<"Nomor Virtual      :  "; cin>>no_id;
	
	system("cls");
	total = tagihan+transaksi;
	saldo -= total;
	cout<<"Nomor virtual      : "<<no_id<<endl;
	cout<<"Tagihan            : "<<tagihan<<endl;
	cout<<"Biaya Transaksi    : "<<transaksi<<endl;
	cout<<"Total tagihan anda : "<<total<<endl;
	cout<<"Lanjut Transaksi? (y/n)";cin>>lnjt;
	if(lnjt=='y'||lnjt=='Y'){
		if(saldo<tagihan){
			kurang();
		}else{
			berhasil();
		}
	}else if(lnjt=='n'||lnjt=='N'){
		system("cls");
		pembayaran();
		}
}
void konfir_pln(){
	
	system("cls");
	total = pln+transaksi;
	saldo -= total;
	cout<<"Nomor   : "<<no_id<<endl;
	cout<<"Nominal : "<<pln<<endl;
	cout<<"Biaya transaksi : "<<transaksi<<endl;
	cout<<"Total pembayaran : "<< total <<endl;
	cout<<"Lanjut Transaksi? (y/n)"<<endl;
	cin>>lnjt;
	if(lnjt == 'y'||lnjt == 'Y'){
		if(saldo<pln){
			kurang();
		}else{
			berhasil();
		}
	}else if(lnjt=='n'){
		system("cls");
		menu_PLN();
	}
}
void pembayaran(){
	
do{
	//Menu Pembayaran
	cout<<"Pilih Pembayaran : "<<endl;
	cout<<"1. Telepon/hp\n";
	cout<<"2. Internet Berlangganan\n";
	cout<<"3. Tiket\n";
	cout<<"4. PDAM\n";
	cout<<"5. PLN prabayar\n";
	cout<<"6. Kembali\n";
	cin>>pil;
	switch(pil){
		case 1:{
			system("cls");
			cout<<"nomor Telepon/HP:\n"; cin >> no_id;
			system("CLS");
			//mau pulsa atau paket?
			cout<<"1. pulsa \n";
			cout<<"2. Paket data \n";
			cin>>pil;
			if(pil==1){
				menu_pulsa();
			}else{
				menu_paket();
			}
		break;
		}
		case 2:{
			konfir_internet();
			break;
		}
		case 3:{
			konfir_tiket();
			break;
		}
		case 4:{
			konfir_PDAM();
			break;
		}
		case 5:{
			menu_PLN();
			break;
		}
		default:{
			cout<<"Saldo :"<<saldo<<endl;
			break;
		}
	}
	system("pause");
	system("cls");
}while(pil!=6);
}

int main(){
	pembayaran();
}
