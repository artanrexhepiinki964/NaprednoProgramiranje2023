//Artan Rexhepi INKI964
#include <iostream>
using namespace std;
//klasa za figura
class Figura {
protected:
	float visina, sirina;
public:
	void setDimenzija(float w, float h)
	{
		cout << "Sirinata na figurata iznesuva " << w << ", dodeka visinata iznesuva " << h << endl;
		sirina = w;
		visina = h;
	}
};
//klasa za pravoagolnik koja sto gi nasleduva vrednostite od klasata figura
class Pravoagolnik : public Figura {
public:
	float plostina()
	{
		return (visina * sirina);
	}
};
//klasa za triagolnik koja sto gi nasleduva vrednostite od klasata figura
class Triagolnik : public Figura {
private :
	float hipotenuza;
public:
	float plostina() {
		return (visina * sirina / 2);
	}
	float getHipotenuza()
	{
		this->hipotenuza = visina + sirina; //pod pretpostavka deka se vo cm2, na ovoj nacin se opredeluva hipotenuzata
		return this->hipotenuza;
	}
};
//glavna programa
int main() {
	Pravoagolnik p; //povikuvanje na klasata za pravoagolnik
	Triagolnik t; //povikuvanje na klasata za triagolnik
	p.setDimenzija(96, 4);
	t.setDimenzija(9, 64);
	cout << "Plostinata na pravoagolnik iznesuva " << p.plostina() << "\nPlostinata na triagolnik iznesuva " << t.plostina() << ", dodeka hipotenuzata iznesuva " << t.getHipotenuza();
	return 0;
}