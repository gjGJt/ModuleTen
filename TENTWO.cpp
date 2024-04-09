#include <iostream>

using namespace std;

//recursive function
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}


int main() {
   int x , i=0;
   //user input
   cout << "Enter the number of terms: ";
   cin >> x;
   cout << "Fibonnaci Series : ";
   //output
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}


