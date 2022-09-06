
#include <iostream>
using namespace std;

int main(){
   
   const int TAM_MAX = 1e5;										//tamaño maximo del vector
   long v[TAM_MAX],												//declaracion del vector v
       topk[TAM_MAX];											//declaracion topk
   long util,i = 0,k,num,intercambio,pos_maximo;				
   
   // Lectura
   cout << "Introduzca los valores del vector" << endl;
   cin >> num;
   while (num >= 0){
      v[i] = num;
      cin >> num;
      i++;
   }
   util = i;
   
   cout << "Introduzca k (numero)" << endl;
   
   cin >> k;
   
   // Copia de v en topk
   
   for (int i=0 ; i < util ; i++)
      topk[i] = v[i];
   
   // Cómputos
   
   for (int izda = 0 ; izda < k ; izda++){
      
      pos_maximo = izda;
      
      for (int i = izda + 1 ; i < util ; i++){
         if (topk[i] > topk[pos_maximo])
            pos_maximo = i;
      }
      
      intercambio = topk[izda];
      topk[izda] = topk[pos_maximo];
      topk[pos_maximo] = intercambio;
        
   }
   
   // Salida
   
   for (int i=0 ; i < k ; i++)
      cout << topk[i] << " ";
}
