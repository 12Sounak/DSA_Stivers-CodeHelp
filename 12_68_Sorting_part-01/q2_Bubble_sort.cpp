// Bubble sort                                                                      DATE - 22.08.2023
// The Time complexity is O(n^2)
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
}
int main()
{
    int n;
    cout<<"\nEnter the size of the Array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Array Elements :";
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    cout<<"\nArray After Selection Sort is applied :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/*

----The Output of the Above Code----



Enter the size of the Array :6

Enter the Array Elements :13
46
24
52
20
9

Array After Selection Sort is applied :9 13 20 24 46 52 
*/