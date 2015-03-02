#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3, sum=0;

cout << "Please give us the lower bond:";
cin>>num1;
cout << "Please give us the upper bond:"; 
cin>>num2;
num3=num1;
do{
	sum=sum+num3;
	num3=num3+1;
	} while (num3<=num2);
	cout << "The sum of " << num1 << " to " << num2 << " is = " << sum << endl;
	return 0;
}