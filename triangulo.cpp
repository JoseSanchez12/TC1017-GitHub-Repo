#include <iostream>
#include <cmath>
using namespace std;

void triangulo(int x){
int z=1;
string a = "T";

while(z<=x){
		for(int i = 1; i <= z ; i++ ){
			cout << a;
}
		cout<<endl;
			z++;
}
while(z>=0){
		for(int i = 1 ; i <= z ; i++ ){
			cout << a;
}
		cout<<endl;
			z--;
	}
}

int main(){
	int a;

cout<<"Dime el tamaño del triangulo: ";
cin >> a;

		triangulo(a);

return 0;
}