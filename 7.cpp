#include<iostream>
using namespace std;

int x = 10;//global variable

void display()
{
    cout<<"Inside the display function x = "<< x <<endl;
}

int main()
{
    cout<<"Inside the display function x = "<< x <<endl;
    display();
}