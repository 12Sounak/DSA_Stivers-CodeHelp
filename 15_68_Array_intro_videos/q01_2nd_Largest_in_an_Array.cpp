//largest in an Array
#include<bits/stdc++.h>
using namespace std;
int main()
{
//	largest in an Array
/*
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int largest=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>largest)
		largest=arr[i];
	}
	cout<<largest;
	*/
//2nd largest in an Array
	int n;
	cout<<"\nEnter no of Array Elements :";
	cin>>n;
 	int arr[n];
	cout<<"\nEnter the Array Elements :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int largest=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
		largest=arr[i];
	}
	cout<<"largest is :"<<largest;
	int slargest=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>slargest&&arr[i]!=largest)
		slargest=arr[i];
	}
	cout<<"\n2nd largest is :"<<slargest;
}


/*
Output
Enter no of Array Elements :4

Enter the Array Elements :22
31
50
98
largest is :98
2nd largest is :50
*/