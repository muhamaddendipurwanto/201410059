#include <iostream>
using namespace std;
void garis ();
int main ()
{
garis ();
cout<<"program konversi menggunakan function"<<endl;
garis (); 
cout<<"mencari total detik"<<endl;
garis ();
int j,m,d,td,sm;
	cout<< "masukan jam : ";
	cin>>j;
	cout<< "masukan menit : ";
	cin>>m;
	cout<< "masukan detik : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"total detik :"<<td<<endl;
garis();
cout<<"mencari total detik, jam, menit dan detik"<<endl;
garis();	
int td1,j1,m1,d1,sm1;
	cout<<"masukan total detik : ";
	cin>>td1;
	j1=td1/3600;
	sm1=td1%3600;
	m1=sm1/60;
	d1=sm1%60;
	cout<<j1<<":"<<m1<<":"<<d1;
	return 0;	
	
}
void garis () {
	cout<<"======================="<<endl;
}
