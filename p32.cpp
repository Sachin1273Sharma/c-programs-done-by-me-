#include <bits/stdc++.h>
using namespace std;
void display(int n)
{
    if(n==0)
    {
        return;

    }
     display(n-1);
    if(n==100)
    {
        cout<<n;
    }
    else
    cout<<n<<",";

}
int main()
{
    cout<<"no from 1 to 100:"<<endl;
    display(100);

}