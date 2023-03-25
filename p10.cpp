//wap to capatalize each word first letter in a sentence 

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str; string w=" ";string s=" ";string s1=" ";
    int i,j;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
   
    
    str=str+" ";
    int l=str.length();
    for(i=0;i<l;i++)
    {
        char ch=str.at(i);
        if(ch!=' ')
        {
            w=w+ch;
        }
        else
        {
            char ch1=w.at(0);
            char ch2=toupper(ch1);
            int l1=w.length();
            s=s+ch2;
            for(j=1;j<l1;j++)
            {
                s=s+w.at(j);
            }
            s1=s1+s;
            s=" ";
            w=" ";
        }
    }
    cout<<"Sentence after converting :::"<<"\t"<<s1;

}