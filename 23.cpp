#include<iostream>
using namespace std;

class A
{
    public :

    string  name;
    void display1()
    {
        cout<<"Name :"<<name<<endl;
    }

};
class B :public A
{
    public :
    int id,roll;
    void display2()
    {
        cout<<"Id :"<<id<<endl;
        cout<<"Roll :"<<roll<<endl;
        display1();

    }
};
class c:public A
{
    public :
    int age ;
    void display3()
    {
        cout<<"Age :"<<age<<endl;
        
    }

};
int main()
{
    B cp;
    cp.name ="Bishal";
    cp.id =111 ;
    cp.roll =2 ;
    cp.display2();
     
    c coo;
    coo.age = 23;
    coo.display3();
    
return 0;

}
