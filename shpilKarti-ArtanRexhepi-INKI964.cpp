//Artan Rexhepi INKI964
//meshanje na shpil na karti so algoritmot za apstrakcija na podatocite (data abstraction) - reduciranje na odredeni podatoci za poednostavno pretstavuvanje
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;
//Enumeracija e podatocen tip koj se sostoi od imenuvani vrednosti kako elementi, clenovi itn., koi pretstavuvaat integralni konstanti
//Enumeracija za Karti
enum Karta{
	ACE,DVA,TRI,CETIRI,PET,SEST,SEDUM,OSUM,DEVET,DESET,Dzandar,Dama,Pop,Joker1,Joker2
};
//Enumeracija za boja
enum Boja{
	Detelinka, Srce, Baklava, List
};
//Struktura pretstavuva nacinot na grupiranje na nekolku povrzani promenlivi na edno mesto
//Struktura za karti
struct Karti{
	Karta k;
	Boja b;
	int broj_boi=4;
	int broj_tip_karta=15;
};
//Struktura za shpil
struct Shpil{
	//Vektor pretstavuva dinamicka niza so sposobnost da si ja promeni goleminata pri dodavanje/brishenje na elementi
	vector<Karti> karti; //vektor za strukturata na karti
	string c;
	int br_karti=54;
};
//funkcija za inicijalizacija na kartite pred mesanje
void inicijaliziranje(Shpil &shpil)
{
	Karti kk;
	//nadvoresen for ciklus za brojot na boi na kartite
	for(int i=0;i<kk.broj_boi;i++)
	{
		//vnatresen for ciklus za brojot na kartite
		for(int j=0;j<kk.broj_tip_karta;j++)
		{
			kk.b=Boja(i);
			kk.k=Karta(j);
			shpil.karti.push_back(kk); //push_back() se koristi za da vmetnime elementi vo krajot na nizata, vo ovoj slucaj vo vektorot za karti od strukturata Shpil
		}
	}
}
//funkcija za pecatenje na karti
void pecatiKarta(const Karti& kart) //const specificira deka vrednosta na promenlivata e konstantna
{
	cout<<"Karta = "<<kart.k<<" Boja = "<<kart.b<<"\n";
}
//funkcija za pecatenje na shpil
void pecatiShpil(const Shpil& shpil)
{
	//for ciklus za strukturata na karti koja sto se sodrzi vo vektorot Karti vo strukturata na shpil
	for(Karti kk : shpil.karti)
	{
		pecatiKarta(kk);
	}
}
//funkcija za meshanje na kartite
void meshanje(Shpil &shpil)
{
	Shpil mesanje;
	//da se izvrsuva ciklusot se dodeka nema povekje karti 
	while(!shpil.karti.empty())
	{
		size_t indeks=rand() % shpil.karti.size(); //vreme za mesanje na kartite
		mesanje.karti.push_back(shpil.karti[indeks]);
		shpil.karti.erase(shpil.karti.begin()+indeks); //brisenje so iterator
	}
	shpil=mesanje;
}
//glavna programa
int main()
{
	Shpil shpil;
	cout<<"Karti pred meshanje :\n";
	inicijaliziranje(shpil);
	pecatiShpil(shpil);
	 cout<<"Karti posle meshanje :\n";
	meshanje(shpil);
	pecatiShpil(shpil);
	return 0;
} 
