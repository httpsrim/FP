#include <iostream>
#include <math.h>
using namespace std;

int potencia(double base, double exponente)					//calculo potencia(base 10) para la aproximaci�n
{
	double desplazamiento;
	desplazamiento = pow(base, exponente);
	return desplazamiento;
}
int aproxima(double num ,  double decim)					//calculo de la aproximaci�n con los decimales que se indique.
{
	double real_redond;
    double desplazado;
    double aproximacion;
    double base = 10 , exponente = decim;
    desplazado = potencia(base,exponente);					//llamada a la funci�n potencia
	cout<<"Calcular aproximacion" << endl;

   
   real_redond = round(num * desplazado);  			
   aproximacion = real_redond/desplazado;
   
   return aproximacion;
}
int main(){	

    double num;
   	double decim;

//ingresa el numero que queremos aproximar y el numero de decimales que queremos.

	cout<<"Ingrese un numero: " << endl;
	cin >> num;
	cout << "Seleccione la precision " << endl;
	cin >> decim;

//nos dice la aproximacion
	
	cout  << aproxima(num,decim);
 }
 


