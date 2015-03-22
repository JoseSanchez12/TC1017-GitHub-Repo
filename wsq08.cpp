#include <iostream>
using namespace std;

int suma (int a, int b){
	return a+b;
}

int resta (int a, int b){
	return a-b;
}

int multiplicacion (int a, int b){
	return a*b;
}

int division (int a, int b){
	return a/b;
}

int residuo (int a, int b){
	return a%b;
}


int main(){
	int a, b;
	cout<<"Porfavor dame 2 numeros: " << endl;
	cin >> a;
	cin >> b;

	cout<<"La suma es: " << suma(a,b) << endl;

	cout<<"La resta es: " << resta(a,b) << endl;

	cout<<"La multiplicacion es: " << multiplicacion(a,b) << endl;

	cout<<"La division es: " << division(a,b) << endl;

	cout<<"La residuo es: " << residuo(a,b) << endl;

	return 0;
}