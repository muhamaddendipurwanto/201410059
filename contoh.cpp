#include<iostream>
int main()
{
	const int biaya = 100;
	typedef struct {
		int j;
		int m;
		int d;
	}Jam;
	Jam waktu;
	int totalbiaya,satuanpulsa,lamapercakapan,sisapercakapan;
	std::cout<<"Lama Bicara (dalam detik) ";
	std::cin>>lamapercakapan;
	satuanpulsa=lamapercakapan/5;
	totalbiaya = satuanpulsa*biaya;
	waktu.j=lamapercakapan/3600;
	sisapercakapan=lamapercakapan%3600;
	waktu.m=sisapercakapan/60;
	waktu.d=sisapercakapan%60;
	std::cout<<"Total Biaya Rp. "<<totalbiaya<<std::endl;
	std::cout<<"Lama Bicara "<<waktu.j<<" Jam "<<waktu.m<<" Menit "<<waktu.d<<" Detik"<<std::endl;
}

