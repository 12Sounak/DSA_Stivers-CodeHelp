// Reverse an Array using Recursion                                 DATE - 19th Aug 2023
// Here we will reverse an Array using recursion using 1 variables

#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int arr[],int n)
{
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);

}
int main()
{
    int n;
    cout<<"\nEnter the no of digits in Array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Array Elements :";
    for(int i=0;i<n;i++)  cin>>arr[i];
    reverse(0,arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}