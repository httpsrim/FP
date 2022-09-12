
#include <iostream>

using namespace std;

// Estructura de una frecuencia de caracteres
struct FrecuenciaDeCaracteres{
	char caracter;
	int frecuencia;

	FrecuenciaDeCaracteres(){
		caracter = 0;
		frecuencia = 0;
	}
};

class SecuenciaCaracteres{											//clase para calcular el nuevo vector
	private:
		static const int MAX = ('Z' - 'A') * 2;						//nº maximo de caracteres que se dejan introducir
		string texto;
		FrecuenciaDeCaracteres caracteres[MAX];
		char letras_usadas[MAX];
		int indice_usadas = 0;
		int total_eliminados = 0;
		char TERMINADOR = '#';
	public:
		SecuenciaCaracteres(){
			texto = "";
						
			for(int i = 0; i < MAX; i++){
				letras_usadas[i] = 0;
			}
		}
		void LeerTexto(){
			getline(cin, texto, TERMINADOR);
		}
		
		void RellenarStruct(){
			int pos = 0;
		   bool buscar = false;
		    
			for(int i = 0; i < texto.size(); i++){
		      buscar = false;
				if((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')){
					for(int j = 0; j < indice_usadas; j++){
						if(caracteres[j].caracter == texto[i])
							buscar = true;
					}
					if(buscar == true){
						for(int z = 0; z < indice_usadas; z++){
							if(caracteres[z].caracter == texto[i]){
								pos = z;
							}		
						}
						if(pos >= 0)
							caracteres[pos].frecuencia++;
					}
					else{
						letras_usadas[indice_usadas] = texto[i];
						caracteres[indice_usadas].caracter = texto[i];
						caracteres[indice_usadas].frecuencia++;
						indice_usadas++;
					}
				}
			}
		}
		
		FrecuenciaDeCaracteres Moda(){									
			FrecuenciaDeCaracteres moda;
			int max = 0;
			for(int i = 1; i < indice_usadas; i++)
				if(caracteres[max].frecuencia < caracteres[i].frecuencia)
					max = i;
					
			moda = caracteres[max];
			return moda;
		}
		
		void Elimina(int posicion){
			int total_utilizados = texto.size();
			if (posicion >= 0 && posicion < total_utilizados){
				int tope = total_utilizados-1;
				for (int i = posicion ; i < tope ; i++)
					texto[i] = texto[i+1];
					total_utilizados--;
					total_eliminados++;
			}
		}
		
		void EliminaOcurrencias(char caracter_a_borrar){			//eliminar caracter
			for(int i = 0; i < texto.size(); i++){
				if(texto[i] == caracter_a_borrar)
					Elimina(i);
			}
		}
		
		void EliminaBloque(int pos_ini, int pos_fin){				//eliminar vectores
			int i = pos_ini;
			while(i <= pos_fin){
					Elimina(pos_ini);
					i++;
			}
		}
		
		string Imprimir(){											//imprimir el texto resultante
			texto.resize(texto.size()-total_eliminados);
			for(int i=0; i < texto.size(); i++)
				texto[i] = texto[i];
			
			return texto;
		}
		
		int TamanioTexto(){
			return texto.size();
		}
		

		int GetUsadas(){											//indica el numero de caracteres usados
			return indice_usadas;
		}
};


int main(){
	SecuenciaCaracteres calcular_moda;
	FrecuenciaDeCaracteres moda;
	int pos_ini, pos_fin;	
	cout << "Introduzca el texto"<< endl;							//cout para que sepamos que el programa ha empezado
		
	calcular_moda.LeerTexto();
	calcular_moda.RellenarStruct();
	moda = calcular_moda.Moda();
	
	if(calcular_moda.GetUsadas() == 0){								//si no se ha introducido ningun texto, sale este mensaje de error
		cout << "No se ha introducido ningun caracter " << endl;
	}
	else{
		cout << "El texto con el caracter borrado es ------> " << calcular_moda.Imprimir() << endl;
	}
	
	return 0;
}
