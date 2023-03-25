/* A string is given as 
   Purity of Mind is Essential
   write a program n Java to enterthe string. Count and display:
   1:The character with lowest ASCII code in lower case
   2:The character with highest ASCII code in lower case.
   3:The character with lowest ASCII code in upper case.
   4:The character with highest ASCIII code in upper case.
   */
  /*sample output
  The character with lowest ASCII code in lower case:a
  The character with highest ASCII code in lower case:y
  The character with lowest ASCII code in Upper case:E
  The character with highest ASCII code in upper case:P
  */
 #include <bits\stdc++.h>
 using namespace std;
 int main()
 {
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    int l=str.length();
    int i,k=0,k1=0;
    char llch,luch;
    char uuch,ulch;
    for(i=0;i<l;i++)
    {
        char ch=str.at(i);
        if(islower(ch))
        {
            if(k==0)
            {
                luch=ch;
               llch=ch;
                k++;
            }
            if(ch<llch)
            {
                
                llch=ch;
            }
            if(ch>luch)
            {
                luch=ch;
            }

        }
        else if(isupper(ch))
        {
          if(k1==0)
          {
            ulch=ch;
            uuch=ch;      
            k1++; 
          }  
          if(ch>uuch)
          {
            
            uuch=ch;

          }
          if(ch<ulch)
          {
            ulch=ch;
          }
        }
    }
    cout<<"The character with lowest ASCII code in lower case\t"<<llch<<endl;
  cout<<"The character with highest ASCII code in lower case \t"<<luch<<endl;
  cout<<"The character with lowest ASCII code in Upper case \t"<<ulch<<endl;
  cout<<"The character with highest ASCII code in upper case \t"<<uuch<<endl;

 }


