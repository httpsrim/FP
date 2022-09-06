#include <iostream> 
#include <string>
using namespace std;

//funciones para eliminar los caracteres deseados
string EliminaUltimos(string cadena)
{
	return (cadena.substr(0, 12));								//indica que valores estas tomando
}

int main()
{
	string cadena = "Hola que talss";					//la frase inicial
	string final;										//el resultado final		
	cout <<"El mensaje es: " << cadena << endl;
	final = EliminaUltimos(cadena);		
	cout << "El mensaje queda como " << final;			//como queda la frase
}


