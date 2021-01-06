//konversi jam, menit, dan detik ke total detik 
#include <iostream>
using namespace std;
int main ()
{
	int j,m,d,td;
	cout<< "masukan jam : ";
	cin>>j;
	cout<< "masukan menit : ";
	cin>>m;
	cout<< "masukan detik : ";
	cin>>d;
		cout<<"Masukan Total Detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Hasilnya = "<<j<<":"<<m<<":"<<d;
	return 0;
}
