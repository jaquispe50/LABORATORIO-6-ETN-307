// 4. Emplear recursividad para calcular la suma de entradas de un arreglo//
#include <iostream>
 
using namespace std;
 
float sumaNumeros(float numero, int n, int count);//Prototipo funcion recursiva//
 
int main()
{
	system("color 5F");
    int n;  //cantidad de numeros//
    
    cout<<"\n ------------------------------------------------------ ";
	cout<<"\n |  LAB6: Zambrana Morales Ana Paola           ETN307L|";
	cout<<"\n ------------------------------------------------------ \n";
	cout<<"\n 4. Emplear recursividad para calcular la suma de entradas de un arreglo" ;
 
    cout << "\n n(cantidad de numeros en el arreglo): "; cin >> n;  
    cout << "\nTotal: \n" << sumaNumeros(0, n, 0)<<endl<<endl;//llamamos a la funcion que sumara//
}
 
float sumaNumeros(float numero, int n, int count) //funcion recursiva para sumar terminas//
{
    float dato;   //variables auxiliar//
 
    if (count < n)  
    {
       cout << " Numero: "; cin >> dato; //llenamos el arreglo
       numero += dato;    //se suman cada uno de los terminos
       return sumaNumeros(numero, n, ++count); //retornamos el resultado de la suma
    }
 
    return numero; 
}
