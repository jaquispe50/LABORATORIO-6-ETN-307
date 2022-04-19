/*2. Resolver una ecuación recursiva de segundo y tercer orden

JESUS ANGEL QUISPE SUNTURA
*/
#include<iostream>

using namespace std;
 
// funciones de la ecuacion recursiva //
 
int f3(int n, int a,int b, int c, int a0, int a1, int a2)  // funcion recursiva para ecuacion de grado 3//
{
		if(n==0) return a0;   //designamos condiciones iniciales
		if(n==1) return a1;
		if(n==2) return a2;
		else return ( a*f3(n-1,a,b,c,a0,a1,a2) + b*f3(n-2,a,b,c,a0,a1,a2) + c*f3(n-3,a,b,c,a0,a1,a2));	// funcion recursiva //
}

int f2(int n, int a,int b, int a0, int a1)          // funcion recursiva para ecuacion de grado 2//
{
		if(n==0) return a0;   //designamos condiciones iniciales
		if(n==1) return a1;
		else return ( a*f2(n-1,a,b,a0,a1) + b*f2(n-2,a,b,a0,a1));   // funcion recursiva //
}
 
//funcion principal
int main()
{
    // se declara la variable n primeros terminos//
    int n,sum, opcion;
    int a,b,c;   //coheficientes//
    int a0,a1,a2;   //condiciones iniciales//
    system("color 1C");
    cout<<"\n\t Resolver una ecuacion recursiva de segundo y tercer orden ";
	cout<<"\n\t Escoger grado de la ecuacion ";
	cout<<"\n\t 1. Segundo grado ";
	cout<<"\n\t 2. Tercer grado";
	cout<<"\n\t 3. Salir";
	cout<<"\n\t Escoger grado de la ecuacion ";cin>>opcion;
	switch(opcion){
		case 1: //para ecuacion de segundo grado//
			n=3;
			cout<<"\n\t introducir condiciones iniciales";
			cout<<"\n\t A0 : ";cin>>a0;  //pedimos condiciones iniciales//
			cout<<"\t A1 : ";cin>>a1;
			cout<<"\n\t introducir coheficientes de la ecuacion de tercer grado A(n)= a*A(n-1) + b*A(n-2) ";
			cout<<"\n\t cohefiente 'a': "; cin>>a;   //pedimos coheficientes//
			cout<<"\t cohefiente 'b': "; cin>>b;
			cout<<endl;
			for(int i = 0; i < n; i++){
				cout<<"\t\t "<< f2(i,a,b,a0,a1)<<"  ";  //enviamos los datos //
				sum += f2(i,a,b,a0,a1);   //sumamos los n terminos //
			}
			cout<<"\n\t         |               |                | ";
			cout<<"\n\t       A0=x^0          A1=x^1           A2=x^2 ";  //resultado equivalente tomado como sucesion //
			cout<<"\n\n\t  Sumatoria de los n primeros terminos : "<<sum;
			break;
			
		case 2:  //para ecuacion de tercer grado//
			n=4;
			cout<<"\n\t introducir condiciones iniciales";
			cout<<"\n\t A0 : ";cin>>a0;  //pedimos condiciones iniciales//
			cout<<"\t A1 : ";cin>>a1;
			cout<<"\t A2 : ";cin>>a2;
			cout<<"\n\t introducir coheficientes de la ecuacion de tercer grado A(n)= a*A(n-1) + b*A(n-2) + c*A(n-3)";
			cout<<"\n\t cohefiente 'a': "; cin>>a;
			cout<<"\t cohefiente 'b': "; cin>>b;    //pedimos coheficientes//
			cout<<"\t cohefiente 'c': "; cin>>c;
			cout<<endl;
			for(int i = 0; i < n; i++){
				cout<<"\t\t "<< f3(i,a,b,c,a0,a1,a2)<<"  ";   //enviamos los datos //
				sum += f3(i,a,b,c,a0,a1,a2);    //sumamos los n terminos //
			}
			cout<<"\n\t         |               |               |                | ";
			cout<<"\n\t       A0=x^0          A1=x^1          A2=x^2          A3=x^3 ";//resultado equivalente tomado como sucesion //
			cout<<"\n\n\t  Sumatoria de los n primeros terminos : "<<sum;
			break;
		case 3:
            cout << "\n\t FIN DEL PROGRAMA\n\n";
            return 0;
            break;
        default:
            cout << "\n\t OPCION NO VALIDA\n\n";
            break;	
	}
    return 0; 
}
