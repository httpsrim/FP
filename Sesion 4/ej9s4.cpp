#include <iostream>
using namespace std;

int main()
{
double num,cota_izda,cota_dcha;
char car_dcha, car_izda;
const char COMA = ',',izq_abierto = '(', izq_cerrado = '[', dcha_abierto = ')',dcha_cerrado = ']';
int n;
bool pertenece;

	cout<<"introduzca el valor de la izquierda"<<endl;
	cin >> cota_izda; 
	cout<<"introduzca el valor de la derecha"<<endl;  
	cin >> cota_dcha;
	cout<<"introduzca la cota de la izquierda {si es abierto o cerrado}"<<endl; 
	cin >> car_izda; 
	cout<<"introduzca la cota de la derecha {si es abierto o cerrado}"<<endl; 
	cin >> car_dcha;
	cout<<"Introduzca cuantos numeros quieres"<<endl;
	cin>>n;
	cout << "Intervalo:"  << car_izda << " " << cota_izda <<" , "<< cota_dcha << " " << car_dcha<< endl;
	
	for(int i=1;i<=n;i++){
		cout<<"numero"<<endl;
		cin>>num;
		if (num >= cota_izda && num <= cota_dcha){
			pertenece = true;
		
			if((car_izda == izq_abierto && num == cota_izda) || (car_dcha == dcha_abierto && num == cota_dcha)){
				pertenece = false;
			}
		}
		if(pertenece==true){
			cout << num << " pertenece al intervalo "<<endl; 
		} else if(pertenece==false){
			cout << num<< " no pertenece al intervalo " << endl; 
		}
	
		pertenece = false;	
	}
	 return 0;
}

