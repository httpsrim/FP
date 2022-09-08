#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

class Double_to_String()
{
	private:
		
	public:
		
}

int main()
{
    double num;
    double max = 999.9999999999999;
    string numstring;
    string decimales;

  	while(num > max)
  	{
    cout << "Introduzca un numero:" << endl;
    cin >> num;
  	}
	
	numstring = num;
	decimales = numstring.substr(4,10);
	stringstream stream;

	if(decimales.length < 6)
	{
		stream.precision(decimales.length);
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

