#include <iostream>
using namespace std;

int main(){
int f,c;
 	
cout << "What´s your temperature in fahrenheit?:"; 
cin >>f;
	
c=(f - 32) / 1.8;
	
cout << "Your temperature in celcius is: ";
cout <<c;
cout <<" degrees";

if (c > 100)
	cout <<" the state of the water is: gas";

if ( 100 > c > 0)
	cout <<" the state of water is: liquid";

if (c < 0)
	cout <<" the state of water is: solid";

return 0;
}