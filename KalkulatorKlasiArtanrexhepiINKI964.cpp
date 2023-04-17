//Artan Rexhepi INKI964
#include <iostream>
#include <cmath>
using namespace std;
//definiranje na klasa
class Operacii {
//javni atributi
public:
	int broj1, broj2;
	float e;
	//default konstruktor
	Operacii() {
		this->broj1 = 0;
		this->broj2 = 0;
		this->e = 0;
	}
	//destruktor
	~Operacii(){}
	//funkcija za sobiranje
	void soberi(int broj1, int broj2)
	{
		cout << "Zbirot na ovie dva broja e " << (broj1 + broj2) << "\n";
	}
	//funkcija za odzemanje
	void odzemi(int broj1, int broj2)
	{
		if(broj1>broj2)
		cout << "Razlikata na ovie dva broja e " << (broj1 - broj2) << "\n";
		else
			cout << "Razlikata na ovie dva broja e " << (broj2 - broj1) << "\n";
	}
	//funkcija za mnozenje
	void pomnozi(int broj1, int broj2)
	{
		cout << "Proizvodot na ovie dva broja e " << (broj1 * broj2) << "\n";
	}
	//funkcija za delenje
	void podeli(int broj1, int broj2)
	{
		if (broj1 > broj2)
			cout << "Kolicnikot na ovie dva broja e " << (float)(broj1 / broj2) << "\n";
		else
			cout << "Kolicnikot na ovie dva broja e " << (float)(broj2 / broj1) << "\n";
	}
	//funkcija za stepenuvanje
	void stepenuvaj(int broj1, int broj2)
	{
		cout << "Stepenot na ovie dva broja e " << pow(broj1, broj2) << "\n";
	}
	//eksponencijalna funkcija
	void eksponencijalna(int broj1, int broj2, int e)
	{
		cout << "Eksponencijalnata funkcija od ovie dva broja e " << pow(e, (broj1 + broj2)) << "\n";
	}
}; //kraj na klasata
//glavna programa
int main() {
	//povik na klasata vo glavna programa
	Operacii op;
	cout << "Vnesi prv broj : ";
	cin >> op.broj1; //pristap do atribut
	cout << "\nVnesi vtor broj : ";
	cin >> op.broj2;
	op.e = 2.71828;
	cout << "Vnesenite broevi se " << op.broj1 << " i " << op.broj2 << endl;
	char o;
	cout << "Vnesi operacija koja sto sakas da ja izvrsis na ovie dva broevi : ";
	cin >> o;
	cout << endl;
	switch (o)
	{
	case '+':
		op.soberi(op.broj1,op.broj2); break;
	case '-':
		op.odzemi(op.broj1, op.broj2); break;
	case '*':
		op.pomnozi(op.broj1, op.broj2); break;
	case '/':
		op.podeli(op.broj1, op.broj2); break;
	case '^':
		op.stepenuvaj(op.broj1, op.broj2); break;
	case 'e':
		op.eksponencijalna(op.broj1, op.broj2, op.e); break;
	default:
		cout << "Vnesovte gresna operacija!";
	}
	return 0;
}