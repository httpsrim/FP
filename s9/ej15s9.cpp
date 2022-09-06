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

void lectura(string car, string car_marco)
{
string marco = getline(cin,car_marco);
car_marco.pop_back(car_marco);
string linea;
getline(cin,car);
car.pop_back(linea);
}
int main(){
   double tamanio = 0;										//tamaño del mensaje
   string car_marco, car;										//marco y mensaje
   const char TERMINADOR = '@';								//terminador

   
	//inicializaciond de las variables

   cout << "Enmarca" << "Introduzca un carácter para enmarcar" << "y a continuación los caracteres del mensaje usando como terminador el carácter " << TERMINADOR << endl;

  car = lectura(car,car_marco);

	//imprime el texto
  	ImprimeMarco(car,car_marco);
	ImprimeLinea(car);
	ImprimeMarco(car,car_marco);
	
 }


