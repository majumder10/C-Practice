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
class c:public B
{
    public :
    int age ;
    void display3()
    {
        cout<<"Age :"<<age<<endl;
        //display1();
        display2();
    }

};
int main()
{
    c cp;
    cp.name ="Bishal";
    cp.id =111 ;
    cp.roll =2 ;
    cp.age = 23;
    cp.display3();
return 0;

}