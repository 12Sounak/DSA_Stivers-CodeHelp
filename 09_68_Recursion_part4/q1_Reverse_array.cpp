// Reverse an Array using Recursion                                 DATE - 19th Aug 2023
// Here we will reverse an Array using recursion using 2 variables

#include<bits/stdc++.h>
using namespace std;

void reverse(int l,int arr[],int r)
{
    if(l>=r) return;

    swap(arr[l],arr[r]);
    reverse(l+1,arr,r-1);

}
int main()
{
    int n;
    cout<<"\nEnter the no of digits in Array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Array Elements :";
    for(int i=0;i<n;i++)  cin>>arr[i];
    reverse(0,arr,n-1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}