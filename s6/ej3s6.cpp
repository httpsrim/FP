#include <iostream>
using namespace std;

int main()
{
	int n;									//tope/elementos que tiene el vector
	int vector[n],suma = 0,num = 0;			//vector con n elementos, la suma(para los elementos del vector) y num es nº que hay que comprobar(para ver si hay secuencia)
	
	cout << "cuantos numeros quieres en el vector "<<endl;
	cin >> n;
	cout << "Dime un numero"<<endl;
	cin >> num;
	
	//introducir los numeros  del vector
	
	for (int i=0;i<=n;i++)
	{
		cou >> vector[i];
		suma += ector[i];
	}
	
	//te dice si hay secuencia o no
	
	if(suma == num)
	{
		cout << "hay secuencia";
	}
	
	else
	{
		cout << "no hay secuencia";
	}
}
