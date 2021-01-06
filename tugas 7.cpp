#include <iostream>
using namespace std;

int total detik (int j, int m, int d);
int waktu (int total detik);
void tampil (int j,m,total detik)

 
int main(){
	cout<<"program konversi dengan function";
	
	int total detik,waktu,a,b,c,d;
	total detik = total detik(a,b,c);
	tampil (total detik);
	waktu=waktu (d);
	
	return 0;
}
//function mencari total detik 
int total detik (int j, int m, int d){
	int total detik; 
	cout<<"konversi waktu ke total detik>>"<<endl;
	cout<<"masukan waktu"<<endl;
	cout<< "masukan jam : ";
	cin>>j;
	cout<< "masukan menit : ";
	cin>>m;
	cout<< "masukan detik : ";
	cin>>d;
	cout<<"hasilnya = ";
	td=(j*3600)+(m*60)+d;
	
	return 0;
}
//function konversi total detik ke jam, menit, dan detik>>"<<endl;
int waktu (int total detik){
	int td,j,m,d,sm;
	// konversi total detik ke jam, menit, dan detik>>"<<endl;
	cout<<"masukan total detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<j<<":"<<m<<":"<<d;
	return 0;
	
}

void tampil (int j, m, total detik){
	cout<<j, m, total detik;
}
	









