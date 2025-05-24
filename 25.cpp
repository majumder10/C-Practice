#include<iostream>
using namespace std;
class Car 
{
    public:
    string make;
    string model;
    int year;
    int mileage;



void GetData()
{
    cin>>make;
    cin>>model;
    cin>>year;
    cin>>mileage;

}


void putdata()
{
    cout<<"make: "<<make<<endl;
    cout<<"model: "<<model<<endl;
    cout<<"year: "<<year<<endl;
    cout<<"mileage: "<<mileage<<endl;
}
void UpdateMileage(int addmileage)
{
    mileage+=addmileage;
}
void luxury()
{
    if(make=="BMW" || make=="Audi")
    {
        cout<<"lux"<<endl;

    }
    else{
        cout<<"not lux car"<<endl;
    }
}


};
int main()
{
    Car  C ;
    C.GetData();
    C.UpdateMileage(100);
    C.luxury();
    C.putdata();
}