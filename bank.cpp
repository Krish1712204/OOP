#include<iostream>
using namespace std;
class bank
{
    public:
    char  name[20];
    int depo_amt,with_amt,balance;
    long int acc_no;

    void assign()
    {
        cout<<"enter the name of acc holder:"<<endl;
        cin>>name;
        cout<<"enter acc number :"<<endl;
        cin>>acc_no;
        cout<<"enter main balance:"<<endl;
        cin>>balance;
    }

    void deposit()
    {
        cout<<"enter the amount you want to deposit:"<<endl;
        cin>>depo_amt;
        balance=balance+depo_amt;
        cout<<"total balance is:"<<balance<<endl;
    }

    void withdraw()
    {
        cout<<"enter amount you want to withdraw:"<<endl;
        cin>>with_amt;
        if(with_amt<=balance)
        {
            balance=balance-with_amt;
            cout<<"available balance is:"<<balance;
        }
        else{
            cout<<"insufficient balance"<<endl;
        }
    }

    void display()
    {
        cout<<"account holder name is:"<<name<<endl;
        cout<<"account number is:"<<acc_no<<endl;
        cout<<"account balance is:"<<balance<<endl;
    }
};

int main()
{
    bank b;
    int ch,choice;

do
{
    cout<<"MENU\n""1.assign\n""2.deposit amount\n""3.withdraw amount\n""4.display acc info\n"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
        b.assign();
        break;
        case 2:
        b.deposit();
        break;
        case 3:
        b.withdraw();
        break;
        case 4:
        b.display();
        break;
        default:
        cout<<"invalid choice";
        break;
    }
    cout<<"\ndo you want to continue(0/1):"<<endl;
    cin>>ch;
} while (ch==1);

    return 0;
}