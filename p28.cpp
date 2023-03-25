
//Bank Mangement 
#include <bits/stdc++.h>
using namespace std;
class Bank
{
    public:
        string name;
        int accno;
        string atype;
        string branch;
        double balance=0.0;
    
        void getAccountDetails()
        {
            cout<<"\nEnter Customer Name:"<<"\n";
            cin>>name;
            cout<<"\nEnter Account number:"<<"\n";
            cin>>accno;
            cout<<"\nEnter Account Type:"<<"\n";
            cin>>atype;
            cout<<"\nEnter Branch:"<<"\n";
            cin>>branch;
        }

};
class Deposit:public Bank
{
    public:
        void adeposit()
        {
            float deposit1;
            cout<<"\nEnter the amount to be deposited:"<<endl;
            cin>>deposit1;
            balance= balance + deposit1;
            if(balance<1000)
                cout<<"\nPlease maintain minimum balance";
            else
                cout<<"\nAmount Deposited \n ";
        }
};
class Withdrawl:public Deposit
{
    public:
        void withdraw()
        {
            float withdraw1;
            cout<<"\nEnter the amount to be withdrawl \n";
            cin>>withdraw1;
            if(balance>withdraw1)
            {
                balance=balance-withdraw1;
                cout<<"\nAmount After withdrwal \n"<<balance;
            }
            else
                cout<<"\nInsufficient balance \n"<<endl;
        }
};
class statement:public Withdrawl
{
    public:
        void display()
    {
        cout<<"\nCustomer Name :"<<name;
        cout<<"\nAccount Number:"<<accno;
        cout<<"\nAccount type :"<<atype;
        cout<<"\nBranch : "<<branch;
        cout<<"\nBalance: "<<balance;
    }
};
int main()
{ 
   
    
    statement s1;
    int a;
    int i=1; 
 
   while(1)
   {
    cout<<"Welcome Sir/Madam"<<endl;
    cout<<"Customer NO:"<<" "<<i<<"\n \n";
    i++;
  int flag=1;

    while(flag)
    {
        cout<<"\n \nEnter your choice \n";
        cout<<"1:\tEnter account Details";
        cout<<"\n2:\tWITHDRAWL ";
        cout<<"\n3:\tDEPOSIT  ";
        cout<<"\n4:\tACCOUNT INFORMATION ";
        cout<<"\n5:\tEXIT \n ";
        cin>>a;
        switch(a)
        {
            case 1:
                s1.getAccountDetails();
             break;
            case 2:
                s1.withdraw();
                break;
            case 3:
                s1.adeposit();
                break;
            case 4:
                s1.display();
                break;
            case 5:

                flag=0;
                break;
            default:
                    cout<<"\nEnter valid choice";
        }
        
    }
   }
   return 0;
}