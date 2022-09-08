#include <iostream>
using namespace std;

class Cuadrado{																			//clase Cuadrado, en privado está la declaración de lado, y en público las llamadas a los void(y la variable _lado)
	private:
		int lado;
		
	public:
		Cuadrado(int _lado);
		void perimetro();
		void area();
};

Cuadrado::Cuadrado(int _lado){															//decimos que lado es igual que _lado, es decir que le pasa los datos de uno a otro

	lado = _lado;
}

void Cuadrado::perimetro(){																//calculo del perimetro
	int _perimetro;
	int num_veces_mult = 4;
	_perimetro = lado * num_veces_mult;
	cout << "Perimetro: "<< _perimetro << endl;
}

void Cuadrado::area(){																	//calculo del area
	int _area;
	_area = lado * lado;
	cout << "Area: " << _area << endl;
}


int main(){
	int coordenadas[1];
	int lado_;
	cout << "Introduzca la longuitud de la parcela: " << endl;							//inicializacion de la longuitud de parcela
	cin >> lado_;
	//1er cuadrado
	for(int i = 0 ; i <=1 ; i++)														//inicializacion coordenadas x e y
	{
		cout << "Coordenada: " << endl;
		cin >> coordenadas[i];
	}
	cout << "Coordenadas: " << "("  << coordenadas[0] << "," << coordenadas[1] << ")" << endl;			
	Cuadrado c1(lado_);
	c1.perimetro();																		//llamada al perimetro de la clase Cuadrado
	c1.area();																			//llamada al area de la clase Cuandrado
	//2o cuadrado
		cout << "Introduzca la longuitud de la parcela: " << endl;						//inicializacion de la longuitud de parcela	
	cin >> lado_;
	for(int i = 0 ; i <=1 ; i++)														//inicializacion de las coordenadas x e y
	{
		cout << "Coordenada: " << endl;
		cin >> coordenadas[i];
	}
	cout << "Coordenadas: " << "(" << coordenadas[0] << "," << coordenadas[1] << ")"<< endl;
	cout << "Longuitud: " << lado_ << endl;
	Cuadrado c2(lado_);													
	c2.perimetro();																		//llamada al perimetro de la clase Cuadrado
	c2.area();																			//llamada al area de la clase Cuadrado

	return 0;
}
