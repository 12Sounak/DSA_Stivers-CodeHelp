// Insertion sort                                                                      DATE - 22.08.2023
// Time complexity (Worst Case)is O(n^2)
// Time Complexity (Best Case) is O(n)
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
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
    insertion_sort(arr,n);
    cout<<"\nArray After Selection Sort is applied :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/*

----The Output of the Above Code----
Enter the size of the Array :5

Enter the Array Elements :25
63
9
8
4

Array After Selection Sort is applied :4 8 9 25 63 

*/