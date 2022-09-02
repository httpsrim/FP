#include <iostream>
using namespace std;

int votos_presenc_A, votos_correo_A, votos_presenc_B, votos_correo_B, votos_presenc_C, votos_correo_C;

float mayoria_A, mayoria_B, mayoria_C, mayoria_AB, mayoria_AC, mayoria_BC;

int main(){

   cout << "Introduzca los votos presenciales obtenidos por el partido A"<<endl;
   cin >> votos_presenc_A;
   cout << "y a continuación introduzca los votos por correo del partido A"<<endl;
   cin >> votos_correo_A;
   cout << "Introduzca los votos presenciales obtenidos por el partido B"<<endl;
   cin >> votos_presenc_B;
   cout << "y a continuación introduzca los votos por correo del partido B"<<endl;
   cin >> votos_correo_B;
   cout << "Introduzca los votos presenciales obtenidos por el partido C"<<endl;
   cin >> votos_presenc_C;
   cout << "y a continuación introduzca los votos por correo del partido C"<<endl;
   cin >> votos_correo_C;
 	mayoria_A = votos_presenc_A+votos_correo_A;
	mayoria_B = votos_presenc_B+votos_correo_B;
	mayoria_C = votos_presenc_C+votos_correo_C;

	
	 if(mayoria_A == mayoria_B == mayoria_C)

		{
		cout<<"error"<<endl;
		}
		
	else if(mayoria_A>mayoria_B && mayoria_A>mayoria_C)
		{
		cout<<"la mayoria de votos es de A"<<endl;
		}
	else if(mayoria_B>mayoria_A && mayoria_B>mayoria_C)
		{
		cout<<"la mayoria de votos es de B"<<endl;
		}
	else if(mayoria_C>mayoria_A && mayoria_C>mayoria_B)
		{
		cout<<"la mayoria de votos es de C"<<endl;
		}

    else if((mayoria_A == mayoria_B) && mayoria_A>mayoria_C && mayoria_B>mayoria_C)
		{
		cout<<"la mayoria de votos es de A y B"<<endl;
		}
    else if((mayoria_A == mayoria_C) && mayoria_A>mayoria_B && mayoria_C>mayoria_B)
		{
		cout<<"la mayoria de votos es de A y C"<<endl;
		}
    else if((mayoria_B == mayoria_C) && mayoria_B>mayoria_A && mayoria_C>mayoria_A)
		{
		cout<<"la mayoria de votos es de B y C"<<endl;
		}
	else
		{
		cout<<"error";
		}
 return 0 ;
}


