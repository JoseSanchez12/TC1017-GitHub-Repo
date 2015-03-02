#include <iostream>
using namespace std;

int main(){
	int n,i,fact;
	char r;

	cout<<"Este programa calculara el factorial del numero entero que ingrese" << endl;
	cout<<"Quieres sacar el factorial de un numero si o no?" << endl;
	cin>>r;
	
	do{
	cout<<"Por favor dame un numero: "; cin>>n;
	fact=1;
	
	for (i=1 ; i<=n ; i++)
	{
		fact=fact*i;
	}

	cout<<"El factorial de el numero que ingresaste es: " <<fact<<endl;
	cout<<"Quieres probar otro numero si, o no?" << endl;
	cin>>r;

 
while (r="si");

if (r="no")
	{
		cout<<"Adios, Gracias"
	} 
return 0;