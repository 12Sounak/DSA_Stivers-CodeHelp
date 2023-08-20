//03/62 - Stivers A2Z DSA course| DSA playlist                 DATE - 05/08/23

// Solve any patter QS - Trick Explained
/*
qs5> * * * * *
     * * * *
     * * *
     * * 
     * 

*/

#include<bits/stdc++.h>
using namespace std;
void patter3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"* ";
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