#include <iostream>
#include <cmath>

int main()
{
using namespace std;
int num,copia,cifras=0,ult_cifra;
const int div=10;
double suma=0;
bool narcisista;

	cout<<"introduce un numero: "<<endl;
	cin>>num;
	
	copia=num;
	
	while(copia>0)
	{
		copia=copia/div;
		cifras++;
	}
	
	cout<<"El numero tiene: "<<cifras<<" cifras"<<endl;
	
	copia = num;
	
	for(int i=0;i<=cifras;i++)
	{
		ult_cifra= (copia%div);
		suma=suma+pow(ult_cifra,cifras);
		copia=copia/div;
	}
	
	if(suma==num)
	{
		cout<<"el numero es narcisista "<<endl;
	}
	else
	{
		cout<<"el numero no es narcisista"<<endl;
	}
	return 0;
}
