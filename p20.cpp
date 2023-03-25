/* write a program to enete a 4 letter word . Display all the 
four letter combination such that no letter should be repeated in the 
output within each combination.
Sample Input:
PARK
Sample Output:
PAKR,PKAR,PRAK,APRK,ARPK,AKPR and so on.
*/
#include <iostream>
using namespace std;
class sachin
{
    public:
    string s;
    int len;
    void input();
    void length();
};
void sachin::input()
{
    cout<<"Enter a 4 letter word"<<endl;
    getline(cin,s);


}
void sachin::length()
{
 len=s.length();
 cout<<"Length is\t "<<len<<endl;
}
class combination:public sachin
{
    public:
    int i,j,k,l;
    void combo()
    {
        for(i=0;i<len;i++)
        {
            for(j=0;j<len;j++)
            {
                for(k=0;k<len;k++)
                {
                   for(l=0;l<len;l++)
                   {
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
                    {
                        cout<<s.at(i)<<s.at(j)<<s.at(k)<<s.at(l)<<endl;
                    }
                   }
                }
            }
            
        }
    }
};
int main()
{
    combination ob;
    ob.input();
    ob.length();
    ob.combo();
}