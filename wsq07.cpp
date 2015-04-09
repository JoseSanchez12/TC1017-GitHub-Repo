#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, num3, sum=0;

cout << "Dime el numero mas bajo: ";

cin >> num1;

cout << "Dime el numero mas alto: "; 

cin >> num2;

num3 = num1;

do{
	sum = sum + num3;
	
	num3 = num3 + 1;
} 

while (num3 <= num2);
	
	cout << "La suma de " << num1 << " hasta " << num2 << " es = " << sum << endl;
	
	return 0;
}