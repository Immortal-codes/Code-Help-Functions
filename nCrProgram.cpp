#include<iostream>

using namespace std;


int factorial(int n)
{

    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;


    
}

int ncr(int n,int r)
{
    int num=factorial(n);

    int denom=factorial(r)*factorial(n-r);

    return num/denom;
}


int main()
{
    int n=5;
    int r=2;

    int z=factorial(n);
    int p=ncr(n,r);
    cout <<" Answer is " << ncr(n,r) << endl;

    cout<<z;
}