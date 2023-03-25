/* sum of two complex numbers using c++*/
#include <bits/stdc++.h>
using namespace std;
class complexno
{
    int img,real;
    public:
    complexno(int r,int i)
    {
        real=r;
        img=i;
    }
    complexno operator +(complexno a)
     {
        complexno p(0,0);
        p.real=real+a.real;
        p.img=img+a.img;
        return p;


     }
     void show()
     {
        cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;
     }

};
int main()
{
    complexno ob1(5,4),ob2(10,4);
    cout<<"First object"<<endl;
    ob1.show();
    cout<<"Second object"<<endl;
    ob2.show();
    complexno ob3=ob1+ob2;
    cout<<"After addition of object 1 and 2"<<endl;
    ob3.show();
    return 0;
   
}