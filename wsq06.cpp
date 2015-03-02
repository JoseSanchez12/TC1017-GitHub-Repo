#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main(){

int a, b, c=0;

srand (time(NULL));

a=rand()%100+1;

cout<< "Adivina el numero que esta entre el 1 y 100" << endl;

do{

cout<< "Di un numero entre el 1 y 100: ";
cin>>b;

if(b>a)
	{cout<< "Incorrecto, intente de nuevo " << b << " es muy alto" << endl;}

if(b<a)
	{cout<< "Incorrecto, intenta de nuevo " << b << " es muy bajo" << endl;}

if(b==a)
	{cout<< "Felicidades le has atinado" << endl;}

	c++;
}

while (a!=b);

{cout<<"Lo intentaste " << c <<" veces" << endl;}
	return 0;
}