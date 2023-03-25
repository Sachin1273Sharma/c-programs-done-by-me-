//lcm of two numbers using recursion
#include <iostream>
using namespace std;
int lcm(int a,int b,int x)
{
if(x%a==0 && x%b==0)
{
    return x;
}
return lcm(a,b,x+1);
}
int main()
{
    int a,b,p;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        p=a;
    }
    else
    {
        p=b;
    }
    cout<<"Lcm of a and b is"<<endl;
    cout<<lcm(a,b,p);
}