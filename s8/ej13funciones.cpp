void Imprime(double valor){
double valor;
cout << valor;
}

//est� mal, deber�a ser:

void Imprime()
{
	double valor; 
	cout << valor;
}

//est� bien

void Cuadrado (int entero){
return entero*entero;
}


void EliminaUltimo(string cadena){
cadena.pop


//est� mal, deber�a ser:

void EliminaUltimo()
{
	string cadena;
	cadena.pop();
}
