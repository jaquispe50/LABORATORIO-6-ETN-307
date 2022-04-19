//7.Realizar el algoritmo de las torres de Hanoi en forma recursiva//
#include <iostream>
using namespace std;
 
void hanoi(int num,char A,char C,char B) //funcion Recursiva//
{
    if(num==1)
    {
            cout<<"\t Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;          
    }
    else    
    {    //Operaciones para determinar la forma correcta de resolver las torres de HAnoi//
        hanoi(num-1,A,B,C);
        cout<<"\t Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;//muestra los pasos a seguir //
        hanoi(num-1,B,C,A);
    }
} 

int main()
{
	system("color 5F");
    int n;  //numero de discos a emplear//
    char A,B,C;  //declaramos las 3 torres//
        
    cout<<"\n\t ------------------------------------------------------ ";
	cout<<"\n\t |  LAB6: Zambrana Morales Ana Paola           ETN307L|";
	cout<<"\n\t ------------------------------------------------------ \n";
	cout<<"\n\t 7.Realizar el algoritmo de las torres de Hanoi en forma recursiva\n" ;
 
    cout<<"\n\t Las TORRES DE HANOI son A B C\n";
    cout<<"\t Numero de discos: "; cin>>n;
    hanoi(n,'A','C','B'); //llamamos a la funcion recursiva y enviamos datos//
        
    return 0;
         
}
