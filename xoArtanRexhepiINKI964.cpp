// Artan Rexhepi INKI 964 - Igra X-O
#include <iostream>
using namespace std;
const int golemina=3; // deklariranje na konstantna golemina na tablicata
void pecatiTablica(char tablica[][golemina]) // pechatenje na tablicata so 2 for ciklusi
{
	int i,j;
	for(i=0;i<golemina;i++){ cout<<"\n";
	for(j=0;j<golemina;j++)
	cout<<tablica[i][j]<<" ";}
	cout<<"\n";
}
bool pobednik(char tablica[][golemina], char igrach) // funkcija za pobednik
{
	int i,j;
	for(i=0;i<golemina;i++)
	if(tablica[i][0]==igrach && tablica[i][1]==igrach && tablica[i][2]==igrach) //ako igrachot popolnal edna od trite redici, pobeduva 
	return true;
	for(j=0;j<golemina;j++)
	if(tablica[0][j]==igrach && tablica[1][j]==igrach && tablica[2][j]==igrach) //ako igrachot popolnal edna od trite koloni, pobeduva
	return true;
	if(tablica[0][0]==igrach && tablica[1][1]==igrach && tablica[2][2]==igrach) //ako igrachot gi popolnal polinjata shto se naogjaat na prava dijagonala, pobeduva
	return true;
	if(tablica[0][2]==igrach && tablica[1][1]==igrach && tablica[2][0]==igrach) //ako igrachot gi popolnat polinjata shto se naogjaat na sporedna dijagonala, pobeduva
	return true;
	//vo sprotivno, ne pobeduva
	return false;
}
bool neresheno(char tablica[][golemina]) //metoda za slucaj koga e neresheno
{
	int i,j;
	for(i=0;i<golemina;i++)
	for(j=0;j<golemina;j++)
	if(tablica[i][j]=='-') //ako ima ushte prostor za popolnuvanje
	return false; //togas igrata se ushte ne e zavrshena
	
	return true; //vo sprotivno, dokolku ne se ispolneti uslovite za pobeda, krajniot rezultat e neresheno
}
int main() //glavna metoda
{
	char tablica[golemina][golemina]; //deklariranje na tablicata vo forma na matrica
	char igrach='X'; // deklariranje na igrach
	bool zavrshenaIgra=false; //deklariranje na zavrshena igra
	int i,j;
	for(i=0;i<golemina;i++)
	for(j=0;j<golemina;j++)
	tablica[i][j]='-';
	cout<<"X O \n";
	pecatiTablica(tablica); //povik na funkcijata za pecatenje na tablicata
	while(!zavrshenaIgra) //dodeka igrata trae
	{
		int red,kolona;
		cout<<"Igrach "<<igrach<<" da vnese red : "; //igrachot da vnese redica
		cin>>red;
		cout<<"Igrach "<<igrach<<" da vnese kolona : "; //igrachot da vnese kolona
		cin>>kolona;
		if(red<1 || red>golemina || kolona<1 || kolona>golemina || tablica[red-1][kolona-1]!='-') //ako igrachot vnesi redica ili kolona pogolema od 3 ili pomala od 1
		{ //ili dokolku igrachot vnesi vrednost kade sto poleto e popolnato, togas igrachot napravil nepravilen poteg i prodolzuva ponataka
			cout<<"Nevaliden poteg. Probaj pak.\n"; continue;
		}
		tablica[red-1][kolona-1]=igrach; //ovozmozuvanje na igrachot da pravi poteg
		pecatiTablica(tablica); //povik na funkcija za pecatenje na tablicata
		if(pobednik(tablica,igrach)){ //ako igrachot gi ispolna kriteriumite za pobeda, togas igrachot pobeduva i igrata se zavrshuva
			cout<<"Igrachot "<<igrach<<" pobede.\n";
			zavrshenaIgra=true;
		}else if(neresheno(tablica)){ //dokolku nema pobednici vo igrata, togash rezultatot e neresheno i igrata se zavrshuva
			cout<<"Neresheno."; 
			zavrshenaIgra=true;
		}
		//dokolku igrachot e X, se promenuva vo O, a dokolku e O, se promenuva vo X, na kratko kazhano, se smenuvaat igrachite
		if(igrach=='X')
		igrach='O';
		else
		igrach='X';
	} //kraj na while ciklusot
	//kraj na programata
		return 0;
}
