//1
int ValorAbsoluto(int entero){
	if(entero <0)
	{
		entero=-entero;
	}/
//est� mal el codgio, el correcto ser�a:

	int ValorAbsoluto (int entero) {
		if (entero < 0)
			entero = -entero;
		else
		return entero;
	}
//2	
	long ParteEntera(int double	)
	{
	    int parte_entera;
	    parte_entera = trunc(real);
	    return parte_entera;
    }

//esta mal el codigo, el correcto ser�a:
	long ParteEntera(int double	)
		{
		    int parte_entera;
		    parte_entera = trunc(real);
		    return parte_entera;
	    }
//3	
	bool EsPositivo(int valor) 
	{
		if (valor > 0)
			return true;
	}
	
//est� mal el codgio, el correcto ser�a:

	bool EsPositivo(int valor) {
		if (valor > 0)
			return true;
		return false;
	}

