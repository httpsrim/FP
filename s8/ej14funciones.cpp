#include <iostream>
#include <string>
using namespace std;
  
void ImprimeLinea(string car)					//void para imprimir la linea
{
		cout << " " << endl;
		cout << car;
		cout << " " << endl;
}

 void ImprimeMarco(string car, string car_marco)			//void para imprimir marco
{
		for (int i = 0 ; i < car.length() ; i++)
		{
		cout << car_marco;
		}

}  

int main(){
   double tamanio = 0;										//tamaño del mensaje
   string car_marco, car;										//marco y mensaje
   const char TERMINADOR = '@';								//terminador
   
	//inicializaciond de las variables
   
   cout << "Enmarca" << "Introduzca un carácter para enmarcar" << "y a continuación los caracteres del mensaje usando como terminador el carácter " << TERMINADOR << endl;
	getline(cin, car_marco);
    getline(cin,car);

	//imprime el texto
  	ImprimeMarco(car,car_marco);
	ImprimeLinea(car);
	ImprimeMarco(car,car_marco);
	
 }



