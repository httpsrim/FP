#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double nota,max_n=0,total_n=0,media=0;
	int code_alumn,i=0,j=0,div=0,max_c=0;
	
	do
	{
		cout<<"Introduzca el codigo de alumno: "<<endl;
		cin>>code_alumn;
		i++;
		cout<<"Introduzca notas del alumno"<<endl;
		if(code_alumn == 0)
		{
			break;
		}
	
		do
		{
			cin>>nota;
			if(nota != -1)
			{
			total_n=0;
			total_n=total_n+nota;
			}
			j++;	
		}while(nota != -1 );
	
		div=j-1;
		media=total_n/div;
		cout<<media<<endl;
	
		if(media>max_n && code_alumn>max_c)
		{
			max_n=media;
			max_c=code_alumn;
		}
	}while(code_alumn>0);
	
	cout<<"la mayor nota es "<<max_n<<" del codigo "<<max_c<<endl;
}
