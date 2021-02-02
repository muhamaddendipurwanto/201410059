#include <iostream>
using namespace std;
int main (){
	int pembelian,diskon,jumlahpembayaran;
	cout<<"Masukkan Jumlah Pembelanjaan : Rp. ";
	cin>>pembelian;
if (pembelian >= 100000){
		diskon = pembelian * 0.15;
		jumlahpembayaran = pembelian - diskon;
		cout<<"Jumlah yang harus dibayar dengan diskon 15% adalah : Rp. "<<jumlahpembayaran;	
	}
else if (pembelian >= 50000){
	diskon = pembelian * 0.125;
	jumlahpembayaran = pembelian - diskon;
	cout<<"Jumlah yang harus dibayar dengan diskon 12,5% adalah : Rp. "<<jumlahpembayaran;
}
else if (pembelian >= 25000){
	diskon = pembelian * 0.10;
	jumlahpembayaran = pembelian - diskon;
	cout<<"Jumlah yang harus dibayar dengan diskon 10% adalah : Rp. "<<jumlahpembayaran;
}
else if (pembelian >= 0){
	cout<<"jumlah yang harus dibayar adalah : Rp. "<<pembelian;
	}
	
else{
	cout<<"Masukan Semua Jumlah Pembayaran diatas 0 : Rp. ";
}
return 0;
}
