//Artan Rexhepi INKI964
#include <iostream>
#include <cstdlib>
using namespace std;
int slucaenBroj();
void proverka(int br);
//glavna programa
int main()
{
	int br=slucaenBroj();
	proverka(br);
	return 0;
}
//metoda za slucaen broj koja vraka celobrojna vrednost
int slucaenBroj()
{
	int br=1+rand()%100;
	return br;
}
//funkcija za proverka za vnesuvanje na broj se dodeka ne se vnesi ednakov na slucajniot
void proverka(int br)
{
	int broj,k=0;
	do{
		cout<<"Vnesi broj : ";
		cin>>broj;
		if(broj>br)
		cout<<"Vnesi pomal broj\n";
		else if(broj<br)
		cout<<"Vnesi pogolem broj\n";
		else
		cout<<"Ednakvi\n";
		k=k+1;
	}while(broj!=br);
	cout<<"Broj na pati dodeka vneseniot broj e ednakov na slucajniot broj : "<<k;
}
