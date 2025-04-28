#include<iostream>
using namespace std;
class student
{
   
 public:
   int id;
   double cgpa;

};
int main()
{
     student Fahim,Prodip ;
     Fahim . id = 24103101;
     Fahim . cgpa = 3.65 ;

     cout<<Fahim.id <<"------"<<Fahim .cgpa<<endl;

     Prodip . id = 24103102;
     Prodip . cgpa = 3.68 ;
     cout<<Prodip.id <<"------"<<Prodip .cgpa<<endl;

}
