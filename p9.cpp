
//Program to find ugly number between a to b
#include <iostream>
using namespace std;
class sachin
{ public:
int a,b;
void input()
{
    cout<<"Enter the values of A and B"<<endl;
    cin>>a>>b;
}


};
class ayush:public sachin
{
    public:
int i;
void ugly()
{
for(i=a;i<=b;i++)
{
int t=i;int c=0;
while(t!=1)
{
    if(t%5==0)
    {
        t=t/5;
    }
    else if(t%3==0)
    {
        t=t/3;
    }
    else if(t%2==0)
    {
        t=t/2;
    }
    else
    {
    c=1;
    break;
    }
    
}
if(c==0)
{
    cout<<"UGLY NUMBER= "<<i<<"\t";
}
}
}
};
int main()
{
    ayush ob;
    ob.input();
    ob.ugly();

}