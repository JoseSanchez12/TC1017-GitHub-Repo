#include <iostream>
using namespace std;

int suma (int a, int b){
	int suma=a+b;
	return suma;
}

int resta (int a, int b){
	int resta=a-b;
	return resta;
}

int multiplicacion (int a, int b){
	int multiplicacion=a*b;
	return multiplicacion;
}

int division (int a, int b){
	int division=a/b;
	return division;
}

int residuo (int a, int b){
	int residuo=a%b;
	return residuo;
}


int main(){
	int a, b;

	cout<<"Porfavor dame un numero: " << endl;
	cin>>a;
	cout<<"Di otro numero: " << endl;
	cin>>b;

int sum = suma (a,b);
	cout<<"La suma es: " << sum << endl;

int dif = resta (a,b);
	cout<<"La resta es: " << dif << endl;

int prod = multiplicacion (a,b);
	cout<<"La multiplicacion es: " << prod << endl;

int divi = division (a,b);
	cout<<"La division es: " << divi << endl;

int rem = residuo (a,b);
	cout<<"La residuo es: " << rem << endl;

	return 0;
}