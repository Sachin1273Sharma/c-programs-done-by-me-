//Check number is prime or not using recursion 
#include <bits/stdc++.h>
using namespace std;
bool prime(int n,int i)
{
 if(i==n)
 {
    return true;
 } 
 else if(n%i==0)
 {
    return false;
 } 
  return prime(n,i+1); 
} 
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"not a prime number"<<endl;
    }
    else
    {
   bool x=prime(n,2);
   if(x == true)
   {
    cout<<"It is a prime number"<<endl;
   }
   else if(x==false)
   {
    cout<<"It is not a prime number"<<endl;
   }
    }
    
return 0;


}