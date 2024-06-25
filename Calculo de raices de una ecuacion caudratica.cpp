#include<iostream>
#include<cmath>
using namespace std; 

int main()
{
	int a, b, c;
	float discriminante, X1,X2;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"Ingrese el valor de c: ";
	cin>>c;
	
	discriminante=pow(b,2)-(4*a*c);
	cout<<"La discriminante es: "<<discriminante<<endl;
	
	if(discriminante>0)
	{
		X1=(-b+sqrt(discriminante))/(2*a);
		X2=(-b-sqrt(discriminante))/(2*a);
		cout<<"Como la discriminante es mayor cero: Entonces hay dos raices reales distintas."<<endl;
		cout<<"La primera raiz es: "<<X1<<endl;
		cout<<"La segunda raiz es: "<<X2<<endl;
		
	}else if(discriminante==0){
		X1=-b/(2*a);
		cout<<"Como la discriminante es igual a cero: Solo hay una raiz."<<endl;
		cout<<"La raiz es: "<<X1<<endl;
	}else if(discriminante<0){
		cout<<"Como la discriminante es menor a cero: Entonces las raices son complejas. "<<endl;
		
	}
		
	
	
	
	return 0; 
}
