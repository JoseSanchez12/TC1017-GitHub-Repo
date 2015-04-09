#include <iostream>
#include <cmath>
using namespace std;


float raiz (float a){
float estimacion = a / 2 ;
int counter = 0 ;
float b ;
	do{
		b = (0.5) * ( estimacion + ( a / estimacion ));
		estimacion = b;
		counter++;
		cout<<"La iteracion # "<< counter<< ": Estimacion = " << estimacion <<endl;
	} while (counter!=10);
		
return b;
}

int main(){

float a;
cout<<"Pon el numero que quieras su raiz cuadrada: ";
cin>>a;

cout<<"La raiz cuadrada de " << a << " es " << raiz(a) <<endl;
return 0;
}