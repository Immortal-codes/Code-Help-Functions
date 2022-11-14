#include<iostream>

using namespace std;

bool even(int k)
{
    if(k%2==0)
    return true;
    else
    return false;
}

int main()
{
    int n;
    cin>>n;
    int z=even(n);
    cout<<z;
}