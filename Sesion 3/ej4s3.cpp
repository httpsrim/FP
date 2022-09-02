#include <iostream>
using namespace std;

int velocidad,radar, fijo, movil;

int main()
{
cout<<"indique la velocidad"<<endl;
cin>>velocidad;
cout<<"radar fijo o movil"<<endl;
cin>>radar;
    if(radar == fijo)
    {
        if(velocidad<=100)
        {
            cout<<"la velocidad es de "<<velocidad+5<<" o "<<velocidad-5<<endl;
        }
            else
        {
            cout<<"la velocidad es de "<<velocidad+velocidad*0.05<<endl;
        }
    }
   else  if (radar == movil)
    {
    if(velocidad<=100)
        {
            cout<<"la velocidad es de "<<velocidad+7<<" o "<<velocidad-7<<endl;

        }
    else
        {
            cout<<"la velocidad es de "<< velocidad+velocidad*0.07;
        }
    }
return 0;
}
