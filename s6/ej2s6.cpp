
#include <iostream>
using namespace std;

int main(){
	const int tope = 100;		//ponemos un tope por si no utilizamos #
	const char term = '#';		//# se utiliza para terminar el vector
	char inicial[tope];			//vector inicial
	char sustituir[tope];		//vector por el que vamos a ir sustituyendo los valores
	char cambiado[tope];		//vector cambiado, es decir, con los elementos sustituidos.
	char a_borrar;				//un caracter para buscar en el vector.
	
	int ini = -1;				//valor incial
	int sust = -1;				//valor sustituir
	int fin = 0;				//valor final
	
	cout << "Introduzca el vector inicial, la entrada finaliza con #: " << endl;
	do{
		ini++;
		cin >> inicial[ini];
		
	}while(inicial[ini] != '#' && ini < tope);
	
	cout << "Introduzca la sustitucion, la entrada finaliza con #: " << endl;
	do{
		sust++;	
		cin >> sustituir[sust];

	}while(sustituir[sust] != '#' && sust < tope);
	
	//introducir el caracter que queremos borrar
	
	cout << "Introduzca el caracter a borrar: " << endl;
	cin >> a_borrar;
	
	//borra el caracter del vector
	
	for(int i=0; i<ini; i++){
		if(inicial[i] == a_borrar){
			for(int j=0 ; j<sust ; j++){
				cambiado[fin] = sustituir[j];
				fin++;
			}
		} else{
			cambiado[fin] = inicial[i];
			fin++;
		}
	}
	
	//te dice el vector resultante
	
	cout << "El vector final es: ";
	
	for(int k = 0 ; k < fin ; k++){
		cout << cambiado[k];
	}
	
}
