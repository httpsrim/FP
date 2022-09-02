#include <iostream>
#include <cmath>
using namespace std;

   const double PI = 6 * asin(0.5);

   double esperanza, desviacion, x, incremento, maximo, minimo;
   double y;
   double tipificado, exponente;
   
int main(){
   cout << "Introduzca el valor del parámetro 'esperanza' : " << endl;
   cin >> esperanza;
 	do{
   cout << "Introduzca el valor del parámetro 'desviacion' : ";
   cin >> desviacion;
   }while(desviacion <= 0 );
  do{
   cout <<"Introduzca un minimo "<<endl;
   cin >>minimo;
   cout<<"Introduzca un maximo "<<endl;
   cin>>maximo;
   }while(minimo>maximo) ;
  do
  {
	cout<<"Introduzca el incremento "<<endl;
	cin>>incremento;
  }while(incremento<=0);

   	x = minimo;
   
	while(x<=maximo)
	{
   tipificado = (x - esperanza) / desviacion;
   exponente = -0.5 * tipificado * tipificado;
   y = exp(exponente) / ( desviacion * sqrt(2*PI) );
  	  cout << "El valor de la función gaussiana en " << x << " es " << y<<endl;
  x=x+incremento;
	}
	  return 0;
}
