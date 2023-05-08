#include<iostream>
#include<algorithm>
#include<fstream>
#include<cstring>
#include<vector>
#include<stdio.h>
using namespace std;
bool pom(int a, int b)
{
	return a<b;
}
int main()
{
	//konstantni vrendosti
	char Indime[]="INKI964.Artan";
	char ImeIzveduvac[]="He said";
	char pesna[]="One day you ll leave this world behind So live a life you will remember My father told me when I was just a child ";
	int dolPes=strlen(pesna);
	int nInd=strlen(Indime);
	int index=0;
	
		//upis na podtaocte vo datoteka 
	ofstream DatArtan("964.Proect03.txt");
	
	cout<<endl<<endl;
	//algoritam za dobvanje od string vo int
	//so postapka da se odeli indeksto od celiot string
	char broj[]="0123456789";
	vector<int> vec(80);
	vector<int>::iterator iter;
	for(int i=0;i<nInd;i++)
		for(int j=0;j<10;j++)
			if(Indime[i]==broj[j])
				index=index*10+j;
	int brojKod=index;
	int najgolema=0,ce;
	//odreduvanje na najgolema cifra
	while(brojKod>0)
	{
		int ce=brojKod%10;
		brojKod=brojKod/10;
		if(ce>najgolema)
			najgolema=ce;
	}
	//dobivanje na vektor
	for(int i=0;i<dolPes;i++)
		vec.push_back(((int)pesna[i])+najgolema);
	
	//sortiranje na vektorot
	sort(vec.begin(),vec.end(),pom);
	cout<<Indime<<endl<<endl;
	cout<<ImeIzveduvac<<endl<<endl;
	cout<<pesna<<endl<<endl;
	//pecatenje na podatoci na ekran
	for(iter=vec.begin();iter<vec.end();++iter)
	{
		if((*iter)!=0)
		cout<<(*iter)<<" ";			
	}
	//Upis vo datoteka 
	DatArtan<<Indime<<endl<<endl;
	DatArtan<<ImeIzveduvac<<endl<<endl;
	DatArtan<<pesna<<endl<<endl;
	int br=0;
	DatArtan<<"\t";
	for(iter=vec.begin();iter<vec.end();++iter)
	{
		if((*iter)!=0)
			DatArtan<<(*iter)<<" ";	
		}

}
