#include <iostream>
#include <string.h>
using namespace std;

class  SecuenciaCaracteres()
{
	private:
	int tamanio_;
	static const int TAM = 100;
	char caracteres[TAM];
	
	public:
	SecuanciaCaracteres(char caract[tam],static const int tam)
	{
	caracteres[TAM] = caract[tam];
	tamanio_ = tam;		
	}
	void aniade();
	void utilizados();
	void invierte();
	void PrimeraOcurrencia();
	void EliminaOcurrencia();
};
			
void SecuenciaCaracteres::aniade()												//añade un caracter al final de la secuencia
{
	int anadir = tamanio_ + 1;
	cout << "Introduce caracter" << endl;
	cin >> caracteres[anadir];
}

void SecuenciaCaracteres::utilizados()											//te dice la longitud del string
{
	cout << tamanio_;
}

	
void SecuenciaCaracteres::invierte()											//invierte la frase o la serie de caracteres
{
	for(int i = tamanio_ ; tamanio <= 0 ; tamanio_--)
	{
	cout << caracteres[i];
	}
}

void SecuenciaCaracteres::PrimeraOcurrencia()									//encuentra la primera ocurrencia de un caracter
{
   char a_buscar[tamanio_];
   int frecuencias[tamanio_];

   char car;
   int util_a_buscar, util_texto, iguales;
   
   util_a_buscar = 0;

   while (car != TERMINADOR && util_a_buscar < NUM_CARACT_ASCII){
      caracteres[util_a_buscar] = car;
      car = cin.get();
      util_a_buscar++;
   }

   car = cin.get();
   util_texto = 0;

   while (car != TERMINADOR && util_texto < MAX_NUM_CARACT){
      caracteres[util_texto] = car;
      car = cin.get();
      util_texto++;
   }
   
   
	for (int j = 0 ; j < util_a_buscar ; j++)									 //busca donde se encuentran caracter/caracteres
	{
		iguales = 0;
	
		for(int i = 0 ; i < util_texto ; i++)
		{
			if(caracteres[i] == a_buscar[j])
			{
				iguales++;
				break;
			}
			else
			{
				tamanio_++;
			}
		}
	}
		
	for (int i = 0 ; i < util_a_buscar ; i++)									//te dice donde lo ha encontrado por primera vez
	{
		cout << a_buscar[i] << "Se ha encontrado en: " << tamanio_ << endl;
	}
}	

void SecuenciaCaracteres::EliminaOcurrencia()									//elimina las ocurrencias de un caracter
{
	char a_borrar, caracter;			
	int  principal_utilizados,nuevo_utilizados, total, ocurrencias_borrar;
	int lectura, escritura;

	total = 0;	
	ocurrencias_borrar = 0;
	nuevo_utilizados = tamanio_;
	principal_utilizados = tamanio_;



	cout << "caracter a borrar" << endl;											//introducimos el caracter que queremos borrar
	cin >> a_borrar;
	
	for (int i = 0 ; i < principal_utilizados ; i++){								//bucle para ir borrandolos.
		if (caracteres[i] == a_borrar)
			ocurrencias_borrar++;
	}
	
	nuevo_utilizados = nuevo_utilizados - 1;
	lectura = principal_utilizados - 1;
	escritura = lectura + ocurrencias_borrar * (nuevo_utilizados);
	
	while (lectura >= 0){
		if (caracteres[lectura] == a_borrar){
			for (int i = nuevo_utilizados ; i >= 0 ; i--){
				caracteres[escritura] = vector_nuevo[i];
				escritura--;
				total++;
			}
			lectura--;
		}
		else{
			caracteres[escritura] = caracteres[lectura];
			escritura--;
			lectura--;
			total++;
		}
	}

	for (int i = 0 ; i < total ; i++){											//sale escrito el vector sin el caracter que se queria borrar
		cout << caracteres[i];
	}

}

int main()
{
	char secuencia[max];														//vector para tomar los valores(es una cadena)
	int max = 100;																//el maximo de caracteres que se pueden introducir
	char TERMINADOR = '#';														//terminador
	
	cout << "Introduzca una secuencia de caracteres: " << endl;
	for(int i = 0; i < max; i++)
	{
		while(secuencia[i] != TERMINADOR)
		{
			cin >> secuencia[i];
			tamanio ++;
		}
	}
	
	SecuenciaCaracteres frase(secuencia[max],tamanio);								//envio de datos a la clase SecuenciaCaracteres
	frase.aniade;																	//llamadas a los distintos void de la clase
	frase.utilizados;
	frase.invierte;
	frase.PrimeraOcurrencia;
	frase.EliminaOcurrencia;
	
	return 0;
}
