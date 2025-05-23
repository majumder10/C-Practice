#include<iostream>
using namespace std;

class student
{
    public :
    int id;
    double cgpa;

    void display()
    {
        cout<<id<<"-------"<<cgpa<<endl;
    }

    student(int x, double y)//using constructor
    {
        id = x;
        cgpa = y;

    }
    student()
    {
        cout<<"difault consturctor :" <<endl ;
    }

};

int main()
{
    student ob;
    student i(222,444);

    i.display();


    return 0;
}