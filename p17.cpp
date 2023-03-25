/*write a program in Java to accept a string . Arrange 
all the letters of the string in alphabetical order.Now insert the missng letters
 in the sorted string to complete all the letters between first and last characters o
 of the string.*/
 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
    string str;char ch;string s="", t="";
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    int l=str.length();
    int i;
    for(i=0;i<l;i++)
    {
        ch=tolower(str.at(i));
        s=s+ch;

    }
    cout<<"string is "<<s<<endl;
    for(i=0;i<(l-1);i++)
    {
      char ch1=s.at(i);
      char ch2=s.at(i+1);
      if(ch1==ch2)
      {
        continue;
      }
      t=t+ch1;
      for(char c=ch1+1;c<ch2;c++)
      {
        t=t+c;
      }
    }
    cout<<"sorted string \t"<<t;

 }