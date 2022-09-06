#include <iostream>  
#include <cmath> 
using namespace std; 

int VPdemanda(double demanda_ini, double demanda_fin)
{
	double var_demanda;
	var_demanda = abs(100*(demanda_fin - demanda_ini)/demanda_ini);
	return var_demanda;
}

int VPprecio(double precio_ini, double precio_fin)
{
	double var_precios;
	var_precios = abs(100*(precio_fin - precio_ini)/precio_ini);
	return var_precios;
}
int main(){
   double precio_ini, precio_fin;
   double demanda_ini, demanda_fin;
   double elast_pd;
   double var_demanda , var_precio;
   
   	cout << "Cálculo de la Elasticidad Precio-Demanda." << endl;
   	cout << "Introduzca cuaternas de valores: El precio inicial, el precio final, la demanda inicial y la demanda final." << endl;
   	cout << "Introduzca cualquier negativo en el precio inicial para terminar" << endl;
	cout << "precio inicial: " << endl;
  	cin >> precio_ini;
   
   while (precio_ini >= 0){
   	  
		
	   	  cout << "precio final: " << endl; 
		  cin >> precio_fin;
		  cout << "demanda inicial: " << endl;       
	      cin >> demanda_ini;
	      cout << "demanda final: " << endl;
		  cin >> demanda_fin;
	      
	      var_demanda = VPdemanda(demanda_ini,demanda_fin);
	      var_precio = VPprecio(precio_ini,precio_fin);
	      
		  elast_pd = var_demanda/var_precio;
		  
	      cout << "Elasticidad Precio-Demanda: " << elast_pd << endl;      
		  cout << "precio inicial: " << endl;
		  cin >> precio_ini;
   }
}

