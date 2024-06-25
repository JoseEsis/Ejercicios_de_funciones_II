#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double Hipotenusa, Cateto1, Cateto2, SumaDeCatetos;
	cout<<"Ingrese el valor del primer cateto: ";
	cin>>Cateto1;
	cout<<"Ingrese el valor del segundo cateto: ";
	cin>>Cateto2;
	SumaDeCatetos=pow(Cateto1, 2)+pow(Cateto2, 2);
	Hipotenusa=sqrt(SumaDeCatetos);
	cout<<"La hipotenusa del triangulo rectangulo es: "<<Hipotenusa<<endl;
	
	
	return 0;
}
