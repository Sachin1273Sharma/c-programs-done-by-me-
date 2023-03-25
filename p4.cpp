#include <iostream>

using namespace std;
class sachin
{
    public:
    string s,s1;
    sachin()
    {
        s="";
        s1="";
    }
    sachin(string str,string str1)
    { 
        s=str;
        s1=str1;
    }
    void concat()
    {
        string concatt=s+s1;
        cout<<"concated string is "<<endl<<concatt<<endl;
    }
    void equal1()
    {
        if(s.compare(s1)==0)
        {
            cout<<"both string are equal"<<endl;
        }
        else
        {
            cout<<" both string are not equal"<<endl;
        }
    }
    void checkequal()
    {
       int l,l1; int c=0; 
        l=s.length();
        l1=s1.length();
        if(l==l1)
        {
            for(int i=0;i<l;i++)
            {
                if (s.at(i)==s1.at(i))
                {
                     c=c+1;
                }
            }
            if(c==l)
            {
                cout<<"string are equal"<<endl;
            }

        }
        else
        {
            cout<<"string are not equal"<<endl;
        }
        
        

    }




};
int main()
{
  
    int ch;
    string a,b;
    cout<<"Enter 2 strings "<<endl;
    getline(cin,a);
    getline(cin,b);
     sachin ob(a,b);
    cout<<"enter 1 to check equal using compare functon "<<endl;
    cout<<"Enter 2 to check equal using manual method "<<endl;
    cout<<"Enter your choice 1 or 2"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        ob.equal1();
        break;
        case 2:
        ob.checkequal();
        break;
        default:
        cout<<"Wrong choice "<<endl;

    }
}
