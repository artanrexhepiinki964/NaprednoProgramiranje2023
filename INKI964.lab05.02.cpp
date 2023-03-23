//Artan Rexhepi INKI964
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[]="Halo - Beyonce";
	int n=strlen(s);
	char *poc=s;
	cout<<"Cela pesna : "<<poc<<endl<<"Pocetna pozicija na pokazuvacot : "<<*poc<<"\nAdresa na pocetok : "<<&poc;
	int i,k=1;
	for(i=0;i<n;i++)
	{
		k=k+1;
		if(s[i]=='-')
		break;
	}
	poc+=k;
	cout<<"\nPomestuvanje do ime na izveduvach\nSodrzina po premesten pochetok : "<<poc<<"\nAdresa od koja pocnuva segashnata sodrzina "<<(&poc+k);
	return 0;
}
