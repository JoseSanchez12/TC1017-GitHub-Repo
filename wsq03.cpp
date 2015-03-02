#include <iostream>
using namespace std;

int main(){
	int a, b, sum, dif, product, division,remainder;

cout<< "Give me a number: ";
cin>>a;

cout<< "Give me a another number: ";
cin>>b;

sum=a+b, dif=a-b, product=a*b, division=a/b, remainder=a%b;

cout<< "The sum of "<<a<<" + "<<b<< " is: "<<sum<< endl;
cout<< "The dif of "<<a<<" - "<<b<< " is: "<<dif<< endl;
cout<< "The product of "<<a<<" * "<<b<< " is: "<<product<< endl;
cout<< "The division of "<<a<<" / "<<b<< " is: "<<division<< endl;
cout<< "The remainder of "<<a<<" % "<<b<< " is: "<<remainder<< endl;

return 0;	
}
