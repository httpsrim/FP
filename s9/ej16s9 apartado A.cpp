#include <iostream>
using namespace std;

class Recta{						//creamos una clase para la recta
	public:
		double A = 0.0;
		double B = 0.0;
		double C = 0.0; 
};

int main(){
	double coef_x_primera_recta, coef_y_primera_recta, coef_indep_primera_recta, 				//los coeficientes de la recta A
          coef_x_segunda_recta, coef_y_segunda_recta, coef_indep_segunda_recta;					//los coeficientes de la recta B
   double pendiente_primera_recta, pendiente_segunda_recta;										//pendientes de las rectas A y B
   
   Recta primera_recta;
   Recta segunda_recta;
   
   //lectura de los valores de la recta A
   
   cout << "Introduzca los coeficientes de la recta Ax + By + C = 0\n";
   cout << "A:" << endl;
   cin >> coef_x_primera_recta;
   cout << "B:" << endl;
   cin >> coef_y_primera_recta;
   cout << "C:" << endl;
   cin >> coef_indep_primera_recta;
   
   //lectura de los valores de la recta B
    
   cout << "Introduzca los coeficientes de la recta Ax + By + C = 0" << endl;
   cout << "A:" << endl;
   cin >> coef_x_segunda_recta;
   cout << "B:" << endl;
   cin >> coef_y_segunda_recta;
   cout << "C:" << endl;
   cin >> coef_indep_segunda_recta;
   
   primera_recta.A = coef_x_primera_recta;
   primera_recta.B = coef_y_primera_recta;
   primera_recta.C = coef_indep_primera_recta;
   
   segunda_recta.A = coef_x_segunda_recta;
   segunda_recta.B = coef_y_segunda_recta;
   segunda_recta.C = coef_indep_segunda_recta;
   
   //calculo de las pendientes 
      
   pendiente_primera_recta = - primera_recta.A / primera_recta.B;
   pendiente_segunda_recta = - segunda_recta.A / segunda_recta.B;
   
   cout << "Pendiente de la recta 1: " << pendiente_primera_recta << endl;
   cout << "Pendiente de la recta 2: " << pendiente_segunda_recta << endl;
   
   return 0;
}
