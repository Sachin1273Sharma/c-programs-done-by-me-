/* write a program in c++ to enter a string in a mixed case .Arrange all the letters of string such that all the 
lower case characters are followed by the upper case characters 
sample input:
Computer Science
Sample output:
omputerciencesCS
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string s;
    char ch;
    cout<<"Enter a sentence"<<endl;
    getline(cin,str);
    int l,i;
    l=str.length();
    for(i=0;i<l;i++)
    {
      ch=str.at(i);
      if(islower(ch))
      {
        s=s+ch;
      }  
        
    }
    for(i=0;i<l;i++)
    {
        ch=str.at(i);
        if(isupper(ch))
        {
          s=s+ ch; 
        }
    }
    cout<<"String after conversion \t"<<s;
    

}