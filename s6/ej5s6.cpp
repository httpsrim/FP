#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int tope;								//tope
	int max_dif = 0;						//se inicializa a 0 al principio del programa, para q8e se pueda hacer el maximo desnivel
	int dif = 0;							//diferencia de altura
	int i = 0;
	int alturas[i];							//vector de altura
	
	cout << "Introduzca cuantos datos va a proporcionar: " << endl;
	cin >> tope;
	cout << "Introduzca las alturas en metros: " << endl;
	
	do{
		
		cin >> alturas[i];

		if(alturas[i] >= dif)
		{
			dif = alturas[i];
		}
		
		i++;
	}while (i<tope);
	
	//introducimos la max diferencia de altura
	
	max_dif = dif;
	
	//nos dice el maximo desnivel (si hay)
	if(tope > 1){
		cout << "El mayor desnivel es de " << max_dif << " metros." << endl;
	} else{
		cout << "DATOS INSUFICIENTES";
	}
}

