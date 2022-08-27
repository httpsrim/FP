#include <iostream>
#include <cmath>
using namespace std;
/*
programa utilizado para conocer la variacion porcentual de una cantidad
Salidas:cç variacion porcentual
Entradas: valorfinal, valorinicial
*/
float VP;   //variacion porcentual
double VF,VI; //valores iniciales y finales

int main()
{
 cout<<"seleccione el valor inicial ";
 cin>>VI;
 cout<<"seleccione el valor final ";
 cin>>VF;
 VP = abs(100*((VF-VI)/VI));
 cout<<"la desviación porcentual es de "<<VP<<"%";
 return 0;
}
