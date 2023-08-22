//03/62 - Stivers A2Z DSA course| DSA playlist                 DATE - 05/08/23

// Solve any patter QS - Trick Explained
/*
qs6> 12345
     1234
     123
     12
     1

*/

#include<bits/stdc++.h>
using namespace std;
void patter3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
int main()
{
    int t;
    cout<<"\nEnter no of test case :";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        patter3(n);
    }
}