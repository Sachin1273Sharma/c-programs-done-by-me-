/* while typing a typist has created two or more consecutive blank spacees between the 
words of a sentence .Write a program in java to eliminate multiple blank space
between the words by single blank */
#include <iostream>
#include <string>
using namespace std;
class sachin
{
    public:
    string s,s1="";
    void input()
    {
        cout<<"Enter the String "<<endl;
        getline(cin,s);
    }
    void display()
    {
        cout<<"String is "<<endl<<s<<endl;
    }
    void removespace();

};
void sachin::removespace()
{
    int i,j;
    int l;
    l=s.length();
    for(i=0;i<l;i++)
    {
        char ch=s.at(i);
        if( s[i]==' ' && s[i-1]==' ')
        {
            continue;
        }
        s1=s1+ch;
    }
    cout<<"String after removing more than one space:::  "<<s1<<endl;
}
int main()
{
    sachin ob;
    ob.input();
    ob.display();
    ob.removespace();
}
