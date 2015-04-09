#include <iostream>
using namespace std;
 
int Fibonacci(int a){
int next;
int x1=0, x2=1;
   for(int i = 0; i<a ; i++ )
   {
      if( i <= 0 ){
         next = i;
      }
      else
      {
         next = x1 + x2;
         x1 = x2;
         x2 = next;
      }
   }
   return next;
}
int main(){
   int a;
 
   cout << "Enter the number of terms of Fibonacci series you want" << endl;
   cin >> a;
 
   cout << "First " << a << " terms of Fibonacci series are : "<< Fibonacci(a) << endl;

   return 0;
}