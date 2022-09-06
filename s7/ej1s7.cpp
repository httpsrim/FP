#include <iostream>
using namespace std;

int main()
{
const char TERMINADOR = '#';
   const int MAX_NUM_CARACT = 200;
   char grande[MAX_NUM_CARACT],							//vector "grande"
        peque[MAX_NUM_CARACT];							//vector "peque�o"
   char car;	
   int util_grande, util_peque;
   int num_leidos;
   bool encontrado;
   
   
   cout << "B�squeda -d�bil- de un vector de carteres dentro de otro " << endl;
   cout << "Introduzca los cartereses del vector grande, con terminador " << TERMINADOR << endl;
   cout << "A continuaci�n introduzca  los caracterees del vector peque�o, usando el mismo terminador.";

   // Lectura

   car = cin.get();
   num_leidos = 0;

   while (car != TERMINADOR && num_leidos < MAX_NUM_CARACT){
      grande[num_leidos] = car;
      car = cin.get();
      num_leidos++;
   }

   util_grande = num_leidos;
   
   car = cin.get();
   num_leidos = 0;

   while (car != TERMINADOR && num_leidos < MAX_NUM_CARACT){
      peque[num_leidos] = car;
      car = cin.get();
      num_leidos++;
   }

   util_peque = num_leidos;

//busqueda debil
	
	for(int i = 0 ; i < util_grande && !encontrado ; i++)
		{
			if(grande[i] == peque[i])
			{
				i++;
			}
			
			if( i == util_peque)
			{
				encontrado = true;
			}
		}
		
		if(encontrado)
		{
			cout << "el vector peque�o est� en el grande"; 	
		}	
		else
		{
			cout << "el vector peque�o no est� en el grande";
		}
	} 
