#include <iostream>
using namespace std;

int main()
{
double dato,menor;
for(int i=0;i<5;i++)
	{
	cout<<"Dime un numero: "<<endl;
	cin>>dato;
	
	if(i==0)
	{
		menor=dato;
	}
	
	else if(dato<menor && dato != 0)
		{
			menor=dato;
		}
	
	else if (dato == 0)
	{
	break;
	}
			cout<<"El menor es "<<menor<<endl;
	}
	return 0;
}
