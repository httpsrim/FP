#include <iostream>
using namespace std;

int main()
{
	const int termin = 0;							//valor minimo que puede tener
	const int max_caract = 100;						//el numero maximo de caracteres
	int TERMIN;										//terminador
	long util_v = 0;							
	long v[util_v];									//el vector v, donde entran todos los valores
	long topk [max_caract];							//el vector donde se guardan los valores mayores a k
	int num = 0;

	//inicializacion del terminador
	cout << "Introduzca un TERMINADOR" << endl;
	cin >> TERMIN;
	
	//inicializacion vector v
	cout << "Introduzca una una serie de numeros, acaba con el terminal " << TERMIN << " y con un numero negativo" << endl;
	cin >> num;
	
	while (num > termin&& util_v < max_caract) 	//acaba cuando se introduce un numero negativo(?
	{
		v[util_v] = num;
		util_v++;
		cin >> num;
	}
	
	//calcula el/los numeros mayores a k
	
	for(int i = 0 ; i < util_v ; i++)
	{
		for(int j = 0 ; j <= util_v ; j++)
		if(v[i] > TERMIN)
		{
			topk[j] = v[i];
		}
	
		cout << topk[i] << " ";
	}
}

