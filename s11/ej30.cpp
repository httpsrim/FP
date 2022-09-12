#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Palindromo_invertir		//Clase que vamos a utilizar para saber si es palindromo y calcular la cadena invertida
{
	private:
   int total_utilizados_;

	public:
	Palindromo_invertir(int _total_utilizados)			//datos
	{
		_total_utilizados = total_utilizados_;
	}
	
	void palindromo();
	void invertir();
};
			
void Palindromo_invertir::palindromo()					//void para calcular si es palíndromo
{
   bool es_palindromo;		
   int  izda, dcha;
   int vector_[izda]; 
   int _vector[dcha];
   es_palindromo = true;
   izda = 0;
   dcha = total_utilizados_ - 1;
   

   while (izda < dcha && es_palindromo){				//se va suponiendo desde un inicio que es palindromo
      if (vector_[izda] != _vector[dcha])				//se va mirando a ver si el caracter por la izq y elde por la derecha son iguales
      {													//si no son iguales, no es un palindromo
      	es_palindromo = false;							//pero si lo son, sigue comparando los caracteres
	  }
	  
      else{												
         izda++;
         dcha--;
      }
	}
	
    	if (es_palindromo)								//si es palindromo sale un mensaje diciendo que lo es
   	 	{												//si no, sale un mensaje diciendo que no es palindromo
      		cout << "Es palíndromo" << endl;
		}
		else{
      		cout << "No Es palíndromo" << endl;
   			}	
}

void Palindromo_invertir::invertir()
{
	int _vector_[total_utilizados_];
	cout << "Componentes del vector despues de invertirlo: <" << endl;
   	
    for (int i = 0; i < total_utilizados_; i++)								//invertimos el palindromo imprimiendo los valores del vector a revés (es decir
    																		//primero se imprime el último valor, y por último el primer valor.
    {
	    cout  << _vector_[i];
    }     
    
	cout << ">";
}

int main(){
   const char TERMINADOR = '#';    
   const int TAMANIO = 100;
   char vector[TAMANIO];
   int total_utilizados;
   char caracter;   
   bool es_polindromo_;


    cout << "Palíndromo e Invierte." << endl;
	cout << "Introduzca un máximo de " << TAMANIO << " caracteres,con terminador " << TERMINADOR << endl;
        
   total_utilizados = 0;
   caracter = cin.get();
   
   while (caracter != TERMINADOR && total_utilizados < TAMANIO){						//introduccion de los valores del vector
      vector[total_utilizados] = caracter;
      total_utilizados++;
      caracter = cin.get();
   }
   
  Palindromo_invertir p1(total_utilizados);
   
  p1.palindromo();																		//llamadas a ambos voids.
  p1.invertir();

   return 0;  
}
