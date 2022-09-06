#include <iostream>
using namespace std;

//funcion para leer el rango de numeros ( min y maximo)
int LeeRango(double max, double min)				
{
		
	cout << "Introduzca un numero de minimo " << endl;
	cin >> min;
	return min;
	do{
	cout << "Introduzca un numero de maximo " << endl;
	cin >> max ;
	}while ( max < min);
	return max;
}

//funcion para leer el valor de un numero, llamado a 
int LeeValor(double a)
{
	cout << "introduzca un numero " << endl;
	cin >> a;
	return a;
}
int main()
{	
	double max,min;							//max y minimo para las funciones
	double minim,maxim;						//maximo y minimo para el int main, sirve para pasar los valores min y maximo de las funciones anteriores
	double numer;							//el numero, a, pero pasado a esta funcion
	double a;								//el numero, para las funciones
	min = LeeRango(min,max);				//funcion del rango, aqui entra el minimo
	max = LeeRango(min,max);				//funcion del rango, aqui entra el maximo
	numer = LeeValor(a);					//funcion del valor, aquí entra el numero
	
	
	//bucle para ver si el numero está dentro del intervalo o no
	if(numer <= maxim && numer >= minim)
	{
		cout << numer << "esta en el intervalo " << min << "-" << max << endl;
	}
	else
	{
		cout << numer << "no esta en el intervalo " << min << "-" << max << endl;
	}
	return LeeValor(a);						//vuelve a leer un numero ( y el bucle sigue hasta que se introduce el valor del maximo o minimo
}

