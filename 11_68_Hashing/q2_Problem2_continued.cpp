// Here we are Doin character Hashing

/*

That is s = 'abcdabefc'
Now from Here if asked 
How many times a appear?
How many times b appear?
How many times z appear?
How many times e appear?
How many times f appear?


Here we dont know if there is upper case or not , so we'll use all 256 characters
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"\nEnter The String :";
    cin>>s;
    // pre compute
    int hash[256] = {0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }
    int q;
    cout<<"\nEnter No of Queries :";
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"\nEnter the character U want to Search :";
        cin>>c;
        // Fetch
        cout<<"\nThe No of Time it appeared is :"<<hash[c]<<endl;
    }
}


