//Artan Rexhepi INKI964
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream Artan("ArtanDatoteka.txt");
	string txt,novTxt,txt1="";
	cout<<"Datotekata pred vnesen nov tekst :\n";
	while(getline(Artan,txt))
	{
		txt1=txt1+txt;
		cout<<txt;
	}
	Artan.close();
	ofstream Artan1("ArtanDatoteka.txt");
	cout<<"\nVnesi nov tekst koj sto ke se vmetni vo datotekata : ";
	getline(cin,novTxt);
	txt1=txt1+novTxt;
	Artan1<<"\n"<<txt1;
	Artan1.close();
	cout<<"\nPecatenje na tekstot od datotekata posle dodavanje na noviot tekst :\n";
	ifstream Artan2("ArtanDatoteka.txt");
	while(getline(Artan2,txt))
	{
		cout<<txt;
	}
	Artan2.close();
	return 0;
}
