#include <iostream>
#include <cmath>
using namespace std;
/*
programa que calcula cuánto vale Π a partir del arcoseno.
Salidas:Π
Entradas:arcoseno
*/

float numero = 0.5,pi;

int main()
{
   pi = (asin (numero))*6;
   cout<<"pi vale:"<<pi;
   return 0;
}
