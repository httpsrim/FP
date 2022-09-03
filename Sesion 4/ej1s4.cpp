#include <iostream>
using namespace std;

int main()
{
const int valor_izq_corch=91,valor_izq_parent=40,valor_dcha_parent=41,valor_dch_corch=93;
double n,cota_izda,cota_dcha;
char car_izda,car_dcha;
	
	cout<<"introduzca el valor de la izquierda"<<endl;
	cin >> cota_izda; 	  
	cout<<"introduzca el valor de la derecha"<<endl;  
	cin >> cota_dcha;
	cout<<"introduzca la cota de la izquierda {si es abierto o cerrado}"<<endl; 
	cin >> car_izda; 
	cout<<"introduzca la cota de la derecha {si es abierto o cerrado}"<<endl; 
	cin >> car_dcha;
	cout << "Intervalo:"  << car_dcha << " " << cota_dcha <<" , "<< cota_izda << " " << car_izda<< endl;
	cout<<"Inserte un numero"<<endl;
	cin>>n;
	
	if(car_dcha ==valor_dch_corch && car_izda == valor_izq_parent)
	{
		if(cota_dcha<=n<cota_izda){
			cout<<n<<"esta dentro del intervalo";
		}
		else{
			cout<<"no está en el intervalo";
		}
	}
	
	else if(car_dcha==valor_dcha_parent && car_izda==valor_izq_parent)
	{
		if(cota_dcha<n<cota_izda){
			cout<<n<<"esta dentro del intervalo";
		}
		else{
			cout<<"no está en el intervalo";
		}
	}
	 
	else if(car_dcha==valor_dcha_parent && car_izda== valor_izq_corch)
	{
		if(cota_dcha<=n<=cota_izda){
			cout<<n<<"esta dentro del intervalo";
		}
		else{
			cout<<" no está en el intervalo";
		}
	}
	 
	else if(car_dcha==valor_dch_corch && car_izda==valor_izq_corch)
	{
		if(cota_dcha<=n<=cota_izda){
			cout<<n<<" esta dentro del intervalo";
		}
		else{
			cout<<"no está en el intervalo";
		}
	}
	 
	 
 return 0;  
}


