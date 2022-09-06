#include<iostream>
using namespace std;

class Recta{								//creamos una clase para las rectas
	public:
		double A = 0.0;
		double B = 0.0;
		double C = 0.0;
		
		double Pendiente(){					//calculo pendiente
			return -A/B;
		}
		double Ordenada_en(double x){		//calculo ordenada en x
			return (-C - x*A)/B;
		}
		double Abscisa_en(double y){		//calculo abcisa en y
			return (-C -y*B)/A;
		}
};

int main(){
	double coef_x_primera_recta, coef_y_primera_recta, coef_indep_primera_recta, 				//los coeficientes de la primera recta
          coef_x_segunda_recta, coef_y_segunda_recta, coef_indep_segunda_recta;					//los coeficientes de la segunda recta
   double pendiente_primera_recta, pendiente_segunda_recta;										//pendientes de las rectas
   double x, ordenada_de_x, y, abscisa_de_y;													//datos de ordenada y abcisa
   
   Recta primera_recta;
   Recta segunda_recta;
   
   //lectura de los valores de la recta A
   
   cout << "Introduzca los coeficientes de la recta Ax + By + C = 0" << endl;
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
   
   //lectura de los valores de abcisa / ordenada
   cout << "Introduzca un valor de abscisa" << endl;
   cin >> x;
   cout << "Introduzca un valor de ordenada" << endl;
   cin >> y;
   
	//iguala los valores de la recta a los coeficientes antes leidos (Recta A)
	
   primera_recta.A = coef_x_primera_recta;
   primera_recta.B = coef_y_primera_recta;
   primera_recta.C = coef_indep_primera_recta;
   
   //iguala los valores de la recta a los coeficientes antes leidos (Recta B)
   
   segunda_recta.A = coef_x_segunda_recta;
   segunda_recta.B = coef_y_segunda_recta;
   segunda_recta.C = coef_indep_segunda_recta;
      
	//lectura de las pendientes y de las ordenadas abcisa y ordenada
	
   pendiente_primera_recta = primera_recta.Pendiente();
   pendiente_segunda_recta = segunda_recta.Pendiente();      
   
   ordenada_de_x = primera_recta.Ordenada_en(x);
   abscisa_de_y  = primera_recta.Abscisa_en(y);
 
   //nos dice el valor de las pendientes y de la ordenadas y abcisas
 
   cout << "Pendiente de la recta 1: " << pendiente_primera_recta << endl;
   cout << "Pendiente de la recta 2: " << pendiente_segunda_recta << endl;
   cout << "Ordenada de la recta 1 en " << x << " = " << ordenada_de_x << endl;
   cout << "Abscisa  de la recta 1 en " << y << " = " << abscisa_de_y << endl;
   
   return 0;
}
