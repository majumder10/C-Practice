#include<iostream>
using namespace std;

class student
{
    public :
    int id ;
    double cgpa;

    void display()
    {
        cout<<id<<"==="<<cgpa<<endl;

    }

    void setvalu(int x,double y)
    {
        id = x;
        cgpa =y;
    }

};
int main()
{
    student i;
    i.setvalu(222,3.55);
    i.display();


    student j;
    j.setvalu(244,3.85);
    j.display();
}