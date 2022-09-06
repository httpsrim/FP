#include <iostream>
using namespace std;
 
 
int max2 (double num1, double num2) 						//calcula el maximo de dos numeros
{
double maximo; 
 
if (num1 > num2)
    {
		maximo = num1;    
		return maximo;
	}
	
	else if (num2 > num1) 
	    {
		maximo = num2;
		return maximo;
	 
	}
}						
	
int max3 (double num1, double num2, double num3) 			//calcula el maximo de los 3 numeros
{	
	double maximo;
	double max_dos_num;
	
	max_dos_num = max2(num1, num2);
	  
	if (max_dos_num < num3)
	{
		maximo = num3;
		return maximo;
	}
	 
	else
	{   
		maximo = max_dos_num ; 
		return maximo;										//devuelve el maximo 
	}	
}

int main () 
{
  
 
double num1, num2, num3, maximo = 0;						//los 3 valores y el maximo de ellos.
  
cout << "inserte un primer numero: " << endl;
cin >> num1;
cout << "inserte un segundo numero: " << endl;
cin >> num2;
cout << "inserte un tercer numero: " << endl;
cin >> num3;
  
maximo = max3 (num1, num2, num3);

cout << "el maximo es " << maximo << endl; 					//te dice el maximo de los 3
} 



