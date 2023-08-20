// factorial of a number using recursion

#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n<1)
        return 1;
    return n * f(n-1);    
}
int main()
{
    int n;
    cout<<"\nEnter the Number:";
    cin>>n;
    cout<<"\nThe Factorial is:"<<f(n);
}