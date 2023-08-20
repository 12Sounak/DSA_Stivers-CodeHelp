//03/62 - Stivers A2Z DSA course| DSA playlist                 DATE - 04/08/23

// Solve any patter QS - Trick Explained
/*
qs1> ****
	 ****
	 ****
	 ****
*/	 

/*
#include<bits/stdc++.h>
using namespace std;
void print(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"\nEnter the value :";
	cin>>n;
	print(n);
}
*/

// we are writing the same piece of code as above but using test cases in the main function 
#include<bits/stdc++.h>
using namespace std;
void print(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}
int main()
{
	int t;
	cout<<"\nEnter the test cases :";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		print(n);
	}
}