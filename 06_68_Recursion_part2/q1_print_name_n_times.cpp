#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i>n)
        return;
    cout<<"\nSounak";
    print(i+1,n);
}
int main()
{
    int n;
    cout<<"\nEnter Number of times :";
    cin>>n;

    print(1,n);
}