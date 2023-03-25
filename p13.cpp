// sum of n no of odd no of natural numbers using friend class
#include <bits/stdc++.h>
using namespace std;
class sum
{
    private:
    int n;int s=0;
    public:
    void input()
    {
        cout<<"Enter n "<<endl;
        cin>>n;
    }
    public:
    friend class odd;
};
class odd
{
    public :
    int i,c=0;
    void summ(sum ob)
    {
        for(i=1;i>=0;i++)
        {
            if(i%2!=0)
            {
                cout<<"Odd number \t"<<i<<endl;
              ob.s=ob.s+i;  
              c++;

            }
            if(c==ob.n)
            {
                break;
            }
        }
    }
    void display(sum b)
    {
        cout<<"sum of odd numbers is "<<b.s;
    }
};
int main()
{
    sum o;
    o.input();
    odd a;
    a.summ(o);
    a.display(o);


}
