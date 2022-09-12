#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class FormateadorDoubles{
private:
   enum class SeparadorDecimal {PUNTO, COMA};  
   string izda    = "";  // 
   string dcha    = "";  // Valor por defecto. 
   int decimales  = 2;   // Valor por defecto. 
   SeparadorDecimal separador = SeparadorDecimal::PUNTO;   // Valor por defecto.
   void SetDelimitadores(string delimitador_izda, string delimitador_dcha){
      izda = delimitador_izda;
      dcha = delimitador_dcha;
   }
   
public:
  
   FormateadorDoubles(){      
   }   
   
   FormateadorDoubles(string delimitador_izda string delimitador_dcha)
   {
      SetDelimitadores(delimitador_izda, delimitador_dcha);
   }
   
   FormateadorDoubles(string delimitador_izda, string delimitador_dcha, int num_decimales_a_mantener):FormateadorDoubles(delimitador_izda, delimitador_dcha)
   {
      SetNumeroDecimales(num_decimales_a_mantener);
   }
   
   void SetSeparadorPunto(){
      separador = SeparadorDecimal::PUNTO;
   }
   void SetSeparadorComa(){
      separador = SeparadorDecimal::COMA;
   }

   void SetNumeroDecimales(int num_decimales_a_mantener){
      if (num_decimales_a_mantener >= 0)
         decimales = num_decimales_a_mantener;
   }
   
   
   string GetCadena(double real){
      const int MAX_DIGITOS_PRECISION_DOUBLE = 15;
      int parte_entera;
      int num_digitos_precision;
      string cadena_separador;
      string cadena;

      if (real < 0)
         cadena = "-";

      real = abs(real);
      real = Redondea(real, decimales);
      parte_entera = trunc(real);
      cadena = cadena + to_string(parte_entera);
      num_digitos_precision = cadena.size();

      if (real != parte_entera
         && decimales > 0
         && num_digitos_precision < MAX_DIGITOS_PRECISION_DOUBLE){

         if (separador == SeparadorDecimal::PUNTO)
            cadena_separador = ".";
         else
            cadena_separador = ",";

         cadena = cadena + cadena_separador;

         for (int i = 0; i < decimales && num_digitos_precision < MAX_DIGITOS_PRECISION_DOUBLE; i++){
            real = Redondea(real - parte_entera, decimales);
            real = real * 10;
            parte_entera = trunc(real);
            cadena = cadena + to_string(parte_entera);
            num_digitos_precision++;
         }

         while (cadena.back() == '0')
            cadena.pop_back();
      }

      cadena = izda + cadena + dcha;

      return cadena;
   }
};

class Instante{
private:    
   /*
   MUY IMPORTANTE:
      NO INCLUIMOS COMO DATO MIEMBRO NADA QUE SE PUEDA OBTENER A PARTIR
      DE LOS OTROS DATOS MIEMBRO,COMO POR EJEMPLO SEGUNDOS_TOTALES
      LO QUE HAREMOS SERÁ PROPORCIONAR UN MÉTODO QUE CALCULE SEGUNDOS_TOTALES
   */
   
   static const int  SEG_1_MIN = 60,
                     MIN_1_HORA = 60,
                     HOR_1_DIA = 24;  
   
   int hor = -1;
   int min = -1;
   int seg = -1;
   
   bool EsCorrectoSeg(int segundo){
      return 0 <= segundo && segundo < SEG_1_MIN;
   }
   bool EsCorrectoMin(int minuto){
      return 0 <= minuto && minuto < MIN_1_HORA;
   }
   bool EsCorrectoHor(int hora){
      return 0 <= hora  && hora < HOR_1_DIA;
   }
   bool EsCorrecto (int hora, int minuto, int segundo){
      return  EsCorrectoHor(hora) && EsCorrectoMin(minuto) && EsCorrectoSeg(segundo);
   }

public:

   Instante(){}
   
   // Prec: las horas, minutos y segundos son correctos
   Instante(int hora, int minuto, int segundo){
      SetHoraMinutoSegundo(hora,  minuto,  segundo);
   }
   
   // Prec: los segundos son correctos
   Instante(int segundos_totales){
      SetSegundosTotales(segundos_totales);
   }

   int Hora(){
      return hor;
   }

   int Minuto(){
      return min;
   }

   int Segundo(){
      return seg;
   }

   void SetHoraMinutoSegundo(int hor, int min, int seg){
      if (EsCorrecto(hora, minuto, segundo)){
         hor = hora;
         min = minuto;
         seg = segundo;
      }
   }

