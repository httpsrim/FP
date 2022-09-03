#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
double ini, fin, var_porc;
float porc=100;

	cout<<"dale un valor inicial"<<endl;
	cin>>ini;
	while(0<= ini)
	{
		cout<<"da un valor final";
		cin>>fin;
		var_porc=abs(porc*(fin-ini)/ini);
		cout<<var_porc<<"%"<<endl;
	}
	cout<<"error";
}
