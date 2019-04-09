#include <iostream>
using namespace std;

int factorial_n (int n);

int main()
{
   int n;
   cout << "numero para factorial: ";
   cin >> n;
   cout  << factorial_n(n) << endl;
   return 0;
}

int factorial_n(int n)
{
   int i;
   long double factorial; 
   factorial=1;
   for(i=1;i<=n;i=i+1)
   {
       factorial = factorial * i;
   }
   return factorial;
}