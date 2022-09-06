#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	int valores[10];			//vector con 10 elementos
	int k = 0,resto;			//k es el divisor, el resto se utiliza para ver si hay un numero divisible.
	
	cout << "dime un numero para divisor" << endl;
	cin >> k;

	for(int i = 0 ; i <= 10 ; ++i) {
	cout<<"valor " << i << endl;
	cin >> valores[i];
	}
	
	for(int j = 0 ; j <= 10 ; j++)
	{
		resto = (valores[j] % k);
		if(resto == 0){
		cout << "Numero divisible " << valores[j] << endl;
		}
	}
return 0;
}


