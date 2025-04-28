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
    student(int x , double y)
    {
         id = x;
         cgpa = y;

    }

};

int main()
{
     student Fahim(24103101 , 3.79); 
     Fahim.display();
     
    student Prodip(24103102,3.78);
     Prodip . display();
    
}
