// Sum of n digits using function method

#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n==0)
        return 0;
    return n+f(n-1);    
}
int main()
{
    int n;
    cout<<"\nEnter The number :";
    cin>>n;

    int z = f(n);
    cout<<"\nThe Sum is :"<<z;
}