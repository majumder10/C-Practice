#include<iostream>
using namespace std;
class Account
{
    public:
    string name;
    double belence;
    int acc_id;

    void getdata()
    {
        cin>>name;
        cin>>belence;
        cin>>acc_id;
    }
    void putdata()
    {
        cout<<name<<endl;
        cout<<belence<<endl;
        cout<<acc_id<<endl;
    }
    void withdraw()
    {
        int withdraw_amount;
        cin>>withdraw_amount;
        cout<<"ENter The Amount :"<<withdraw_amount<<endl;
        if(belence>0 && withdraw_amount<=belence )
        {
            belence-=withdraw_amount;
        }
        else
        {
            cout<<"not found:";
        }
    }

};
int main()
{
    Account c;
    c.getdata();
    c.putdata();
    c.withdraw();
}