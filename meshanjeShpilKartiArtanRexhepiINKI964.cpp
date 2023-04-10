//Artan Rexhepi INKI964
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iostream>
using namespace std;

enum class Boja { Baklava, Detelinka, Srce, List }; //dodeluvanje na enumeraciska klasa za boite
enum class Karta { Eden, Dva, Tri, Cetiri, Pet, Shest, Sedum, Osum, Devet, Deset, Dzandar, Dama, Pop, Joker }; //dodeluvanje na ednumeraciska klasa za Karta
//funkcija za konvertiranje na kartite od enumeracija vo string
string kartaVoString(Karta k)
{
    switch (k)
    {
        case Karta::Eden: return "A";
        case Karta::Dva: return "2";
        case Karta::Tri: return "3";
        case Karta::Cetiri: return "4";
        case Karta::Pet: return "5";
        case Karta::Shest: return "6";
        case Karta::Sedum: return "7";
        case Karta::Osum: return "8";
        case Karta::Devet: return "9";
        case Karta::Deset: return "10";
        case Karta::Dzandar: return "Dzandar";
        case Karta::Dama: return "Dama";
        case Karta::Pop: return "Pop";
        case Karta::Joker: return "Joker";
    }
}
//Klasa za karti (Klasa pretstavuva mnozestvo od objekti koi delat isti karakteristiki, odnesuvanja i relacii)
class Karti
{
	//javni atributi
    public:
    	//dinamicen (parametriziran) konstruktor za kartite
        Karti(Boja boja, Karta karta)
            : m_boja(boja), m_karta(karta)
        {
        }
        //toString() funkcija koja vrakja string od kartite
        string toString() const
        {
            return kartaVoString(m_karta) + " - " + bojaVoString(m_boja);
        }
        //geteri - funkcii koi vrakaat vrednost koi sluzat za pristap do privatni atributi
        Boja getBoja() const { return m_boja; }
        Karta getKarta() const { return m_karta; }
        //privatni atributi
    private:
        Boja m_boja;
        Karta m_karta;
        //funkcija koja vrakja string od enumeracijata na boite
        string bojaVoString(Boja boja) const
        {
            switch (boja)
            {
                case Boja::Baklava: return "Baklava";
                case Boja::Detelinka: return "Detelinka";
                case Boja::Srce: return "Srce";
                case Boja::List: return "List";
            }
        }
};
//klasa Shpil
class Shpil
{
	//javni atributi
    public:
    	//default (prazen) konstruktor (Konstruktor e klasna funkcija koja sto go ima istoto ime na klasata i sluzi za inicijaliziranje na objekti)
        Shpil()
        {
        	//madvoreshen for ciklus koj se dvizi po boite na kartite
            for (int boja = static_cast<int>(Boja::Baklava); boja <= static_cast<int>(Boja::List); boja++)
            {
            	//vnatreshen for ciklus koj se dvizi po kartite
                for (int karta = static_cast<int>(Karta::Eden); karta <= static_cast<int>(Karta::Pop); karta++)
                {
                	//dodavanje na elementite od klasata Karti vo vektor
                    m_karti.push_back(Karti(static_cast<Boja>(boja), static_cast<Karta>(karta)));
                }
            }
            //deklariranje od kade da pochni i od kade da zavrshi shpilot na karti
            m_karti.push_back(Karti(Boja::Baklava, Karta::Eden));
            m_karti.push_back(Karti(Boja::List, Karta::Eden));
            //dodavanje na dvata jokeri
            m_karti.push_back(Karti(Boja::Baklava, Karta::Joker));
            m_karti.push_back(Karti(Boja::List, Karta::Joker));
        }
        //funkcija za pechatenje
        void pechati() const
        {
            for (const auto& kk : m_karti)
            {
                cout << kk.toString() <<"\n";
            }
        }
        //funkcija za meshanje na shpil
        void meshanjeShpil()
        {
        	//generiranje na random broj spored momentalnoto vreme
            srand(time(nullptr));
            //meshanje na kartite so funkcijata random_shuffle - funkcija nameneta za meshanje na elementite, so pomos na iterato
            random_shuffle(m_karti.begin(), m_karti.end());
        }
        //funkcija za delenje na karti na 4 igraci
        void delenjeNaKarti()
{
    // kreiranje na 4 vektora za 4 igraci
    vector<Karti> igrach1, igrach2, igrach3, igrach4;

    // broj na karti koja treba da se dodeli
    int brojKarti = 0;

    // vrti dodeka ima karti
    while (!m_karti.empty())
    {
        // dodeluvanje na karta na igrach1
        if (brojKarti % 4 == 0)
        {
            igrach1.push_back(m_karti.back());
        }
        // dodeluvanje na karta na igrach2
        else if (brojKarti % 4 == 1)
        {
            igrach2.push_back(m_karti.back());
        }
        // dodeluvanje na karta na igrach3
        else if (brojKarti % 4 == 2)
        {
            igrach3.push_back(m_karti.back());
        }
        // dodeluvanje na karta na igrach4
        else if (brojKarti % 4 == 3)
        {
            igrach4.push_back(m_karti.back());
        }

        // brisenje na dodelenata karta
        m_karti.pop_back();

        // zgolemuvanje na brojot na karti
        brojKarti++;
    }

    // ispisuvanje na kartite dodeleni na 4-te igraci
    cout << "Igrach 1:\n";
    for (const auto& kk : igrach1)
    {
        cout << kk.toString() << "\n";
    }
    cout << "\nIgrach 2:\n";
    for (const auto& kk : igrach2)
    {
        cout << kk.toString() << "\n";
    }
    cout << "\nIgrach 3:\n";
    for (const auto& kk : igrach3)
    {
        cout << kk.toString() << "\n";
    }
    cout << "\nIgrach 4:\n";
    for (const auto& kk : igrach4)
    {
        cout << kk.toString() << "\n";
    }
}


    private:
        vector<Karti> m_karti;
};

int main()
{
    Shpil shpil;
    cout << "Podredeniot shpil na karti e :\n";
    shpil.pechati();
    cout <<"\n";

    cout <<"Izmeshaniot shpil na karti e :\n";
    shpil.meshanjeShpil();
    shpil.pechati();
    cout <<"\nDodeleni karti na 4 igraci :\n";
    shpil.delenjeNaKarti();
    return 0;
}
