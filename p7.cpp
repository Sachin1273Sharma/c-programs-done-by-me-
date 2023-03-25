//wap to ]reverse a string in c++
#include <iostream>
using namespace std;
#include <string>
string reverse(string s)
{
    int i;
    string str="";
    int l=s.length();
    for(i=l-1;i>=0;i--)
    {
        str=str+s.at(i);
    }
    return str;

}
int main()
{
   string str;
    cout<<"ENTER A STRING "<<endl;
   getline(cin,str);
   cout<<"String is "<<endl<<str;
   string ss=reverse(str);
   cout<<"Reverse of string is "<<endl<<ss;
   

}