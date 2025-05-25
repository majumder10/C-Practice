#include <iostream>
using namespace std;

 class TemperatureConverter
{
   public:
     float convertTemperature(float celsius)
   {
       return (celsius * 9.0 / 5.0) + 32.0;
   }

 float convertTemperature(float fahrenheit, char scale)
    
       {  
          return (fahrenheit - 32.0) * 5.0 / 9.0;
      
       }
};

 int main()
 {
   TemperatureConverter converter;
   float tempC, tempF;

    cout << "Enter temperature in Celsius: ";
    cin >> tempC;
    cout << "In Fahrenheit: " << converter.convertTemperature(tempC) << " F" << endl;

    cout << "\nEnter temperature in Fahrenheit: ";
    cin >> tempF;
    cout << "In Celsius: " << converter.convertTemperature(tempF, 'F') << " C" << endl;
  
    return 0;
 }
