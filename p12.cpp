/*wap to inout and store n integers (n>0) in a single subscipted variable and print each no with 
its frequency, the output should contain number and its frequency in two different column 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements to be inputed"<<endl;
   cin>>n;
   int a[n];
    int b[1000][2];int x=0,p=0;
   int i,j;int c=0;int k;
  try
  {
    if(n<0)
    {
        throw n;
    }
    else
    {
        cout<<"Enter n elements"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                        c++;
                }
            }
            for(k=(i-1);k>=0;k--)
            { 
                if(a[k]==a[i])
                {
                   p=1; 
                }
            }
            if(p==0)
            {
            b[x][0]=a[i];

            b[x][1]=c;
            x++;
            }
            c=0;
            p=0;
        }
        cout<<"Number \t \t Frequency"<<endl;
        for(i=0;i<x;i++)
        {
            cout<<b[i][0]<<"\t \t"<<b[i][1]<<endl;
        }
        
    }
  }
  catch(int x)
  {
  cout<<"ERROR"<<"\t Exception is "<<x;
        
  }
  
  
   
  
   
  

   
   
   
   
    }