#include<iostream>
#include<cmath>
using namespace std;

void calcularRaices(float a, float b, float c, float& X1, float& X2, bool& RaicesReales) 
{
  float discriminante;
  discriminante=pow(b,2)-(4*a*c);
  if(discriminante>0)
  {
	RaicesReales=true;
	X1=(-b+sqrt(discriminante))/(2*a);
	X2=(-b-sqrt(discriminante))/(2*a);
  }
  else if(discriminante == 0)
  {
	RaicesReales = true;
	X1=X2=(-b)/(2*a);
  }
  else
  {
	RaicesReales = false;
  }	

}

int main() 
{
	
  float a, b, c, X1, X2, X;
  bool RaicesReales;
  cout<<"Ingrese el valor de a: ";
  cin>>a;
  cout<<"Ingrese el valor de b: ";
  cin>>b;
  cout<<"Ingrese el valor de c: ";
  cin>>c;
  cout<<endl;

  calcularRaices(a, b, c, X1, X2, RaicesReales);

  if (RaicesReales) 
  {
    cout<<"Como la discriminante es mayor a cero o igual: Entonces tiene raices reales."<<endl;
    cout<<"La primera raiz es: "<<X1<<endl;
	cout<<"La segunda raiz es: "<<X2<<endl;
    
  } else {
    cout<<" Las raices son complejas"<< endl;
  }

  return 0;
}
