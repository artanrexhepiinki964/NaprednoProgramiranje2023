//Artan Rexhepi INKI964
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string recenica();
void proverka(string recenica);
//glavna metoda
int main()
{
	string rec=recenica();
	cout<<rec<<"\n";
	proverka(rec);
	return 0;
}
//funkcija koja ja vraka recenicata
string recenica()
{
	string rec;
	cout<<"Vnesi recenica : ";
	getline(cin,rec);
	return rec;
}
//funkcija za proverka na karakteri, mali bukvi, golemi bukvi, broevi i specijalni znaci
void proverka(string recenica)
{
	int i,karakteri=0,malibukvi=0,golemibukvi=0,brojki=0,specijalniznaci=0;
	for(i=0;i<recenica.length();i++)
	{
		karakteri++;
		if(islower(recenica[i]))
		malibukvi=malibukvi+1;
		if(isupper(recenica[i]))
		golemibukvi++;
		if(isdigit(recenica[i]))
		brojki=brojki+1;
		if(ispunct(recenica[i]))
		specijalniznaci++;
	}
	cout<<"Stringot ima "<<karakteri<<" karakteri.";
	cout<<"\nStringot ima "<<malibukvi<<" mali bukvi.";
	cout<<"\nStringot ima "<<golemibukvi<<" golemi bukvi.";
	cout<<"\nStringot ima "<<brojki<<" broevi.";
	cout<<"\nStringot ima "<<specijalniznaci<<" specijalni znaci.";
}
