#include <iostream>
#include <math.h>
using namespace std;

int main()
{
float anios,in,cap,dinero;
const int div=100;

	cout<<"dime el capital";
	cin>>cap;
	cout<<"dime el interes";
	cin>>in;
	cout<<"dime los anios";
	cin>>años;
	for(int i=1;i<años;i++)
	{
		dinero= cap*(1+(in/div)*pow(anios));
	cout<<"El capital es "<<dinero<<endl;
	}
}
