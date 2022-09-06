#include <iostream>
using namespace std;

int main (){
	const int MAX_CARACTERES = 100;															//maximo de carácteres que se puede introducir
	const char TERMINADOR = '#';															//termninador
	char vector_principal[MAX_CARACTERES] = {0};											//vector al que le vamos a camviart los valores
	char vector_nuevo[MAX_CARACTERES] = {0};												//nuevo vector sin los valores que ibamos a quitar
	char a_borrar, caracter;			
	int principal_utilizados, nuevo_utilizados, total, ocurrencias_borrar;
	int lectura, escritura;

	total = 0;	
	ocurrencias_borrar = 0;
	principal_utilizados = 0;
	nuevo_utilizados = 0;

	cout << "introduzca caracteres " << endl;
	//buble para escribir los caracteres hasta que se tope con el terminador.
	//ponemos que se cuente los caracteres del vector principal usados ( para crear el vector)
	while (caracter != TERMINADOR){

		vector_principal[principal_utilizados] = caracter;
		principal_utilizados++;
		cin >> caracter;
	}
	
	//lo mismo se hace con el nuevo vector(copia del vector principal(?))
	while (caracter != TERMINADOR){
		vector_nuevo[nuevo_utilizados] = caracter;
		nuevo_utilizados++;
		cin >> caracter;
	}
	
	//introducimos el caracter que queremos borrar
	cout << "caracter a borrar" << endl;
	cin >> a_borrar;
	
	//bucle para ir borrandolos.
	for (int i = 0 ; i < principal_utilizados ; i++){
		if (vector_principal[i] == a_borrar)
			ocurrencias_borrar++;
	}
	
	nuevo_utilizados = nuevo_utilizados - 1;
	lectura = principal_utilizados - 1;
	escritura = lectura + ocurrencias_borrar * (nuevo_utilizados);
	
	while (lectura >= 0){
		if (vector_principal[lectura] == a_borrar){
			for (int i = nuevo_utilizados ; i >= 0 ; i--){
				vector_principal[escritura] = vector_nuevo[i];
				escritura--;
				total++;
			}
			lectura--;
		}
		else{
			vector_principal[escritura] = vector_principal[lectura];
			escritura--;
			lectura--;
			total++;
		}
	}
	//sale escrito el vector sin el caracter que se queria borrar
	for (int i = 0 ; i < total ; i++){
		cout << vector_principal[i];
	}
}
