#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int tope;
    double picuart, result, pi;
    const double num=-1,doble=2,suma1=1;

    cout<<"tope "<<endl;
	cin>>tope;

    for (int i=0; i<tope; i++){
        result=(pow(num,i))/(doble*i+1);
        picuart+=result;
    }

    pi=4*picuart;

    cout.precision(15);
    cout<<"el resultado es "<<pi<<endl;


    return 0;
}

