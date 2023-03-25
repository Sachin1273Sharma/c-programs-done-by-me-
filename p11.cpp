//inheritance sachin isc book page no 518 class 12
#include <iostream>
using namespace std;
class ISC_Scores
{
    public:
    int number[6][2];
   void iscscores()
    {
        int i;
        for(i=0;i<6;i++)
        {
           cout<<"Enter subject code"<<endl;
           cin>>number[i][0];
           cout<<"Enter subject marks"<<endl;
           cin>>number[i][1];
        }
    }
    int point(int sc)
    {
        int i,pt;
        for(i=1;i<=6;i++)
        {
            if(sc>=(100-i*10))
            {
             pt=i;
                break;
            }
        }
        return pt;
    }
};
class Bestfour:public ISC_Scores
{
    public:
    void bestsubjects()
    {
        int i,j;int total=0;
        for(i=0;i<6;i++)
        {
        total=total+point(number[i][1]);
        }
        cout<<"Total points obtaines \t"<<total<<endl;
        for(i=0;i<6;i++)
        {
            for(j=0;j<5;j++)
            {
                if(number[j][1]<number[j+1][1])
                {
                    int temp=number[j][1];
                    number[j][1]=number[j+1][1];
                    number[j+1][1]=temp;
                     int tmp=number[j][0];
                    number[j][0]=number[j+1][0];
                    number[j+1][0]=tmp;

                }
            }
        }
        cout<<"Top four marks"<<endl;
        for(i=0;i<4;i++)
        {
            cout<<"Marks \t"<<(i+1)<<" \t is "<< number[i][1]<<endl;
        }

    }

};
int main()
{
    Bestfour ob;
    cout<<"Enter marks of 6 subjects along with their subject code"<<endl;
    ob.iscscores();
    ob.bestsubjects();



}



