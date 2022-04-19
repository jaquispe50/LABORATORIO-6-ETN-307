//6. Realiza el algoritmo de máximo común divisor recursivamente //
#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

int mcd(int a, int b){  //funcion recursiva para el MCD//
    if(b==0) return a;
    else mcd(b,a%b);     //operacion recursiva//
}
int main( void ){
    system("color 5F");
    int a,b;
    cout<<"\n\t ------------------------------------------------------ ";
	cout<<"\n\t |  LAB6: Zambrana Morales Ana Paola           ETN307L|";
	cout<<"\n\t ------------------------------------------------------ \n";
	cout<<"\n\t 6. Realiza el algoritmo de maximo comun divisor recursivamente\n" ;
	
/*Validamos que “a” sea positivo y entero*/
    do{
        cout<<"\t INGRESE PRIMER NUMERO: ";
        cin>>a;
        if(a<0) cout<<"\n\t INGRESE UN NUMERO ENTERO Y POSITIVO… \n";
       }while(a<0);
/*Validamos que “b” sea positivo y entero*/

    do{
        cout<<"\t INGRESE SEGUNDO NUMERO: ";
        cin>>b;
        if(b<0) cout<<"\n\tINGRESE UN NUMERO ENTERO Y POSITIVO… \n";
       }while(b<0);
/*si a>b llama a mcd(a,b)*/

        if(a>b)
        cout<<"\n\t MDC( "<<a<<" , "<<b<<" ) =  "<<mcd(a,b)<<endl<<endl;
        else
        if(a<b) /*si b>a llama a mcd(b,a)*/
        cout<<"\n\t MDC( "<<b<<" , "<<a<<" ) =  "<<mcd(b,a)<<endl<<endl;
   return 0;
}
