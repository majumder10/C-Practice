#include <iostream>
using namespace std;
class employe
{
    public:
    string name;
    int selary;
    int date;


    void getdata()
    {
        cin>>name;
        cin>>selary;
        cin>>date;
    }
    void putdata()
    {
        cout<<name<<endl;
        cout<<selary<<endl;
        cout<<date<<endl;

    }
    
};
int main()
{
    int n,i;
    cin>>n;
    employe emp[n];

    for(i=0;i<n;i++)
    {
        emp[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        emp[i].putdata();
    }
}
