/* operator overloading

syntax:
[return datatype] operator symbol(arg list)
{
    statement;
}
*/
/* overloading + operator
#include <bits/stdc++.h>
using namespace std;
class test
{
    public:
    char st[100];
    public:
    void read()
    {
        cout<<"Enter the string \n"<<endl;
        cin>>st;
    }
    void show()
    {
        cout<<"string is "<<st<<endl;
    }
    test operator +(test b)
    {
        test c;
        strcpy(c.st,st);
        strcpy(c.st," ");
        strcpy(c.st,b.st);
        return c;
    }
};
int main()
{
    test t1,t2,t3;
    t1.read();
    t2.read();
    t3=t1+t3;
    t3.show();
    return 0;

}

#include <iostream>
using namespace std;
class test
{
    int a;
    public:
    test()
    {
        a=0;
    }
    void operator ++()
    {
        ++a;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }


};
int main()
{
    test t;
    ++t;
    t.show();
    ++t;
    ++t;
    t.show();

}
*/
