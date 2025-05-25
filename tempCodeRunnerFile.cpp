#include<iostream>
using namespace std;
class temparatureConvert
{
    public :
    float converttemparature(float clesius)
    {
        return (clesius * 9.0/5.0)+32.0;
    }
    float converttemparature(float farenhight)
    {
        return (farenhight - 32) * 5.0 /9.0;
    }
};

int main()
{
    temparatureConvert tm;
    float c;
    float f;

    cin>>c;
    cout<<tm.converttemparature(c)<<endl;
    cin>>f;
    cout<<tm.converttemparature(f)<<endl;

    return 0;


}