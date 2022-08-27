#include <iostream>
using namespace std;
/*
programa que calcula el precio de un billete con descuento.
Entrada: billete, descuentos
Salida:  Precio final
*/

double precio1, precio2, billete, descuento1,descuento2;

int main()
{
   cout<<"introduzca el precio del billete ";
   cin>>billete;
   precio1 = billete-(billete*0.02);
   precio2 = billete-(billete*0.04);
   cout<<"el precio final será de "<<precio1<<" o "<<precio2;
   return 0;
}
