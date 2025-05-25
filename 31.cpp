#include<iostream>
using namespace std;

class parkingsolt
{
    public:
    int solotnumber;
    bool isoccupied;

    parkingsolt(int a)
    {
        solotnumber=a;
        isoccupied=false;
    }

    void markoccupied()
    {
        isoccupied=true;
    }
    void display()
    {
       cout<<solotnumber;
       if(isoccupied)
       {
        cout<<"occupied";
       }
       else
       {
        cout<<"Empty";
       }
    }
};
    int main()
    {
        parkingsolt pk(100) ;
        pk.display();
        pk.markoccupied();
        //pk.display();
    }


