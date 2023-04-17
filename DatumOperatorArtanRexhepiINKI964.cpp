//Artan Rexhepi INKI964
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Datum {
private:
	int godina, mesec, den;
public:
	//default konstruktor
	Datum()
	{
		this->godina = 0;
		this->mesec = 0;
		this->den = 0;
	}
	//friend funkcija e onaa funkcija koja sto moze da pristapi i do privatnite atributi na klasata
	//operator overload e karakteristika sto im ovozmozuva na operatorite da se prosiruvaat/redefiniraat nadvor od prethodno definiranata funkcionalnost
	friend void operator>>(istream& v, Datum& d); //prijatelski operator za vnes
	friend void operator<<(ostream& o, Datum& d) { //prijatelski operator za ispis
		o << "\Datum : " << d.godina << "-" << d.mesec << "-" << d.den;
	}
	//destruktor
	~Datum() {};
};
void operator>>(istream& v, Datum& d)
{
	cout << "Vnesi godina : ";
	v >> d.godina;
	do {cout << "Vnesi mesec : ";
	v >> d.mesec; } while (d.mesec > 12);
	do {cout << "Vnesi den : ";
	v >> d.den; } while (d.den > 31);
	switch (d.mesec)
	{
	case 2: {
		if ((d.godina % 100 != 0 && d.godina % 4 == 0) || (d.godina % 400 == 0))
			if (d.den > 29)
				cout << "Nevaliden datum";
			else
				if (d.den > 28)
					cout << "Nevaliden datum";
	} break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (d.den > 30)
			cout << "Nevaliden datum";
		break;
	}
}
int main()
{
	Datum d;
	cout << "Vnesi datum : \n";
	cin >> d;
	cout << d;
	return 0;
}
