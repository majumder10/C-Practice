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

};

int main()
{
     student Fahim,Prodip ;

     Fahim . id = 24103101;
     Fahim . cgpa = 3.67;
     Fahim.display();
     
     Prodip . id = 24103102;
     Prodip . cgpa = 3.68 ;
     Prodip . display();
    
}
