#include<iostream>
using namespace std;

int x = 10;//global variable



int main()
{
   int x = 30;
   :: x = 20;

    cout<< ::x <<endl;
   //:: scope resolution

}