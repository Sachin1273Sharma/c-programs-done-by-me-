//To check whether string is palindrome or not 
#include <bits/stdc++.h>
using namespace std;
class sachin
{
    public:
    
    int checkpalindrome(string s,int l,int r)
    {
        if(l>=r)
        {
            return 1;
        }
        if(s.at(l)!=s.at(r))
        {
            return -1;
        }
        return (checkpalindrome(s,l+1,r-1));
    }
};

int main()
{
sachin a;
cout<<"Enter a string"<<endl;
string s;
getline(cin,s);
int r=s.length();
int x=a.checkpalindrome(s,0,r-1);
if(x==1)
{
    cout<<"String is palidrome"<<endl;
}
else if(x==-1)
{
    cout<<"String is not palindrome"<<endl;
}

}
