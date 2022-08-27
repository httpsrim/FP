#include <iostream>
#include <cmath>
using namespace std;
/*
programa utilizado para conversiones de grados a radianes
Entrada: grados
Salida: Radianes
*/
double g1,g2; //dos nºs reales (grados)
float rad1,rad2;  //grados

int main()
{
   cout<<"seleccione un valor para g1 ";
   cin>>g1;
   cout<<"seleccione un valor para g2 ";
   cin>>g2;
   rad1 = g1*(3.1416/180);
   rad2 = g2*(3.1416/180);
   cout<<"el valor en radianes de "<<g1<<" es "<<rad1<<endl;
   cout<<"el valor en radianes de "<<g2<<" es "<<rad2;
   return 0;
}
