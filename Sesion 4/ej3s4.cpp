#include <iostream>
using namespace std;

int main()
{
const int min_mayus=65,max_mayus=90,min_minus=97,max_minus=122,var_mayus_minus=32;
char letra,letra_final;
	
	cout<<"introduzca un car�cter"<<endl;
	cin>>letra;

	
	if(min_mayus<=letra<=max_mayus)
		{
			letra_final=letra+var_mayus_minus;
			cout<<"La letra era una may�scula. Una vez convertida es "<<letra_final<<endl;
		}
	else if(min_minus<=letra<=max_minus)
		{
			letra_final=letra-var_mayus_minus;
			cout<<"La letra era una min�scula. Una vez convertida es "<<letra_final<<endl;
		}
	else
		{	
			cout<<" El car�cter no era una letra.";
		}
	return 0;
}
