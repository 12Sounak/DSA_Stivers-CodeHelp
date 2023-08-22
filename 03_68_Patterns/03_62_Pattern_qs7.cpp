//03/62 - Stivers A2Z DSA course| DSA playlist                 DATE - 06/08/23

// Solve any patter QS - Trick Explained
/*
qs6>         *
            ***
           *****
          *******
         *********

*/
#include<bits/stdc++.h>
using namespace std;
void pattern7(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        // star
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }

        // space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern7(n);
    }
}
