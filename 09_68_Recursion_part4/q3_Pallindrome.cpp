// Check an Array is Pallindrome or not using Recursion                                 DATE - 19th Aug 2023
// eg: "MADAM" is pallindrome

#include<bits/stdc++.h>
using namespace std;
bool pallindrome(int i,string &s)
{
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return pallindrome(i+1,s);
}
int main()
{
    string s="madam";
    cout<<pallindrome(0,s);
    
}