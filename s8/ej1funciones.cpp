//1
int ValorAbsoluto(int entero){
	if(entero <0)
	{
		entero=-entero;
	}/
//está mal el codgio, el correcto sería:

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

//esta mal el codigo, el correcto sería:
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
	
//está mal el codgio, el correcto sería:

	bool EsPositivo(int valor) {
		if (valor > 0)
			return true;
		return false;
	}

