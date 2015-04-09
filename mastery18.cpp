#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
int nota;

cout<<"Pon la calificacion obtenida de (10-6): ";
cin>>nota;

switch(nota){
	case 10 : puts("Excelente");
				break;
	case 9 : puts("Bueno");
				break;
	case 8 : puts("Regular");
				break;
	case 7 : puts("Aprobado");
				break;
	case 6 : puts("Reprobado");
				break;
	default : puts("No es posible esa nota")
}

}