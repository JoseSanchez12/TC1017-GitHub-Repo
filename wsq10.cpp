#include <iostream>
#include <cmath>
using namespace std;

int main(){

int a;
int b, suma=0;

cout<<"Introduce el numero de valores que usaras minimo 2: "<< endl;
cin>>a;

float array [a];
int c=0;

do{
cout<<"Porfavor dime un valor: ";
cin>> array[c]; c++;
}

while (c<(a-1));

cout<<"Dime el ultilo valor: ";
cin>> array[c];

for (b=0; b<a; ++b)
{
    suma = array[b]+suma;
}

cout<<"La suma de los numeros es: "<<suma<<endl;

float prom = (suma/a);

cout<<"El promedio de los numeros es: "<<prom<<endl;

int d;
float des;

for (d=0; d<a; ++d) 
{
 des=(array[d]-prom)*(array[d]-prom)+des;
}

float stddes = sqrt(des/a);

cout<<"La desviacion estandar es de: "<<stddes<<endl;

	return 0;}