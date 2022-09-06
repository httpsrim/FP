#include <iostream>
using namespace std;

int main()
{
	int m,n,k;									//filas y columnas , k es la fila de la matriz A
	double A[20][20];								//definiciones de las dos matrices
	double B[20][20];
	double C[20][20];							//definicion de la matriz resultado
	
	cout << "Matriz A" << endl;
	cout << "numero de filas" << endl;
	cin >> k;
	cout << "numero de columnas" << endl;
	cin >> n;
	
	cout << "Matriz B" << endl;
	cout << "numero de filas" << endl; //para que se puedan multiplicar las matrices, columa(A) y fila(B) deben ser iguales.
	cin >> n;
	cout << "numero de columnas" << endl;
	cin >> m;			
	
	for(int i = 0; i < k ; i++)
	{
		for(int j = 0; j < m; j++)
	    {
           cout << "Ingrese valor para A[" << i << "][" << j << "]: ";
		   cin >> A[i][j];
	       }
	}


	for(int i = 0 ; i < k; i++)
	{
	 	for(int j = 0; j < n; j++)
	    {
	        cout << "Ingrese valor para B[" << i << "][" << j << "]: ";
	    	cin >> B[i][j];
	    }
	}

	//entrada de datos de la matriz C
	cout << "filas de C:" << k << "columnas de C" << m << endl;
    for(int i = 0; i < k; i++)
    {
	   for(int j = 0; j < n; j++)
        {	    
			for(int z = 0; z < m; z++)
            {
			    C[i][j] += A[i][z] * B[z][j];
			}
		}
	}
	
	//multiplicacion de matrices:
	
		for(int i = 0; i < k; i++)
		{
        for(int j = 0; j < n; j++)
       	{
			for(int z =0 ; z < m; z++)
			{
	    	C[i][j] += A[i][z] * B[z][j];
			}
		}
	}
	
	cout<<"Resultado de la multiplicacion: ";
    
	for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
