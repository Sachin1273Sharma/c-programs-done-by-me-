//convert lower case characters to uppercase characters
#include <iostream>
using namespace std;
#include <string>
#define lower(ch) islower(ch)
int main()
{
    string str,str2="";
    cout<<"Enter a String "<<endl;
    getline(cin,str);

    int l=str.length();
    for(int i=0;i<l;i++)
    {
        char ch=str.at(i);
        if(lower(ch))
        {
         ch=toupper(ch);
        }
        str2=str2+ch;
    }
    cout<<"String after converting to upper case "<<endl<<str2;
}