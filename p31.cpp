#include <bits/stdc++.h>
using namespace std;
string str;
void powerset(string s,int i, string cur)
{
 if(i==s.length())
 {
    cout<<cur<<endl;
    return;
 }
 
 powerset(s,i+1,cur+s.at(i));
 return  powerset(s, i+1,cur);
 
}
int main()
{
   
    powerset("abc",0,"");
    return 0;

}