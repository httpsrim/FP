#include <iostream>
using namespace std;

int main()
{
    int iterac; 
    double sum = 0.0 ;
    int num = -1 ;
    int tope;
	cout<<"Terminos :"<<endl;
	cin>>iterac;
	
	tope = iterac * 2;

    for( int n = 1 ; n < tope ; n += 2 )
    {
        num *= -1 ;
        const double term = num / double(n) ; 
        sum += term ; 
    }

    const double pi = 4 * sum ; 

    cout << "Pi en " << iterac << " iteracciones se aproxima a " << pi << endl ;
	return 0;
}
