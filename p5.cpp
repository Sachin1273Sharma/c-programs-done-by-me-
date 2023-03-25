#include <iostream>
using namespace std;
#include <string>
int main()
{
    string str,str2="";
    cout<<" \" Enter first string\" "<<endl;
    getline(cin,str);
    
    int i; 
    for(i=0;i<str.length();i++)
    {
        char ch=str.at(i);
        if(isupper(ch))
        {
            ch=ch+32;
        }
        str2=str2+ch;
    }
    cout<<"String after converting all the characters to lowercase"<<endl;
    cout<<str2;

}