#include <iostream>
using namespace std;
/*
programa que calcula el precio del billete según el nº de km que hagas
Entrada: km
Salida: billete
*/
double km,billete;

int main()
{
   cout<<"introduzca el numero de km ";
   cin>>km;
   billete = 150+(0.10*km);
   cout<<"el billete cuesta "<<billete;
   return 0;
}
