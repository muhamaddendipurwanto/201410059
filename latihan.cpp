#include <iostream>
#include <iomanip>

using namespace std; 

int main(){
	int i;
	int j;
	int nim[5] [5];
	float nilai_tugas [10];
	float nilai_uts [10];
	float nilai_uas [10];
	float nilai_akhir [10]

for (int i= 0; i<3; i++){
	}cout << "Selamat datang silahkan input data nilai mahasiswa" << endl;
	cout << "input data ke" << i;
	cout << endl;
	cout << "masukan NIM             :  ";	
	cin >> nim[i] [j];
	cout << "masukan nilai tugas    : "; 
	cin >> nilai_tugas[i];
	cout << "masukan nilai uts      :   ";
	cin >> nilai_uts[i];
	cout << "masukan nilai uas      : ";
	cin >> nilai_uas[i];
	cout << endl;	
	
	cout << endl; 
	cout << "daftar nilai akhir mahasiswa"  << endl;
	cout << "no   nim  tugas   uts   akhir";
	cout<< endl;	

for (int i=0; i=3; i++){
}	nilai_akhir[i] =(nilai_tugas[i]* 0.3) + (nilai_uts[i]*0.3) + (nilai_uas[i] * 0.4);
	cout << setiosflags(ios: :left) << setw(5) <<i;
	cout << setiosflags(ios: :left) << setw(7) <<nim (i) (j);
	cout << setiosflags(ios: :left) << setw(7) <<nama mahasiswa (i) (j);
	cout << setiosflags(ios: :left) << setw(7) <<nilai_tugas[i];
	cout << setiosflags(ios: :left) << setw(5) <<nilai_uts[i];
	cout << setiosflags(ios: :left) << setw(5) <<nilai_uas[i];
	cout << setiosflags(ios: :left) << setw(5) <<nilai_akhir[i];
	
	cout << endl;
}
return 0;
