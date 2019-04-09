#include <iostream>
using namespace std;

long factorial_n (int n);

int main()
{
   int n;
   cout << "numero para factorial: ";
   cin >> n;
   cout  << factorial_n(n) << endl;
   return 0;
}

long factorial_n(int n)
{
	if(n==0)
    {
    return 1;  
    } 
    
	return (n*factorial_n(n-1));
}
 