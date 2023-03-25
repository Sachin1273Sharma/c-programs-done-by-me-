//pascal triangle
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,x=1,i,j,k;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            if(i==0 || k==0 )
            {
                x=1;
            }
            else
            {
                x=x*(i-k+1)/k;
            }
           cout<<x<<" ";
        }
         cout<<endl;
    }
}