   void SetSegundosTotales(int segundos_totales){
      int minutos_enteros;
      const int SEG_1_DIA = SEG_1_MIN * MIN_1_HORA * HOR_1_DIA;
                                    
      if (segundos_totales < SEG_1_DIA){
         seg = segundos_totales % SEG_1_MIN;
         minutos_enteros  = segundos_totales / SEG_1_MIN;
         min  = minutos_enteros % MIN_1_HORA;
         hor  = minutos_enteros / MIN_1_HORA;
      }
   }

   void SumaleSegundos(int segundos_a_aniadir){
      if (segundos_a_aniadir > 0)
         SetSegundosTotales(SegundosTotales() + segundos_a_aniadir);       
   }
   
   void RestaleSegundos(int segundos_a_quitar){
      if (segundos_a_quitar > 0)
         SetSegundosTotales(SegundosTotales() - segundos_a_quitar);
   }

   bool EsNulo(){
      return !EsCorrecto(hor, min, seg);  
   }

   int SegundosTotales(){
      return seg  +  SEG_1_MIN*(hor * MIN_1_HORA + min);
   }
   
   int MinutosTotales(){
      return trunc(MinutosTotalesDecimal());
   }

   double MinutosTotalesDecimal(){
      return 1.0 * SegundosTotales() / SEG_1_MIN;
   }

   double HorasTotalesDecimal(){
      return 1.0 * MinutosTotalesDecimal() / MIN_1_HORA;
   }

   string ToString(){
      return to_string(hor) + "h, " +
             to_string(min) + "\', " +
             to_string(seg) + "\'\'";
   }
};

class Tunel{
private:
   double distancia_km;
   static const int MAX_NUM_VEHICULOS = 100;
   string matriculas[MAX_NUM_VEHICULOS];
   int entradas[MAX_NUM_VEHICULOS];
   int salidas[MAX_NUM_VEHICULOS];
   int total_entradas = 0;
   int pos[MAX_NUM_VEHICULOS];
   int velocidad[MAX_NUM_VEHICULOS];
   int tiempo;
   static const int INSTANTE_NULO = -1;
      
public:
   Tunel (int horas[MAX_NUM_VEH], minuto[MAX_NUM_VEH], segundo[MAX_NUM_VEH], int MAX_NUM_VEH,matricula[MAX_NUM_VEH])
   {
   	MAX_NUM_VEH = MAX_NUM_VEHICULOS;
   	horas[MAX_NUM_VEH];
   	minuto[MAX_NUM_VEH];
   	segundo[MAX_NUM_VEH];
   }
   
   int TotalEntradas(){
      return total_entradas;
   }
   void Entra(string matricula, int hora, int minuto, int segundo){
	if(total_entrada < MAX_NUM_VEH)
	{
		
		tiempo = Instante::SegundosTotales(horas,minuto,segundo);
		pos[i] = i;
		velocidad[i] = distancia_km/tiempo;
	}
	
	if(pos == -1)
   	{
		entrada[i]=matricula[i]+velocidad[i];
	}
	}
	
   void Sale(string matricula, int hora, int minuto, int segundo)
   {	
	   for(int i = 0 ; i < MAX_NUM_VEH ; i++)
	   {
	   		pos[i] = i;
	   	    tiempo = Instante::SegundosTotales(horas,minuto,segundo); 
			if(pos != -1)
			{
				Salidas[i] = tiempo;
			}
	   }
	}
};


int main(){
   const char FIN_ENTRADA = '#';
   const char ENTRADA = 'E';
   const char SALIDA  = 'S';
   char acceso;
   bool error_lectura;
   int km;
   string matricula;
   double long_tunel;
   int hora, min, seg;
   string format_veloc;
  
   cin >> long_tunel;	//km

   FormateadorDoubles D1(hora,min,seg);
   cin >> acceso;		//matricula
   error_lectura = false;
   cin >> km;   
   Tunel tunbel(km)
   while (acceso != FIN_ENTRADA && !error_lectura){
      cin >> matricula;
      cin >> hora >> min >> seg;
      
      if (acceso == ENTRADA)
        tunel.Entra(matricula,hora,min,seg)
      else if (acceso == SALIDA)       
        tunel.Sale(matricula,hora,min,seg)
      else
         error_lectura = true;
      
      cin >> acceso;
   }
      
   
   if (error_lectura)
      cout << "\nSe produjo un error en la lectura. ";
   else{

      int total_entradas = tunel.TotalEntradas()
      
      for (int i = 0; i < total_entradas; i++){
		cout << "Matricula:" << tunel.Matricula(i) << "velocidad:";
		if (! tunel.Sale(i))
		{
			cout << "No ha salido" << endl;
		}	
		
		else
		{
			cout << format_veloc.GetCadena(tunel.Velocidad(i));
		}
      }     
   }
   return 0;
}
