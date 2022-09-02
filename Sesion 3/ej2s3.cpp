#include <iostream>
using namespace std;

int tarifa_base = 150, precio_final, km = 0;

int main()
{

    cout<<"seleccione el numero de km";
    cin>>km;

    if(km<300)
    {
        precio_final = tarifa_base;
        if(km>100)
        {
        precio_final = precio_final*0.97;
        }
        else if(km>200)
        {
        precio_final = precio_final*0.96;
        }
        cout<<"el precio final es "<<precio_final<<endl;

    }
    else
    {
        precio_final = tarifa_base+(0.1*(km-300));
         if(km>100)
        {
        precio_final = precio_final*0.97;
        }
        else if(km>200)
        {
        precio_final = precio_final*0.96;
        }
         else if(km>700)
        {
        precio_final = precio_final*0.98;
        }
        cout<<"el precio final es: "<<precio_final<<endl;
    }
    return 0;
}
