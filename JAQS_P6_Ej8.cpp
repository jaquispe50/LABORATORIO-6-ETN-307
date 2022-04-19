/*LABORATORIO 6
           Estudiante: Daniela Jhanin Callata Bautista
           Carrera: Ingenoieria Electrónica
Ejemplo 8
Divisible entre 11
*/

#include<iostream>
using namespace std;

int esDivisible(int,int,int);

int esDivisible(int numero, int i, int mod){
	int suma;
	
	if(numero==mod){
		suma = suma + numero;	
	}	
	else{
		if(i%2==0){
			suma = numero % 10;
			suma = suma + esDivisible(numero/10,i+1,numero%10);	
		}
		else{
			suma = numero % 10;
			suma = -suma + esDivisible(numero/10,i+1,numero%10);
		}	
	}
	return suma;
}

int main(){
	int n,x,i1=1,i2=0;
	
		cout<<"                         DIVISIÓN ENTRE 11"<<endl;
		cout<<"El siguiente programa verificará si su número es o no divisible entre 11"<<endl;
		cout<<"Ingrese el numero: "; 
		cin>>n;
		if(esDivisible(n,i1,i2)%11==0){
			cout<<"El numero "<<n<<" es divisible entre 11"<<endl;
			x=n/11;
			cout<<"Y su el resultado de esa division seria "<<x<<endl;
		}
		else{
			cout<<"El numero "<<n<<" no es divisible entre 11"<<endl;
		}	
	return 0;
}



