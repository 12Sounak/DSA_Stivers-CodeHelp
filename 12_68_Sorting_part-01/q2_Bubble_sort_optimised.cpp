// Bubble sort                                                                      DATE - 22.08.2023
// This code is optimise then the previous code as Here The TC is O(n)

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int didswap = 0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0)
        {
            break;
        }
        cout<<"\nruns :";                        //This helps to check how many times the outer loops runs to find the T.C
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


CASE 1: 

Enter the Array Elements :6
5
4
3
2
1

runs :
runs :
runs :
runs :
runs :
Array After Selection Sort is applied :1 2 3 4 5 6 



CASE 2:

Enter the Array Elements :1
2
3
4
5
6

Array After Selection Sort is applied :1 2 3 4 5 6 



*/