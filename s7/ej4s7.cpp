#include <iostream>
using namespace std;

int main()
{
	int escanos;					//los escaños que se obtienen
	int partidos;					//el partido (Se utiliza para ver en cual estás en cada momento)
	double dhondt;
	double mayor_dh = 0;			//inicializado a 0 al principio para que funcione el programa
	int num_partido;				//el numero de partidos
	
	//inicialización de los ecaños y el numero de partidos
	
	cout << "Introduce el numero de escanos :" << endl;
	cin >> escanos;
	cout << "Introduzca el numero de partios : " << endl;
	cin >> partidos;
	
	int votos [partidos];				//vectore voto por partido
	int resultados[partidos];			//vector resultados por partido	
	int cociente_h[partidos];			//vector para ver el cociente dhont por partido
	
	//introduce los votos del partido
	
	for(int i = 0 ; i < partidos ; i++)
	{
		cout << "introduzca los votos del partido " << i << endl; 
		cin >> votos[i];
	}
	
	//inicializamos los resultado a 0, si no el programa daría errores
	for(int i = 0 ; i <= partidos; i++)
	{
		resultados [i] = 0;
	}
	
	//calculo de escaños y cociente dhont
	
	for(int i = 0 ; i < escanos ; i++)
	{
		resultados[num_partido]++;
		cociente_h[num_partido] =votos[num_partido] / (resultados[num_partido] +1);
		
		for(int j = 0 ; j < partidos ; j++)
		{
			cociente_h[j];
			
			if(mayor_dh < dhondt)
			{
				mayor_dh = dhondt;
				num_partido = j;
			}
		}
	}
	
	//dice los resultados obtenidos
	for(int i = 0 ; i < partidos ; i++)
	{
		cout << "partido " << i << " " << resultados[i]<< " ";
	}
}
