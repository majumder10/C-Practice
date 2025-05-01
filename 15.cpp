#include<iostream>
using namespace std;
int main()
{
    double fahrenheit, celsius;

    cout<<"Enter The fahrenheit  : ";
    cin>>fahrenheit;

    celsius=(fahrenheit - 32)/1.8;
    

    cout<<celsius<<endl;

    return 0;
}