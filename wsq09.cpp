#include <iostream>
using namespace std;

int main(){
int n;

cout<<"Este programa calculara el factorial del numero entero positivo que ingrese" << endl;
do{
	cout<<"Por favor dame un numero positivo: "; 
	cin>>n;

if(n<0)
		{cout<<"No valido, Solo numeros positivos"<<endl;}
}

while(n<0);
	int i, fact=1;

for (i=n ; i>1 ; i--)
	{
		fact=fact*i;
	}
	cout<<"El factorial de "<<n<<" es: " <<fact<<endl;

	char x;

do{
	cout<<"Quieres probar otro numero si(s), o no(n)?";
	cin>>x;

if(x=='s')
	{ do {
		cout<<"Por favor dame un numero positivo: "; 
		cin>>n;

if(n<0)
			{cout<<"No valido, Solo numeros positivos"<<endl;}
	}

while (n<0);
	int i, fact=1;

for (i=n ; i>1 ; i--)
	{
		fact=fact*i;
	}
	cout<<"El factorial de "<<n<<" es: " <<fact<<endl;}

if(x=='n')
	{cout<<"Adios, Gracias"<<endl;}
	} 

while(x=='s');

	return 0;
}