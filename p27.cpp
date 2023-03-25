/* pure virtual function*/
#include <bits/stdc++.h>
using namespace std;


class sachin /*abstract base class:jo class me pure virtual function ko declare krte hain usse abstract class bolte hain */ 
{
    protected:
    float f,f1;
    public:
    void getdata()
    {
        cout<<"Enter the values of length and breadth"<<"\n";
        cin>>f;
        cin>>f1;
    }
    virtual float area()=0;
};
/*abstract class are only used for inheritance 
purpose as we cannot create object of abstract class*/

class triangle:public sachin 
{
    public:
    virtual float area()
    {
        return 0.5*f*f1;
    }

};
class rectangle:public sachin
{
    public:
    virtual float area()
    {
        return f*f1;
    }
};
int  main()
{
    triangle a;
    a.getdata();
    cout<<"area of triangle \t"<<a.area()<<endl;
 rectangle r;
 r.getdata();
 cout<<"area of rectangle \t"<<r.area()<<endl;
}
