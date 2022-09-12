#include <iostream>
using namespace std;

typedef char matriz;												//creamos la matriz porque es más fácil así de imprimir los valores

struct FrecuenciaCaracteres{
    char caracter;
    int frecuencia;
    FrecuenciaCaracteres(char letra): caracter(letra), frecuencia(0){}
};


int main() 
{
//variables y constantes
	const char TERMINADOR = '#';
	const int MAX_VOCALES = 5;
	char texto[100];
	int contador = 0;
	int util_utilizados = 0;
	FrecuenciaCaracteres vocales[MAX_VOCALES] = {'a','e','i','o','u'};

//Leer cadena:
	cout << "Frecuencia de vocales" << endl;
	cout << "Introduzca el texto, y para acabar introduzca " << TERMINADOR << endl;
	while(texto[util_utilizados++] != TERMINADOR)  //si ponemos texto[util_utilizados] != TERMINADOR no funciona como queremos
	{
		cin.get(texto[util_utilizados]);
	}
	cin.ignore(256,'\n');
	do{
	if(texto[contador] == 'a')
	{
		vocales[0].frecuencia++;
	}
	
		if(texto[contador] == 'e')
	{
		vocales[1].frecuencia++;;
	}
	
		if(texto[contador] == 'i')
	{
		vocales[2].frecuencia++;
	}
	
		if(texto[contador] == 'o')
	{
		vocales[3].frecuencia++;
	}
	
		if(texto[contador] == 'u')
	{
		vocales[4].frecuencia++;
	}
	} while(texto[contador++] != TERMINADOR); //si ponemos texto[contador] != TERMINADOR no funciona como queremos

//buscamos los mayores valores en las vocales

   int mayor = vocales[0].frecuencia;			//ponemos [0] como referencia a un valor, en este caso el valor referente es a
	
	for(int i = 1; i < MAX_VOCALES; i++){
		if(mayor < vocales[i].frecuencia){
			mayor = vocales[i].frecuencia;
		}
	
	}

//creamos la matriz y la imprimimos
matriz Matriz[mayor][5];
 for(int i = mayor; i > 0; i--){
		for(int j = 0; j < MAX_VOCALES; j++){
			if(i <= vocales[j].frecuencia)
				Matriz[i-1][j] = '*';
			else
				Matriz[i-1][j] = ' ';
		}
	} 
	
//imprimimos la tabla con las f

for(int i = mayor ; i > 0 ; i--)
{
	cout << i << " ";
	
	for(int j = 0; j < MAX_VOCALES; j++){
		cout << Matriz[i-1][j] << " ";
	
	
	}
	
	cout << endl;
}
cout << "  a e i o u"<< endl;

	return 0;
}
