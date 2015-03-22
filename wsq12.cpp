#include <iostream>
#include <cmath>
using namespace std;

int MCD (int a, int b){

	int x = a , y = b , res;
	 do{
		 res = remainder(x,y);
		 if( res < 0 ){
		 res = res * -1;
}
		 x = y;
		 y = res;
} while(res != 0);
		return x;
}

int main(){
	float a, b;

cout<<"Pon un numero porfavor: "; 
	cin >> a ;

cout<<"Pon el segundo numero porfavor: ";
	cin >> b ;

cout<<"El maximo comun divisor es: " << MCD(a,b) << endl;

return 0;
}