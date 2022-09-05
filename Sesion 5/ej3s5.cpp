#include <iostream>
using namespace std;

int main(){
	int tope;
	double aprox = 1;
	double pi;
	double numer;
	double denom;
	
	cout.precision(15);
	
	cout << "Tope: " << endl;
 	do{
		cout << "Valor entre 1 y 100000" << endl;
		cin >> tope;
	}while (tope <= 0 || tope > 100000);
	

	
	for(int i = 0; i<tope; i++){
	
	bool es_impar = i%2 != 0;
		
		if (es_impar){
			numer = i + 1.0;
			denom = i + 2.0;
		} else{
			numer = i + 2.0;
			denom = i + 1.0;
		}
		
		aprox *= (numer/ denom);	
	}
	
	pi = aprox * 2.0;
	
	cout << "Aproximacion" << pi<<endl; 
}
