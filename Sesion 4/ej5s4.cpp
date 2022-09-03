#include <iostream>
#include <math.h>
using namespace std;

int main()
{
float anios,in,cap,dinero,max_anios;
const int div=100;

	cout<<"dime el capital"<<endl;
	cin>>cap;
	cout<<"dime el interes"<<endl;
	cin>>in;
	cout<<"dime los años"<<endl;
	cin>>max_anios;

	for(anios=1;anios<=max_anios;anios++)
	{
	dinero= cap*((pow(1+(in/div),anios)));
	cout<<"El capital es "<<dinero<<endl;
	}
return 0;
}
