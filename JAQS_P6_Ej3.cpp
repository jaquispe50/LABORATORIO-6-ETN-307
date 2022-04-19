// 3. Calcular permutaciones con métodos recursivos//
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

void permutacion(string,string *,int,int);

int main(){
	
	system("color 5F");
	int n,r;  //variables de numeros a permutar y la cantidad a ser tomadas//
	
	cout<<"\n ------------------------------------------------------ ";
	cout<<"\n |  LAB6: Zambrana Morales Ana Paola           ETN307L|";
	cout<<"\n ------------------------------------------------------ \n";
	cout<<"\n 3.  Calcular permutaciones con metodos recursivos" ;
	cout<<"\n     items = 0,1,2,3,4,5,6,7,8,9";
	
    string items[]={"0","1","2","3","4","5","6","7","8","9"}; // numeros tomados por posicion//

    cout<<"\n N(cantidad de numeros a permutar):";cin>>n;  // ej N=3 usaremos los primeros 3 numeros de los items : 0,1,2 //

    cout<<"\n R(grupos de):";cin>>r;   // grupos a ser tomados , ej R=3 esto es un grupo de 3 numeros "123"//

    cout<<"\n Lista de elementos:\n ";
    for(int x=0; x<n; x++){
        cout<<items[x]<<",";//enviamos en bucle con los numeros a permutar//
    }

    cout<<"\n\n Numero de permutaciones con repeticion: "<<pow(n,r); //para saber la cantidad de permutaciones posibles//
    cout<<"\n\n Lista de permutaciones con repeticion:\n "; 

    permutacion("",items,n,r);  // se proyectara todas las permutaciones posibles//
    return 0;
}
void permutacion(string aux,string *items,int n,int r){//funcion recursiva//
    string resp=aux;        //forma de las permutaciones
    if(r>0){ 
        for(int x=0; x<n; x++){ 
            permutacion(aux+items[x],items,n,r-1);// operacion recursiva para proyectar las permutaciones//
        }
    }else{
        cout<<"\n "<<resp; 
    }
}
