#include <iostream>
#include <string>
using namespace std;

class SecuenciaCaracteres{
private:
   static const int TAMANIO = 2e6;
   char v[TAMANIO];
   int util;
   char _buscar;
 
   
  
public:
	//datos
	SecuenciaCaracteres (int pos_izda, int pos_dcha, char buscado,int util_total)
	{
	    char intercambia;
	    util_total = util;
		buscado = _buscar;
	    intercambia = v[pos_izda];
	    v[pos_izda] = v[pos_dcha];
	    v[pos_dcha] = intercambia;
	}
	//voids/funciones


   int Utilizados()
   {
      return util;
   }
   
   int Capacidad()
   {
      return TAMANIO;
   }
   
   //Vector nuevo (en el que se va a buscar el caracter a borrar)
   void Aniade(char nuevo)
   {
      if (util_total < TAMANIO)
	  {
         v[util_total] = nuevo;
         util_total++;
      }
   }
   
   void Modifica(int posicion, char nuevo)
   {
      if (EsCorrectaPosicion(posicion))      
         v[posicion] = nuevo;
   }

   char Elemento(int indice)
   {
      return v[indice];
   }
   
   //crea la cadena
   string ToString()
   {

      string cadena;

      cadena.reserve(util_total);

      for (int i=0; i < util_total; i++)
         cadena.push_back(v[i]);
  
      return cadena;
   }

   int PrimeraOcurrenciaEntre (int pos_izda, int pos_dcha, char buscado)
    {
      int i = pos_izda;
      bool encontrado = false;

      while (i <= pos_dcha  &&  !encontrado)
         if (v[i] == buscado)
            encontrado = true;
         else
            i++;

      if (encontrado)
         return i;
      else
         return -1;
   }
   
   int PrimeraOcurrencia (char buscado){
      return PrimeraOcurrenciaEntre (0, util_total - 1, buscado);
   }
   

   // Búsquedas
   
   // Precond: 0 <= izda <= dcha < util
   int PosMinimoEntre(int izda, int dcha){
      int pos_minimo = -1;
      char minimo;

      minimo = v[izda];
      pos_minimo = izda;

      for (int i = izda+1 ; i <= dcha ; i++)
         if (v[i] < minimo){
            minimo = v[i];
            pos_minimo = i;
         }

      return pos_minimo;
   }
   
  
   int PosMinimo(){
      return PosMinimoEntre(0, util_total - 1);
   }
   
    BusquedaBinaria (char buscado){
      int izda, dcha, centro;
      bool encontrado = false;

      izda = 0;
      dcha = util_total - 1;
      centro = (izda + dcha) / 2;

      while (izda <= dcha  &&  !encontrado){
         if (v[centro] == buscado)
            encontrado = true;
         else if (buscado < v[centro])
            dcha = centro - 1;
         else
            izda = centro + 1;

         centro = (izda + dcha) / 2;
      }

      if (encontrado)
         return centro;
      else
         return -1;
   }
   
    // Recorridos que modifican las componentes	


	//algoritmo para elemininar el caracter que no queremos.
   void Elimina (int posicion){
     
      if (posicion >= 0 && posicion < util_total){
         int tope = util_total-1;

         for (int i = posicion ; i < tope ; i++)
            v[i] = v[i+1];

         util_total--;
      }

   }

   void Ordena_por_Seleccion(){
      int pos_min;

      for (int izda = 0 ; izda < util_total ; izda++){
         pos_min = PosMinimoEntre(izda, util_total - 1);
         IntercambiaComponentesDirectamente(izda, pos_min);
      }
   }
   
   void Ordena_por_Insercion(){
      int izda, i;
      char a_desplazar;

      for (izda=1; izda < util_total; izda++){
         a_desplazar = v[izda];

         for (i=izda; i > 0 && a_desplazar < v[i-1]; i--)
            v[i] = v[i-1];

         v[i] = a_desplazar;
      }
   }
   
 void InsertaOrdenadamente(char nuevo){
        int i;

        if (util_total > TAMANIO){
           for (i=util_total; i>0 && nuevo < v[i-1]; i--)
                v[i] = v[i-1];

           v[i] = nuevo;
           util_total++;
        cout << v[i];
		}
   }
};




int main()
{
	char caracter,buscar;
	int utilizados;
	int TAMANIO=2e6;
	int vector[TAMANIO];
	char TERMINADOR = '#';
	
	cout << "Introduzca un vector de caracteres" << endl;
	utilizados = 0;
	caracter = cin.get();
	
	 while (caracter != TERMINADOR && utilizados < TAMANIO){
      vector[utilizados] = caracter;
      utilizados++;
      caracter = cin.get();
   }
   cout << "introduce un caracter a buscar:" << endl;
   cin >> buscar;
   SecuenciaCaracteres s1(caracter, buscar);
   s1.Anidade();
   s1.ToString();
   s1.EliminaTodos();
   s1.InsertaOrdenadamente();
   return 0;
}

