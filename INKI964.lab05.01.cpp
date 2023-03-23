//Artan Rexhepi INKI964
#include <iostream>
#include <cstring>
using namespace std;
string promenaNaIme(string ime, int n);
string promenaNaPrezime(string prezime, int m);
int main()
{
	string ime,prezime;
	ime="Artan";
	prezime="Rexhepi";
	int n=ime.length();
	int m=prezime.length();
	cout<<ime<<" "<<prezime<<"\n"<<promenaNaIme(ime,n)<<" "<<promenaNaPrezime(prezime,m);
	return 0;
}
string promenaNaIme(string ime, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		ime[i]='$';
		if(i==1)
		ime[i]='!';
		if(i==2)
		ime[i]='@';
		if(i==3)
		ime[i]='#';
	}
	return ime;
}
string promenaNaPrezime(string prezime, int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		if(i==0)
		prezime[i]='(';
		if(i==1)
		prezime[i]='*';
		if(i==2)
		prezime[i]='&';
		if(i==3)
		prezime[i]=')';
	}
	return prezime;
}
