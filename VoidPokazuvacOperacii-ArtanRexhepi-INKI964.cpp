//Artan Rexhepi INKI964
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int soberi(int a, int b)
{
	return a+b;
}
int odzemi(int a, int b)
{
	if(a>b)
	return a-b;
	else
	return b-a;
}
float delenje(int a, int b)
{
	if(a>b)
	return a/b;
	else
	return b/a;
}
double stepenuvanje(int a, int b)
{
	return pow(a,b);
}
int main()
{
	string ime="Artan",prezime="Rexhepi";
	int b1=(int)ime[0];
	int b2=(int)prezime[0];
	void* a=&b1;
	void* b=&b2;
	cout<<"Operacii na broevite "<<*(int *)a<<" i "<<*(int *)b<<" :\n";
	cout<<"Sobiranje : "<<soberi(*(int *)a,*(int *)b)<<"\n";
	cout<<"Odzemanje : "<<odzemi(*(int *)a,*(int *)b)<<"\n";
	cout<<"Delenje : "<<delenje(*(int *)a,*(int *)b)<<"\n";
	cout<<"Stepenuvanje : "<<stepenuvanje(*(int *)a,*(int *)b)<<"\n";
	return 0;
}
