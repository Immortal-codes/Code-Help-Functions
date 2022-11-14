#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int power(int n,int m)
{
    int d=1;
    for (int i = 1; i <=m; i++)
    {
         d=d*n;
    }
    
    return d;
    
}




int main()
{
    int a=2;
    int b =3;

    int z=power(a,b);
    cout<<z;
    return 0;
}