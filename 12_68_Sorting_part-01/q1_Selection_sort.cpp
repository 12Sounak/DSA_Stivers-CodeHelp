// Selection sort                                                                      DATE - 22.08.2023
// Time complexity is O(n^2)
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min = i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr,n);
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