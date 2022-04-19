/*10. Escribir una solución recursiva que calcule la función de Ackerman para valores de m y n dados. 
      La función de Ackerman se describe del siguiente modo:A(m, n) = n + 1, si m = 0 A(m, n) = A(m-1, 1),*/

#include <iostream>
#include <cstdlib>

using namespace std;

int Ackerman(int m, int n)//funcion recursiva para la funcion de Ackerman//
{
    if(m==0)
      return n+1;  //condicion y operacion de Ackerman para m=0//
    else
    {
        if(n==0)
           return Ackerman(m-1, 1);//condicion y operacion de Ackerman para n=0//
        else
           return Ackerman(m-1, Ackerman(m, n-1));//condicion y operacion de Ackerman para n!=0  y m!=0//
    }
}
int main()
{
	system("color 5F");
    int m, n, num ;  //variables que se utilizaran//
    
    cout<<"\n\t ------------------------------------------------------ ";
	cout<<"\n\t |  LAB6: Zambrana Morales Ana Paola           ETN307L|";
	cout<<"\n\t ------------------------------------------------------ \n";
	cout<<"\n\t 10. Escribir una solucion recursiva que calcule la funcion de Ackerman para valores de m y n dados. ";
    cout<<"\n\t     La funcion de Ackerman se describe del siguiente modo:A(m, n) = n + 1, si m = 0 A(m, n) = A(m-1, 1)\n" ;

    cout<<"\n\t     FUNCION DE ACKERMAN \n";

    cout<<"\t Ingrese <m>:  "; cin>> m ;
    cout<<"\t Ingrese <n>:  "; cin>> n ;
    
    num = Ackerman(m,n); //llamamos a la funcion y enviamos datos//
    
    cout<<"\n\t El numero es: "<< num <<endl<<endl; //numero resultante//
    system("pause");
    return 0;
}
