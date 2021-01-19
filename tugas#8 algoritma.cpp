#include <iostream>
using namespace std; 
int main()
//membuat setengah piramida menggunakan sistem pengulangan//
{
	int n;
	
	cout<<"masukan tinggi piramida: ";
	cin>>n;
	
	cout<<"piramid 1\n";
	
	for (int i= 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cout<< "*" ;
		}
		cout << endl;
	}
	cin.get();
	return 0;
}
