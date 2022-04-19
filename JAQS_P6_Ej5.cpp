/*5. Emplea recursividad para generar la sucesión   an+1 = an-1 + an  siendo a0 =1 , a1=1
 además calcular la suma de los n primeros términos*/
#include<iostream>

using namespace std;
 
// funcion de la ecuacion recursiva //
 
int fib(int n)
{
	//condiciones iniciales//

    if (n == 0 || n == 1)    //  A(0)=1  y   A(1)=1
        return 1;
 
    // funcion recursiva :   A(n+1)=A(n-1)+A(n)   */(-1)   <==>  A(n)=A(n-2)+A(n-1)
    else
        return (fib(n - 2) + fib(n - 1));
}
 
//funcion principal
int main()
{
    // se declara la variable n primeros terminos//
    int n,sum;
    system("color 5F");
    cout<<"\n\t ------------------------------------------------------ ";
	cout<<"\n\t |  LAB6: Zambrana Morales Ana Paola           ETN307L|";
	cout<<"\n\t ------------------------------------------------------ \n";
	cout<<"\n\t 5. Emplea recursividad para generar la sucesion   an+1 = an-1 + an  siendo a0 =1 , a1=1";
    cout<<"\n\t    ademas calcular la suma de los n primeros terminos" ;
    cout<<"\n\t    Ingrese n primeros terminos : ";cin>>n; //ingresamos los n primeros terminos
 
    cout<<"\n\t   La serie generada seria :\n";
    //bucle for para la funcion recursiva
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<< fib(i)<<"  "; //llamo y envio datos a la funcion recursiva
        sum += fib(i);  //sumo los n primeros terminos
    }
    cout<<"\n\n\t   Sumatoria de los n primeros terminos : "<<sum;
    return 0;
}
