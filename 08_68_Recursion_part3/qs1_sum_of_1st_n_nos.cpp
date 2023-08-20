// Sum of 1st n numbers using Recursion using Parameterized method                              DATE - 15.08.23
#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    f(i-1,sum+i);

}
int main()
{
    int n;
    cout<<"\nEnter no of Times: ";
    cin>>n;
    f(n,0);
}