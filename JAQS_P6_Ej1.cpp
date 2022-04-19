/*1. Hallar una sucesión por recursividad de e^x

JESUS ANGEL QUISPE SUNTURA
*/

#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int potencia(double,int); //funcion recursiva//

double resultado; //resultado e^x global//

int main(){
	
	system("color 1C");
	int exponente;     //exponente valor n entero positivo//
	double b;          // base que tendria el valor de e//
	
	b=exp(1);	  // base tiene el valor de e^1//
	cout<<"\n\t Calcular e^x como sucesion y aplicacion recursiva" ;
	cout<<"\n\t ingrese el exponente";
	cin>>exponente;//leemos el exponente//
	
	
	potencia(b,exponente);//llamamos a la funcion y enviamos datos//
	cout<<"\n\t el valor de 'e' elevado a la "<<exponente<<" es igual a : ";
	printf("\t%.10lf\n",resultado);//expresion de resultado con 10 decimales//
	
	return 0;
}
 int potencia(double b,int exponente){//funcion recursiva//
	
	if(exponente==1){ //si exponente es igual a 1 la base se matiene//
		resultado=b;
	}
	else{
		resultado *= (b*potencia(b,exponente-1))/(potencia(b,exponente-1)) ; //operacion recursiva para e^x//
	}
	return resultado; //retornamos el resultado//
}


