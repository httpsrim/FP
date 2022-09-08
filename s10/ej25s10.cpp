#include <iostream>
#include <random>
#include <chrono>
using namespace std;

class GeneradorAleatorio()																		//clase para generar los numeros aleatorios
{
	private:
		mt19927 generador_mersenne;
		uniform_int_distribucion<int>;
		long long Nanosec()
		{
		return chrono::high_resolution_clock::now().
		time_since_epoch().count();
		}
	
	public:
		GeneradorAleatorio()
		:GeneradorAleatorio(0,1){}
	GeneradorAleatorio(int min, int max)															//generador de numeros entre un minimo y un maximo
	{
		const int A_DESCARTAR = 70000;
		auto semilla = Nanosec();
		generador_mersenne.seed(semilla);
		distribucion_uniforme = uniform_int_distribution<int> (min,max);
	}
	
		int Siguiente()																				//siguiente valor
		{
			return distribucion_uniforme(generador_mersenne);
		}
};
int main()
{
	int numeros;					
	numeros = GeneradorAleatorio num_a_generar(1,5);												//llama al void para que escoja un numero aleatorio entre 1 y 5
	cout << numeros << endl;																		//dice el numero aleatorio escogido

	for(int i = 0; i < numeros; i++)																//dice los valores aleatorios (hasta el numero aleatorio) entre 0 y 1
	{
		cout << aleat_0_1.Siguiente();
	}
	
	return 0;
}
