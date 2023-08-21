// This is Hashing                                                                DATE - 20.08.23
/* Question - We have a array of Size 5
   Array is 1 3 2 1 3 
   No of Queries  - 5
   No of Times 1 appear?
   No of times 4 appears?
   No of times 2 appears?
   No of times 3 appears?
   No of times 12 appears?
   From the Given Array


    If the problem states the size of hash array act according to it here we are using 13.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the Size of the Array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Array Elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // pre-computer
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"\nEnter No of Queries :";
    cin>>q;
    while(q--)
    {
        int number;
        cout<<"\nEnter the Number U want to find how many time it appears :";
        cin>>number;
        // fetch
        cout<<"\nNo of times it appear :";
        cout<<hash[number] <<endl;
    }

}

/*
Here is the Input and Output of the Above Code
Enter the Size of the Array :5

Enter the Array Elements :1
2
1
3
2

Enter No of Queries :5

Enter the Number U want to find how many time it appears :1

No of times it appear :2

Enter the Number U want to find how many time it appears :4

No of times it appear :0

Enter the Number U want to find how many time it appears :2

No of times it appear :2

Enter the Number U want to find how many time it appears :12

No of times it appear :0

Enter the Number U want to find how many time it appears :

*/