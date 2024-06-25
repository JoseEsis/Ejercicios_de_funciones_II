#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int b,a, aleatorios;
	srand(time(0));
	cout<<"\nIngrese la cantidad de numero aleatorios que desea generar: ";
	cin>>b;
	cout<<"Ingrese el valor maximo permito de los numeros aleatorios: ";
	cin>>a;
	cout<<" \nLos numeros generados de manera aleatoria son: "<<endl;
	for(int i=0;i<b;i++)
	{
		aleatorios=rand()%a+1;
		cout<<aleatorios<<endl;
	}
	
	
	return 0;
}
