#include<iostream>
using namespace std;

class student
{
  public :
   int id;
   double cgpa;

};

int main()
{
    student Anik;
    Anik.id=2222333;
    Anik.cgpa=3.88;

    cout<<Anik.id<<"--------"<<Anik.cgpa<<endl;
    return 0;

}