#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double RadioDelCirculo, AreaDelCirculo;
	cout<<"\nIngrese el radio del circulo: ";
	cin>>RadioDelCirculo;
	AreaDelCirculo=M_PI*pow(RadioDelCirculo,2);
	
	cout<<"El area del circulo es: "<<AreaDelCirculo<<endl;
	return 0;
}
