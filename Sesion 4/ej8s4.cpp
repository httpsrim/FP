#include <iostream>
using namespace std;

int main()
{
int tarifa_base = 150, precio_final, km = 0,puntos;
const int min_km=300,max_km=700,cien_puntos=100,dosc_puntos=200;

	while(km<=0)
	{
    cout<<"seleccione el numero de km";
    cin>>km;
	}
	while(0>=puntos<=400)
	{
    cout<<"seleccione el numero de puntos";
    cin>>puntos;
	}
    
    if(km<min_km)
    {
    		if(puntos>cien_puntos)
    	{
    		precio_final=tarifa_base-(tarifa_base*0.03);
			cout<<"el precio final es "<<precio_final;
		}
		else if(puntos>dosc_puntos)
		{
			precio_final=tarifa_base-(tarifa_base*1.04);
			cout<<"el precio final es "<<precio_final;
  		}
  		else
  		{
  			cout<<"el precio final es "<<tarifa_base;	
		}
  	}
	else if(km>min_km<max_km)
    {
    	if(puntos>cien_puntos)
    	{
    		precio_final=(tarifa_base+(km*0.1))*0.97;
			cout<<"el precio final es "<<precio_final;
		}
		else if(puntos>dosc_puntos)
		{
			precio_final=(tarifa_base+(km*0.1))*0.96;
			km=km-min_km;
			cout<<"el precio final es "<<precio_final;
		}
		else
  		{
  			precio_final=(tarifa_base+(km*0.1));
  			cout<<"el precio final es "<<precio_final;	
		}
	}
	else if(km<max_km)
	{
		km=km-min_km;
		precio_final=(tarifa_base+(km*0.1))*0.98;
		cout<<"el precio final es "<<precio_final;
	}
    return 0;
}
