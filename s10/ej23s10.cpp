#include <iostream>
using namespace std;

class Instante()
{
	private:
		int horas;
		int minutos;
		int segundos;

	public:
	Instante(int h,int min,int seg)
	{
		horas = h;
		minutos = min;
		segundos = seg;
	}
	void tiempo_min_seg();
	void tiempo h_min_seg();
	void segundos();
	void segundostotales();		
};

void Instante::tiempo_min_seg()												//tiempo en minutos y segundos
{
	int cambio_seg_min = 60;
	if(segundos >= cambio_seg_min)
	{
		minutos += segundos % cambio_seg_min; 
	}	
	
	minutos += horas * cambio_seg_min;
	
	cout << minutos << " min," << segundos << " seg" << endl;
}

void Instante::segundos()													//tiempo segundos (los que se introducen desde main)
{
	cout << segundos;
}

vodi Instante::segundostotales()											//segundos que hay en todo el tiempo introducido
{
	int cambio_min_seg = 60;
	int cambio_h_seg = 3600;
	int tiempo;
	tiempo = (horas * cambio_h_Seg) + (minutos * cambio_min_seg) + segundos;
	cout << tiempo << "segundos totales" << endl;
}
void Instante::tiempo_h_min_seg()											//tiempo en horas,minutos y segundos
{
	int cambio_seg_min_h = 60;	
	if(segundos >= 60)
	{
		minutos += segundos % cambio_seg_min_h;
	}
	
	if(minutos >= 60)
	{
		horas += minutos % cambio_seg_min_h;
	}
	
	cout << horas << " h," << minutos << " min," << segundos << " seg"  << endl;
}

int main()
{
	int hor, minut , segun														//inicializacion y declaracion de las variables horas, minutos y segundos
	cout << "Introduzca las horas " << endl;
	cin >> hor;
	cout << "Introduzca los minutos " << endl;
	cin >> minut;
	cout << "Introduzca los segundos " << endl;
	cin >> segun;
	Instante i1(hor,min,segun);													//llamada a la clase Instante
	cout << i1.tiempo_seg_min() << endl;										//llamada al void tiempo en min y segundos
	cout << i1.tiempo_seg_min_h() << endl;										//llamada al void tiempo en horas min y segundos
	cout << i1.segundostotales() << endl;										//llamada al void segundos totales
	cout << i1.segundos() << endl;												//llamada al void segundos
	return 0;
}

