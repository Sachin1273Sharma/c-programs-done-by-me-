/*copy constructor*/
#include <iostream>
#include <string>
using namespace std;

class sachin
{ 
    public:
    string s;
    sachin()
    {
        s="";
    }
    sachin(string ss)
    {
        s=ss;
    }
    sachin(sachin &ob)
    {
        s=ob.s;
    }
  

};
int main()
{
   
     sachin ob1("my   name   is   sach");
   sachin ob2=ob1;
   cout<<"Second object value::\t"<<ob2.s<<endl;
}