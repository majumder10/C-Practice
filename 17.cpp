#include<iostream>
using namespace std;

class student
{
  public :
  string name;
  int batch;
  int id;
  int roll;
  double cgpa;

  void getdata()
  {
    cout<<"Name : ";
    cin >> name;
    cout<<"Batch : ";
    cin>>batch;
    cout<<"id : ";
    cin>>id;
    cout<<"roll : ";
    cin>>roll;
    cout<<"cgpa : ";
    cin>>cgpa;

  }

    void putdata()
    {
        cout<<name<<endl;
        cout<<batch<<endl;
        cout<<id<<endl;
        cout<<roll<<endl;
        cout<<cgpa<<endl;

    }
    /*void setvalue(int x,int y)
    {
        x = id;
        y = roll;
    }
    */
};
int main()
{
    student i;
    i.getdata();
    i.putdata();
    //i.setvalue(200,250);

    student j;
    j.getdata();
    j.putdata();
    //i.setvalue(50,100);

    return 0;
}