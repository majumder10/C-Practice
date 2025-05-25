#include<iostream>
using namespace std;

class car
{
    public :
    string make;
    string model;
    int year;
    int millege;

    void getdata()
    {
        cin>>make;
        cin>>model;
        cin>>year;
        cin>>millege;
    }
    void putdata()
    {
        cout<<make<<endl;
        cout<<model<<endl;
        cout<<year<<endl;
        cout<<millege<<endl;
    }

    void car_millage()
    {
        int add_millege;

        millege+=add_millege;

    }
    void luxury()
    {
        if(make =="BMW" || make=="HONDA")
        {
            cout<<"luxury ";   
        }
        else
        {
            cout<<"not luxury";
        }
    }

};
int main ()
    {
        car c;
        c.getdata();
        c.putdata();
        c.car_millage();
        c.luxury();

    }