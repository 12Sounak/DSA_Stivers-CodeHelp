#include<bits/stdc++.h>
using namespace std;
void f(int i , int n)
{
    if(i<1)
        return;
    cout<<i<<" ";
    f(i-1,n);
}
int main()
{
    int n;
    cout<<"\nEnter No of terms:";
    cin>>n;

    f(n,n);
}