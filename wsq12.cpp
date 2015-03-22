#include <iostream>
using namespace std;

int main(){
	int a, b, mcd;

cout<<"Pon un numero porfavor: "; 
	cin >> a ;

cout<<"Pon el segundo numero porfavor: ";
	cin >> b ;

for (int i = 1; i<=a && i<=b; i++){

		if( a % i == 0 && b % i == 0 ){
	
			mcd = i;
	}
}

cout<<"El maximo comun divisor es: " << mcd << endl;

return 0;
}