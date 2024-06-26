#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std; 


int main()
{
	string usuario;
	int puntaje_usuario=0, puntaje_computadora=0;
	int win=0;
	int opcion;
	srand(time(0));
	
	cout<<"\nBienvenido al juego de piedra, papel y tijeras"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Reglas: "<<endl;
	cout<<"1. No ingresar numeros."<<endl;
	cout<<"2. Solo ingresar: piedra, papel o tijera (en minuscula)."<<endl;
	cout<<"3. Gana el que gana 3 rondas."<<endl;
	
	do
	{
	
		cout<<"\nEleccion del usuario: ";
		cin>>usuario;
		opcion=rand()%3+1;
		cout<<"Eleccion de la computadora: ";
		
		switch (opcion)
		{
			case 1:
			{
				cout<<"piedra"<<endl;
				break;
			}
			case 2:
			{
				cout<<"papel"<<endl;
				break;
			}
			case 3:
			{
				cout<<"tijera"<<endl;
				break;
			}
		}
		if(usuario=="piedra"and opcion==1 or usuario=="papel" and opcion==2 or usuario=="tijera" and opcion==3)
		{
			cout<<endl;
		
			cout<<"Rondas ganadas del usuario: "<<puntaje_usuario<<endl;
			cout<<"Rondas ganadas de la computadora: "<<puntaje_computadora<<endl;			
			cout<<"Nota: Empate"<<endl;
			cout<<"__________________________________"<<endl;
		}
		if(usuario=="piedra"and opcion==3)
		{
			puntaje_usuario++;
			cout<<endl;
				
			cout<<"Rondas ganadas del usuario: "<<puntaje_usuario<<endl;
			cout<<"Rondas ganadas de la computadora: "<<puntaje_computadora<<endl;
			cout<<"__________________________________"<<endl;
		}else if(usuario=="papel"and opcion==1){
			
			puntaje_usuario++;
			cout<<endl;
						
			cout<<"Rondas ganadas del usuario: "<<puntaje_usuario<<endl;
			cout<<"Rondas ganadas de la computadora: "<<puntaje_computadora<<endl;
			cout<<"__________________________________"<<endl;
		}else if(usuario=="tijera"and opcion==2){
			
			puntaje_usuario++;
			cout<<endl;
			
			cout<<"Rondas ganadas del usuario: "<<puntaje_usuario<<endl;
			cout<<"Rondas ganadas de la computadora: "<<puntaje_computadora<<endl;
			cout<<"__________________________________"<<endl;
		}else if(usuario=="piedra"and opcion==2){
			
			puntaje_computadora++;
			cout<<endl;
		
			cout<<"Rondas ganadas del usuario: "<<puntaje_usuario<<endl;
			cout<<"Rondas ganadas de la computadora: "<<puntaje_computadora<<endl;
			cout<<"__________________________________"<<endl;
		}else if(usuario=="papel"and opcion==3){
			
			puntaje_computadora++;
			
			cout<<"Rondas ganadas del usuario: "<<puntaje_usuario<<endl;
			cout<<"Rondas ganadas de la computadora: "<<puntaje_computadora<<endl;
			cout<<"__________________________________"<<endl;
		}else if(usuario=="tijera"and opcion==1){
			
			puntaje_computadora++;
			cout<<endl;
			
			cout<<"Rondas ganadas del usuario: "<<puntaje_usuario<<endl;
			cout<<"Rondas ganadas de la computadora: "<<puntaje_computadora<<endl;
			cout<<"__________________________________"<<endl;
		}
		cout<<endl;
	
		
	}while(puntaje_usuario!=3 and puntaje_computadora!=3);
	
	cout<<"Cantidad de veces ganadas del usuario: "<<puntaje_usuario<<endl;
	cout<<"Cantidad de veces ganadas de la computadora: "<<puntaje_computadora<<endl;
	if(puntaje_computadora==3)
	{
		cout<<"\nPerdiste"<<endl;
	}
	else
	{
		cout<<"\nGanaste"<<endl;
	}

	return 0; 
}
