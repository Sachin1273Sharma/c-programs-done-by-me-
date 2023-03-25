
/*
write a program in java to accept two strings .
Display the new string by taking each character of the first string from left to right and of the
second dtring form right to left .The letters should be taken alternatively form each string 
.Assume that the length of both the strings are same .
Sample Input:
String 1:HISTORY
String 2:SCIENCE
Sample Output:
HEICSNTEOIRCYS
*/
#include <bits/stdc++.h>
using namespace std; 
class sachin
{
    public:
    string s,s1,ns;
    sachin()
    {
        ns="";
    }
    int l,l1;
    void input();
    void len();


};
void sachin::input()
{
cout<<"Enter first string "<<endl;
getline(cin,s);
cout<<"Enter second string"<<endl;
getline(cin,s1);
}
void sachin::len()
{
    l=s.length();
    l1=s1.length();
    cout<<"Length of string \t"<<s<<"\t is "<<l<<endl;
    cout<<"Lenght of string \t"<<s1<<"\t is "<<l1<<endl;

}
class rahul:public sachin
{
    public:
    

    void newstring()
    {
        int i=0,k=l1-1;
        while(1)
        {
            char ch=s[i];
            if(ch!=' ')
            {
                ns=ns+ch;
            }
           char ch1=s1[k];
           if(ch1!=' ')
           {
            ns=ns+ch1;
           }
           i++;
           k--;
           if(i>=l&&k<=-1)   
           {
            break;
           }
        }
    }
    void display();
};
void rahul::display()
{
    cout<<"New String is "<<ns<<endl;
}
int main()
{
    sachin o;
    rahul ob;
    ob.input();
    ob.len();
    ob.newstring();
    ob.display();
}