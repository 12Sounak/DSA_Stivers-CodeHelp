// This is 06/62 take U forward
#include<bits/stdc++.h>
using namespace std;


/*
// Now this is a infinite Recursion in which stack overflow happens 
void print()
{
    cout<<1;
    print();
}
int main()
{
    print();
}
*/

// now, recursion requires a condition to stop the function call
// that condition is called base condition 
int cut=1;
void f()
{

    if(cut==6)                              //base condition
        return;
    cout<<cut<<endl;
    cut++;
    f();
}
int main()
{
    f();
}
