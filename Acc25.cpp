#include<iostream>
using namespace std;

class Account{
    
    private:
    
    int balece;
    
    public:
    string name;
    int acc_id;

    void getInput(){
        cin>>name;
        cin>>acc_id;
        cin>>balece;
    }
    void Deposit(){
        int deposit_amount;
        cout<<"Enter your Deposit Amount"<<endl;
        cin>>deposit_amount;
        if(deposit_amount>0){
            balece+=deposit_amount;
        }
        else{
            cout<<"Not delide input"<<endl;
        }
    }
    void Withdraw(){
        int Withdraw_amout;
        cout<<"Enter your Withdraw Amount"<<endl;
        cin>>Withdraw_amout;
        if(balece>0 && Withdraw_amout<=balece){
            balece-=Withdraw_amout;
        }
        else{
            cout<<"Taka nai phokirni"<<endl;
        }
    }
    void getOutput(){
        cout<<"Show courrent Balnce"<<endl;
        cout<<name<<endl;
        cout<<acc_id<<endl;
        cout<<balece<<endl;
    }
};
int main(){
    Account a;
    a.getInput();
    a.getOutput();
    a.Deposit();
    a.Withdraw();
    a.getOutput();
}