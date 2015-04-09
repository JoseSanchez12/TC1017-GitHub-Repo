#include <iostream>
using namespace std;

int factorial(int accuracy){
	if(accuracy == 0){
		return 1;
	}else{
		accuracy = accuracy*factorial(accuracy-1);
	}
}
int e(){
	int aprox;
	float e;
	float sum = 0;

	cout<<"Introduzca la aproximacion deseada de e: ";
	cin>>aprox;

	for(int accuracy=0; accuracy<=aprox; accuracy++){
		e = 1.0/factorial(accuracy);
		sum = sum + e;
	}
	cout<<" e = " << sum;
}

int main(){

	e();

return 0;
}