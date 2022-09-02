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
        cout<<"el precio final es "<<precio_final<<endl;
    }
    else
    {
        precio_final = tarifa_base+(0.1*(km-300));
        cout<<"el precio final es: "<<precio_final<<endl;
    }
    return 0;
}
