#include <iostream>
using namespace std;

int main()
{
const char TERMINADOR = '@';
   const int NUM_CARACT_ASCII = 256;
   const int MAX_NUM_CARACT = 1e4;  // diez mil
   
   char a_buscar[NUM_CARACT_ASCII];
   int frecuencias[NUM_CARACT_ASCII];
   char texto[MAX_NUM_CARACT];

   char car;
   int util_a_buscar, util_texto, iguales;

   cout << "Frecuencias" << endl;
   cout << "Introduzca los caracteres del vector a buscar, con terminador " << TERMINADOR << endl;
   cout << "A continuación introduzca  los caracteres del texto, ";
   cout << " usando el mismo terminador." << endl;

   // Lectura

   car = cin.get();
   util_a_buscar = 0;

   while (car != TERMINADOR && util_a_buscar < NUM_CARACT_ASCII){
      a_buscar[util_a_buscar] = car;
      car = cin.get();
      util_a_buscar++;
   }

   car = cin.get();
   util_texto = 0;

   while (car != TERMINADOR && util_texto < MAX_NUM_CARACT){
      texto[util_texto] = car;
      car = cin.get();
      util_texto++;
   }
   
   //busca la frecuencia de un caracter/caracteres
   
	for (int j = 0 ; j < util_a_buscar ; j++)
	{
		iguales = 0;
	
		for(int i = 0 ; i < util_texto ; i++)
		{
			if(texto[i] == a_buscar[j])
			{
				iguales++;
				frecuencias[j] = iguales;
			}
		}
	}

	//te dice las veces que se ha repetido
	
	for (int i = 0 ; i < util_a_buscar ; i++)
	{
		cout << a_buscar[i] << ":" << frecuencias[i] << endl;
	}
}
