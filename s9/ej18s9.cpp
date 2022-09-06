#include <iostream>
#include <cmath>
using namespace std;

class Dinero{
public:
	const int EUR_TO_CENT = 100.0;
	int euros;
	int centimos;
	//Constructores
		Dinero(int eur, int cent){		//eur-cent
		euros = eur;
		centimos = cent;
	}

													//Métodos públicos
	void setEur(int eur){
		if(esCorrecto(eur)){		
			euros = eur;
		}
	}
	
	void setCent(int cent){
		if (esCorrecto(cent)){
			centimos = cent;
		
			Ajuste();	
		}
	}
	
	double getEur(){								//Devolvemos en double para poder tener más libertad a la hora de operar
		return euros;		
	}
	
	double getCent(){
		return centimos;
	}
	
	bool esCorrecto(int cantidad){
		return cantidad >= 0;
	}
	
	bool esEuros(int cent){			
		return cent >= EUR_TO_CENT;					//devolver el nº de centimos siempre que sea <=100(conversion de cents a euros.
	}
		
	void sumaEur(int eur){							//sumar los euros
		euros += eur;
	}
	
	void sumaCent(int cent){						//sumar los centimos (siempre tiene que ser esa suma <100)
		centimos += cent;
		Ajuste();
	}
	
	void Ajuste(){									//conversion de cents a euros.
		if(esEuros(centimos)){
			euros += centimos / EUR_TO_CENT;
			centimos += centimos % EUR_TO_CENT;
		}
	}
};


int main(){
	//declaracion de variables
	const int EUR_TO_CENT = 100.0;
	double precio_prim , precio_seg;
	double  dinero_prim[0];
	double dinero_seg[0];
	double suma[0];
	int eur, cent; 
	
	//entrada de los datos
	cout << "Introduzca el precio del producto en euros y centimos: " << endl;
	cin >> eur >> cent;
	precio_prim = eur + (cent / EUR_TO_CENT) + (cent % EUR_TO_CENT)/EUR_TO_CENT;		//precio del primer producto
	Dinero precio(eur, cent);															//llamada a la funcion
	dinero_prim[0] = precio.getEur() + (precio.getCent()/EUR_TO_CENT);					//precio del primer producto
	cout << "Introduzca el precio de otro producto en euros y cents: " << endl;
	cin >> eur >> cent;
	precio_seg = eur + (cent / EUR_TO_CENT) + (cent % EUR_TO_CENT)/EUR_TO_CENT;	 	//precio del primer producto
/*	Dinero precio(eur, cent);*/	
	dinero_seg[0] = precio.getEur() + (precio.getCent()/EUR_TO_CENT);					//precio del producto
	
	
	suma[0] = dinero_seg[0] + dinero_prim[0];
	
	// salida datos
	cout << endl;
	cout << suma[0] << " euros " << endl;

	
	return 0;
} 
