// Here we are Doin character Hashing                                                       DATE - 20.08.23

/*

That is s = 'abcdabefc'
Now from Here if asked 
How many times a appear?
How many times b appear?
How many times z appear?
How many times e appear?
How many times f appear?


Here we have only smaller case letters so we'll use 26 size array
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"\nEnter The String :";
    cin>>s;
    // pre compute
    int hash[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
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
        cout<<"\nThe No of Time it appeared is :"<<hash[c-'a']<<endl;
    }
}


