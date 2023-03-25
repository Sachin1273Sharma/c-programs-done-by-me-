/*A bank intends to design a program to display the denomination of an input 
amount up to 5 digits. The availabel denomination with the bank are of rupees 2000,500
,200,100,50,20,10 and 1 
DEsign a program to accept the amount from the user and display the break up in descendign order
of denominations.(ie preference should be given to the gighest denomination available) along with the total number of notes.
Also print the amount in word according to the digits
Example 1:
Input:
14836
Output:
One FourEight Three Six 
Denomination:
2000*7=14000
500*1=500
200*1=200
100*1=100
20*1=20
10*1=10
1*6=6
*/
 #include <iostream>
 using namespace std;
 class sachin
 {
    public:
    int amt;int a[5], c=0;
    string b[5];
    void input()
    {
        cout<<"Enter the amount(only upto 5 digit or upto thousands)"<<endl;
        cin>>amt;
    }

    void displayamout();
  
    void checknoofdigit();
    void denomination();
 };
 void sachin::displayamout()
 {
    cout<<"amount is amt \t"<<amt<<endl;
 }

 void sachin::checknoofdigit()
 {
    int t=amt;int k=0;int i;
    while(t!=0)
    {
       t=t/10;
        c++;
     
    }
    cout<<"No of the digits \t"<<c<<endl;
    try
    {
        if(c>5)
        {
            throw ;
        }
    }
    catch(...)
    {
        cout<<"Error you have transcended the limits"<<endl;
    }
    while(t>0)
    {
      int r=t%10; 
      a[k]=r;
      k++;
      t=t/10;
    }
    for(i=0;i<k;i++)
    {
        switch(a[i])
        {
            case 1: b[i]="one";
            break;
            case 2: b[i]="two";
            break;
            case 3: b[i]="three";
            break;
            case 4: b[i]="four";
            break;
            case 0:b[i]="zero";
            break;
            case 5:b[i]="five";
            break;
            case 6:b[i]="six";
            break;
            case 7:b[i]="seven";
            break;
            case 8:b[i]="eight";
            break;
            case 9: b[i]="nine";
            break;
            

        }
        for(i=k-1;i>=0;i--)
        {
            cout<<b[i]<<"\t";
        }
        cout<<endl;
    }


 }
 void sachin::denomination()
 {
    int t=amt;
   int n2000=t/2000;
   int r2000=t%2000;
    int n500=r2000/500;
    int r500=r2000%500;
    int n100=r500/100;
    int r100=r500%100;
    int n10=r100/10;
    int r10=r100%10;
    int n1=r10/1;
    cout<<"2000*\t"<<n2000<<endl;
    cout<<"500*\t"<<n500<<endl;
    cout<<"100*\t"<<n100<<endl;
    cout<<"10*\t"<<n10<<endl;
    cout<<"1*\t"<<n1<<endl;

 }

int main()
{
    sachin ob;
    ob.input();
    ob.checknoofdigit();
    ob.displayamout();
   
    ob.denomination();

}