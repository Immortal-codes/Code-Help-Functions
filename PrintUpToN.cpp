#include<iostream>

using namespace std;

int count(int m)
{ int k=0;
    for (int i = 1; i <=m; i++)
    {
         k=k+i;
    }
   return k;
}


int main()
{
    int n;
    cin>>n;

    int z=count(n);
    cout<<z;
}