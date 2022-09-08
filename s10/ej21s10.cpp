#include <iostream>
using namespace std;
	
class Cuadrado{																				//clase Cuadrado, en privado está la declaración de lado, y en público las llamadas a los void(y la variable _lado)
	private:
		int lado;
		int esquina_x;
		int esquina_y;
		
	public:
		Cuadrado(int _lado , int coordenada_x, int coordenada_y){							//constructor para las variables lado y las esquinas
			lado = _lado;
			esquina_x = coordenada_x ;
			esquina_y = coordenada_y;
			cout << "(" << lado << "," << esquina_x << "," << esquina_y << ")" << endl;		//escribe (""dice"") las variables: (lado, esquina en x, esquina en y)
		}
		void perimetro();
		void area();
};

	
void Cuadrado::perimetro(){																	//calculo del perimetro
	int _perimetro;
	int num_veces_mult = 4;
	_perimetro = lado * num_veces_mult;
	cout << "Perimetro: "<< _perimetro << endl;
}

void Cuadrado::area(){																		//calculo del area
	int _area;	
	_area = lado * lado;
	cout << "Area: " << _area << endl;
}


int main(){
	int param_x, param_y;
	int coordenadas[1];
	int lado_;
	cout << "Introduzca la longuitud de la parcela: " << endl;								//inicializacion de la longuitud de parcela
	cin >> lado_;
	//1er cuadrado
	for(int i = 0 ; i <=1 ; i++)															//inicializacion coordenadas x e y
	{
		cout << "Coordenada: " << endl;
		cin >> coordenadas[i];
	}
	
	param_x = coordenadas[0];
	param_y = coordenadas[1];
	
	cout << "Coordenadas: " << "("  << coordenadas[0] << "," << coordenadas[1] << ")" << endl;			
	Cuadrado c1(lado_, param_x, param_y);
	c1.perimetro();																			//llamada al perimetro de la clase Cuadrado
	c1.area();																				//llamada al area de la clase Cuandrado
	
	return 0;
}
