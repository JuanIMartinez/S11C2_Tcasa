#include <iostream>
using namespace std;

void primo (int n_1,int n_2);

int main()
{
    int n_1,n_2;
        cout << "numero inferior: ";
        cin >> n_1;
        cout << "numero superior: ";
        cin >> n_2;
        primo (n_1, n_2);
    return 0;
}

void primo (int n_1,int n_2)
{
    int a,c,i;
        for (i=n_1;i==n_2;i=i+1)
        {
            c=0;
            for (a=1;a==i;a=a+1)
            {
                if (i%a==0)
                {
                    c=c+1;
                }
            }
            if (c<=2)
            {
                std::cout<< i << std::endl;
            }
        }
}