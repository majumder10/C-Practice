#include<iostream>
using namespace std;
class student
{
    
public :
   int id;
   double cgpa;

    void display()
    {
        cout<< id <<"-------" << cgpa <<endl;
    }
    void putdata(int x,double y)
    {
        id = x;
        cgpa = y;
    }

};

int main()
{
     student Fahim,Prodip ;

     
     Fahim.putdata(24103101,3.65);
     Fahim.display();
     
     
     Prodip . putdata(24103102,3.88);
     Prodip . display();
    
}
