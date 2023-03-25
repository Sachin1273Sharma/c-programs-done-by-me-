/* write a program in cpp to accept a string and display the new string after reversing 
the characters of each word */
// sample input: Understanding Computer Science
//sample output:gnidnatsrednU retupmoS ecneicS
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string s="My name is sachin",ss="",w="",w1="";
   int i,j;
   int l,l1;
   char ch,ch1;
   int x,y,temp=0;
   cout<<"String is \t "<<s<<endl;
   s=s+" ";
   l=s.length();
   for(i=0;i<l;i++)
   {
    ch=s.at(i);
    if(ch!=' ')
    {
      ss=ss+ch; 
   }
   else
   {
    l1=ss.length();
    for(j=l1-1;j>=0;j--)
    {
       w=w+ss.at(j); 
    }
        w1=w1+w+" ";
        ss.erase();

   }

}
cout<<"String after reversing each word"<<endl<<w1;
}