//membuat program billing (warnet dan telepon)
#include<iostream>
using namespace std;
int main()
{
	cout<< "program billing warnet dan telepon" << endl ; 
	
	int td1,j1,m1,d1,sm1;
	cout<< "masukan jam pertama : ";
	cin>>j1;
	cout<<"masukan menit pertama : ";
	cin>>m1;
	cout<<"masukan detik pertama : ";
	cin>>d1;
	 
	int td2,j2,m2,d2,sm2;
	cout<< "masukan jam terakhir : ";
	cin>>j1;
	cout<< "masukan menit terakhir :";
	cin>>m2;
	cout<<"masukan detik terakhir : ";
	cin>>d2;
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;
	
	int td3,j3,m3,d3,sm3;
	td3=td1-td2;
	j3=td3/3600;
	sm3=td3%3600;
	m3=sm3/60;
	d3=sm3%60;
	cout<<"hasil waktu yang digunakan : >>"<<j3<<":"<<m3<<":"<<d3;
	
	return 0;
}
