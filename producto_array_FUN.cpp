#include <iostream>
using namespace std;

void producto (int arr_1[5], int arr_2[5]);
void punto (int arr_1[5], int arr_2[5]);


int main()
{  
    
   int arr_1[]={1,2,3,4,5};
   int arr_2[]={10,20,30,40,50};
   
   producto(arr_1,arr_2);
   punto(arr_1,arr_2);
    
    
    
   return 0;
}

void producto (int arr_1[], int arr_2[])
{
   int i;
   cout << "producto: [";
   
   for(i=0;i<=4;i=i+1)
   {
    cout  << arr_1[i]*arr_2[i]<<" ";
   }
    
   cout << "]" << endl;
}

void punto (int arr_1[5], int arr_2[5])
{
   int i,n=0;
   cout << "producto punto: ";
   
   for(i=0;i<=4;i=i+1)
   {
    n=n+arr_1[i]*arr_2[i];
   }
    
   cout << n << endl;
}
