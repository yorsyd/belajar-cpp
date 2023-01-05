#include<iostream>
using namespace std;
void pembayaran(){
		int pil,saldo=100000,total,transaksi=1500;
	int indhme=280000, PPN = 280000*11/100,nominal,tiket=5000,nmr_vrtual,tagihan,idpel;
	string nohp ,jastel,va;char lnjt;
do{
	//Menu Pembayaran
	cout<<"Pilih Pembayaran : "<<endl;
	cout<<"1. Telepon/hp\n";
	cout<<"2. Telkom/indihome\n";
	cout<<"3. Tiket\n";
	cout<<"4. PDAM\n";
	cout<<"5. PLN prabayar\n";
	cout<<"6. Kembali\n";
	cin>>pil;
	switch(pil){
		case 1:{
			system("cls");
			cout<<"nomor Telepon/HP:\n";cin>>nohp;
			system("CLS");
			//mau pulsa atau paket?
			cout<<"1. pulsa \n";
			cout<<"2. Paket data \n";
			cin>>pil;
			if(pil==1){
				system("CLS");
				cout<<"Pilih nominal \n";
				cout<<"1. 15000	  5. 40000\n";
				cout<<"2. 20000	  6. 50000\n";
				cout<<"3. 25000	  7. 75000\n";
				cout<<"4. 30000	  8. 100000\n";
				cin>>pil;
				if(pil==1){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<15000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<15000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 15000 + transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==2){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<20000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<20000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 20000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==3){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<25000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<25000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 25000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==4){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<30000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<30000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 30000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==5){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<40000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<40000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 40000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==6){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<50000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<50000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 50000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==7){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<75000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<75000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 75000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==8){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Nominal          : "<<100000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<100000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 100000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}
			
			}else{
				system("CLS");
				cout<<"Pilih paket \n";
				cout<<"1. 2 GB   5. 20 GB\n";
				cout<<"2. 8 GB   6. 30 GB\n";
				cout<<"3. 10 GB  7. 50 GB\n";
				cout<<"4. 15 GB  8. 60 GB\n";
				cin>>pil;
				if(pil==1){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 2GB        : "<<10000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<10000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						cout<<"Sisa saldo anda : "<<saldo-10000+transaksi<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==2){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 8GB        : "<<25000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<25000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 25000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==3){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 10GB       : "<<30000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<30000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 30000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==4){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 15GB       : "<<40000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<40000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 40000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==5){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 20GB       : "<<55000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<55000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 55000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==6){
					system("cls");  
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 30GB       : "<<65000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<65000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 65000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==7){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 50GB       : "<<100000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<100000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 100000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
						system("pause");
						system("cls");
					}else if(lnjt=='n'){
						continue;
					}
				}else if(pil==8){
					system("cls");
					cout<<"Nomor            : "<<nohp<<endl;
					cout<<"Paket 60GB       : "<<120000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<120000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						cout<<"===pembayaran berhasil==="<<endl;
						total = 120000+transaksi;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
						system("pause");
						system("cls");
					}else if(lnjt=='n'){
						continue;
					}
				}
			}
		break;
		}
		case 2:{
			cout<<"Masukan nomor jastel : ";
			cin>>jastel;
			system("cls");
			cout<<"Nomor tagihan       : "<<jastel<<endl;
			cout<<"Tagihan anda        : "<<indhme<<endl;
			cout<<"PPN 11%             : "<<PPN<<endl;
			cout<<"Total tagihan anda  : "<<indhme+PPN<<endl;
			cout<<"Lanjut?(y/n)";
			cin>>lnjt;
			if(lnjt == 'y'||lnjt == 'Y'){
				if(saldo<310800){
					system("cls");
					cout<<"Saldo anda kurang!"<<endl;
				}else{
					cout<<"Pembayaran berhasil!"<<endl;
					total = indhme+PPN;
					saldo -= total;
					cout<<"Sisa saldo anda : "<<saldo<<endl;
				}
			}else if(lnjt=='n'||lnjt=='N'){
				system("cls");
				continue;
			}
			break;
		}
		case 3:{
			system("cls");
			cout<<"Pilih penyedia jasa : "<<endl;
			cout<<"1. Lion Air \n2. Garuda Indonesia \n3. Citilink Ticket\n4. Air Asia\n";
			cin>>pil;
			if(pil==1){
				system("cls");
				cout<<"Masukan No. VA : ";cin>>va;
				cout<<"Nominal "<<endl;
				cin>>nominal;
				system("cls");
				cout<<"Nomor tagihan       : "<<va<<endl;
				cout<<"Harga tiket anda    : "<<nominal<<endl;
				cout<<"Biaya transaksi     : "<<tiket<<endl;
				cout<<"Total tagihan anda  : "<<nominal+tiket<<endl;
				cout<<"Maskapai            : Lion Air"<<endl;
				cout<<"Lanjut? (y/n)";cin>>lnjt;			
				if(lnjt == 'y'||lnjt == 'Y'){
					if(saldo<nominal){
						system("cls");
						cout<<"Saldo anda kurang!"<<endl;
					}else{
						cout<<"Pembayaran berhasil!"<<endl;
						total = nominal+tiket;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}
				}else if(lnjt=='n'||lnjt=='N'){
					system("cls");
					continue;
				}
			}else if(pil==2){
				system("cls");
				cout<<"Masukan No. VA : ";cin>>va;
				cout<<"Nominal "<<endl;
				cin>>nominal;
				system("cls");
				cout<<"Nomor tagihan       : "<<va<<endl;
				cout<<"Harga tiket anda    : "<<nominal<<endl;
				cout<<"Biaya transaksi     : "<<tiket<<endl;
				cout<<"Total tagihan anda  : "<<nominal+tiket<<endl;
				cout<<"Maskapai            : Garuda Indonesia"<<endl;
				cout<<"Lanjut? (y/n)";cin>>lnjt;			
				if(lnjt == 'y'||lnjt == 'Y'){
					if(saldo<nominal){
						system("cls");
						cout<<"Saldo anda kurang!"<<endl;
						cout<<"Ketik N untuk keluar \n";cin>>lnjt;
						if(lnjt == 'N'||lnjt == 'n'){
						
						}else{
							system("cls");
							continue;
						}
					}else{
						cout<<"Pembayaran berhasil!"<<endl;
						total = nominal+tiket;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}
					system("pause");
					system("cls");
				}else if(lnjt=='n'||lnjt=='N'){
					system("cls");
					continue;
				}
			}else if(pil==3){
				system("cls");
				cout<<"Masukan No. VA : ";cin>>va;
				cout<<"Nominal "<<endl;
				cin>>nominal;
				system("cls");
				cout<<"Nomor tagihan       : "<<va<<endl;
				cout<<"Harga tiket anda    : "<<nominal<<endl;
				cout<<"Biaya transaksi     : "<<tiket<<endl;
				cout<<"Total tagihan anda  : "<<nominal+tiket<<endl;
				cout<<"Maskapai            : Citilink"<<endl;
				cout<<"Lanjut? (y/n)";cin>>lnjt;			
				if(lnjt == 'y'||lnjt == 'Y'){
					if(saldo<nominal){
						system("cls");
						cout<<"Saldo anda kurang!"<<endl;
					}else{
						cout<<"Pembayaran berhasil!"<<endl;
						total = nominal+tiket;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}
					system("pause");
					system("cls");
				}else if(lnjt=='n'||lnjt=='N'){
					system("cls");
					continue;
				}
			}else if (pil==4){
				system("cls");
				cout<<"Masukan No. VA : ";cin>>va;
				cout<<"Nominal "<<endl;
				cin>>nominal;
				system("cls");
				cout<<"Nomor tagihan       : "<<va<<endl;
				cout<<"Harga tiket anda    : "<<nominal<<endl;
				cout<<"Biaya transaksi     : "<<tiket<<endl;
				cout<<"Total tagihan anda  : "<<nominal+tiket<<endl;
				cout<<"Maskapai            : Air Asia"<<endl;
				cout<<"Lanjut? (y/n)";cin>>lnjt;			
				if(lnjt == 'y'||lnjt == 'Y'){
					if(saldo<nominal){
						system("cls");
						cout<<"Saldo anda kurang!"<<endl;
						cout<<"Ketik N untuk kembali \n";cin>>lnjt;
						cout<<"Pembayaran berhasil!"<<endl;
						total = nominal+tiket;
						saldo -= total;
						cout<<"Sisa saldo anda : "<<saldo<<endl;
					}
					system("pause");
					system("cls");
				}else if(lnjt=='n'||lnjt=='N'){
					system("cls");
					continue;
				}
			}
			break;
		}
		case 4:{
			system("cls");
			cout<<"Pembayaran air bersih  \n";
			cout<<"Nomor Virtual      :  ";cin>>nmr_vrtual;
			cout<<"Tagihan anda       :  ";cin>>tagihan;
			system("cls");
			cout<<"Nomor virtual      : "<<nmr_vrtual<<endl;
			cout<<"Tagihan            : "<<tagihan<<endl;
			cout<<"Biaya Transaksi    : "<<transaksi<<endl;
			cout<<"Total tagihan anda : "<<tagihan + transaksi<<endl;
			cout<<"Lanjut? (y/n)";cin>>lnjt;
			if(lnjt=='y'||lnjt=='Y'){
				if(saldo<tagihan){
					system("cls");
					cout<<"Saldo anda kurang !!!"<<endl;
				}else{
					system("cls");
					cout<<"Pembayaran berhasil!"<<endl;
					total = tagihan+transaksi;
					saldo -= total;
					cout<<"Sisa saldo anda : "<<saldo<<endl;
				}
			}else if(lnjt=='n'||lnjt=='N'){
				system("cls");
				continue;
				}
			break;
		}
		case 5:{
			cout<<"IDPEL/No Meter : ";cin>>idpel;
			system("CLS");
				cout<<"Pilih nominal \n";
				cout<<"1. 20000 	 5. 500000\n";
				cout<<"2. 50000 	 6. 1 juta\n";
				cout<<"3. 100000	 7. 5 juta\n";
				cout<<"4. 200000	 8. 10 juta\n";
				cin>>pil;
				if(pil==1){
					system("cls");
					cout<<"Nomor   : "<<idpel<<endl;
					cout<<"Nominal : "<<20000<<endl;
					cout<<"Biaya transaksi : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<20000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<20000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 20000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==2){
					system("cls");
					cout<<"Nomor            : "<<idpel<<endl;
					cout<<"Nominal          : "<<50000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<50000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<50000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 50000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==3){
					system("cls");
					cout<<"Nomor            : "<<idpel<<endl;
					cout<<"Nominal          : "<<100000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<100000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<100000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 100000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==4){
					system("cls");
					cout<<"Nomor            : "<<idpel<<endl;
					cout<<"Nominal          : "<<200000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<10000000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<200000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 200000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==5){
					system("cls");
					cout<<"Nomor            : "<<idpel<<endl;
					cout<<"Nominal          : "<<500000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<500000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<500000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 500000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==6){
					system("cls");
					cout<<"Nomor            : "<<idpel<<endl;
					cout<<"Nominal          : "<<1000000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<1000000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<1000000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 1000000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==7){
					system("cls");
					cout<<"Nomor            : "<<idpel<<endl;
					cout<<"Nominal          : "<<5000000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<5000000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<5000000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 5000000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}else if(pil==8){
					system("cls");
					cout<<"Nomor            : "<<idpel<<endl;
					cout<<"Nominal          : "<<10000000<<endl;
					cout<<"Biaya transaksi  : "<<transaksi<<endl;
					cout<<"Total pembayaran : "<<10000000+transaksi<<endl;
					cout<<"Lanjut? (y/n)"<<endl;
					cin>>lnjt;
					if(lnjt == 'y'||lnjt == 'Y'){
						if(saldo<10000000){
							system("cls");
							cout<<"Saldo anda kurang !!!"<<endl;
						}else{
							cout<<"===pembayaran berhasil==="<<endl;
							total = 10000000+transaksi;
							saldo -= total;
							cout<<"Sisa saldo anda : "<<saldo<<endl;
						}
					}else if(lnjt=='n'){
						system("cls");
						continue;
					}
				}
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