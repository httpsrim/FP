void Imprime(double valor){
double valor;
cout << valor;
}

//está mal, debería ser:

void Imprime()
{
	double valor; 
	cout << valor;
}

//está bien

void Cuadrado (int entero){
return entero*entero;
}


void EliminaUltimo(string cadena){
cadena.pop


//está mal, debería ser:

void EliminaUltimo()
{
	string cadena;
	cadena.pop();
}
