#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

int main()
{
    double num;
    double max = 999.9999999999999;
    string numstring;
    string decim;

  	while(num > max)
  	{
    cout << "Introduzca un numero:" << endl;
    cin >> num;
  	}
	numstring = num;
	numstring.substr(4,10);					//por si tiene +6 decimales, para extraerlos.
	stringstream stream;

	if(decim < 6)
	{
		stream.precision(decim.length);
		stream << fixed;
    	stream << num;
   		string str = stream.str();
   		cout << str;
	}
	else
	{
		stream.precision(6);
		stream << fixed;
    	stream << num;
   		string str = stream.str();
   		cout << str;
	}
    stream.precision(3);

    return 0;
}

