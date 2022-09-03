#include <iostream>
using namespace std;

int main(){
double cap, inte;
int anios = 0,tope;
const int div=100, mult_tope=2;
 
    cout << "Introduce el capital inicial: " << endl;
    cin >> cap;
    cout << "Introduce el interes anual: " << endl;
    cin >> inte;
    
    tope = cap * mult_tope;

    while(cap <= tope){
            cap = cap +(cap*(inte/div));
            anios++;
    }
    cout << "El total de numeros de anios para doblar el capital es: " << anios <<" y se conseguirá "<<cap<<endl;
}

