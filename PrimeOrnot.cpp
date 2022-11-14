#include<iostream>

using namespace std;

bool prime(int k)
{
    if(k%2!=0&&k%3!=0)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int z=prime(n);
    cout<<z;
}