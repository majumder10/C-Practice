#include<iostream>
using namespace std;

class preson
{
    public :
    int age;
    string name;

    void display1()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
    }
};
class student : public preson
{
    public :
    int id;
    int roll;

    void display2()
    {
        cout<<"Id :"<<id<<endl;
        cout<<"Roll :"<<roll<<endl;
        display1();
    }



};
int main()
{
    student b;
    b.id = 23333;
    b.name = "Bishal";
    b.roll =34;
    b.age = 21;
    b.display2();
    return 0;
}