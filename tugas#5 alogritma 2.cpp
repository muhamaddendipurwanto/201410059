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
	td=(j*3600)+(m*60)+d;
	cout<<"tital detik : "<<td;
	return 0;
}
