#include <iostream>
using namespace std;

int main()
{
	const char TERMINADOR = '#';
	const int max_caract = 3e6 //compile con la opción -Wl,--stack,21000000
	char v[max_caract];
	char a_borrar;
	char car;
	int util_v = 0;
	int nuevo_util_v;
	int j = 0;
	
	car = cin.get();
	while (car != TERMINADOR)
	{
		v[util_v] = car;
		car = cin.get();
		util_v++;
	}
	
	a_borrar = cin.get();
	
	for (int i = 0; i < util_v ; i++)
	{
		if(v[i] != a_borrar)
		{
			v[j] = v[i];
			j++;
		}	
		
		nuevo_util_V = j ;
		cout << "<";
		
		for(int i = 0 ; i < nuevo_util_v ; i++)
		{
			cout << v[i] ;
			cout << ">" << endl;
		}
	} 


}
