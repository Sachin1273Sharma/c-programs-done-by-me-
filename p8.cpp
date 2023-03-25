#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    cout<<"Enter no of elements to be entered "<<endl;
    int n;
    cin>>n;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        cout<<"Memory not allocated";
    }
    else
    {
        int i,j;
        cout<<"ENTER "<<n<<"Elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>*(ptr+i);
        }
        cout<<"Array Elements are"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<*(ptr+i)<<endl;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
            if(*(ptr+j)>*(ptr+j+1))
            {
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;

            }
            }
        }
            cout<<"Array after sorted in ascending order"<<endl;
            for(i=0;i<n;i++)
            {
                cout<<*(ptr+i)<<endl;
            }
            free(ptr);



            
        }
    }

