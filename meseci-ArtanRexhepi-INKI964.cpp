#include <iostream>
using namespace std;
//Enumeracija za mesecite
enum meseci{
	//Na prviot element se dodeluva vrednost 1, za da zapochne odbrojuvanjeto od 1, vo sprotivno kje zapochne od 0
	Januari=1, Fevruari, Mart, April, Maj, Juni, Juli, Avgust, Septemvri, Oktomvri, Noemvri, Dekemvri
};
//glavna programa
int main()
{
	//se pechatat mesecite so for ciklus koj sto se dvizi od prviot do posledniot mesec
	for(int i=Januari;i<=Dekemvri;i++)
	cout<<i<<" ";
	cout<<"\n";
	//povikuvanje na enumeracijata vo glavnata programa i dodeluvanje na vrednost na istata so eden od mesecite
	meseci m=Oktomvri;
	//switch case za da go ispecati godisnoto vreme na mesecot, kako i redniot broj vo godinata
	switch(m)
	{
		case Januari:
			case Fevruari:
				case Dekemvri :
					cout<<"Ovoj mesec e vo godisnoto vreme zima i e so reden broj "<<m;
					break;
					case Mart:
						case April:
							case Maj:
								cout<<"Ovoj mesec e vo godisnoto vreme prolet i e so reden broj "<<m;
								break;
								case Juni:
									case Juli:
										case Avgust:
											cout<<"Ovoj mesec e vo godisnoto vreme leto i e so reden broj "<<m;
											break;
											case Septemvri:
												case Oktomvri:
													case Noemvri:
														cout<<"Ovoj mesec e vo godisnoto vreme esen i e so reden broj "<<m;
														break;
														default:
															cout<<"Pogresno vnesuvanje."; break;
	}
	//kraj na programata
	return 0;
}

//artan rexhepi inki964
