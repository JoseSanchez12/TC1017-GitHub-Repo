#include <iostream>

using namespace std;

int x[3]={3,5,8};
int y[3]={7,6,2};
int suma, sumax, sumay;

int main()
{

for (int i=0; i<3; i++){
    sumax=x[i]+sumax;
    }

for (int i=0; i<3; i++){
    sumay=y[i]+sumay;
}
    suma=sumax+sumay;
    cout << suma;
    return 0;
}
