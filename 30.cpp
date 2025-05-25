#include <iostream>
using namespace std;
class Student
{
private:
int roll;
float marks[100];
public:
void input(int totalsubject)
{
cin >> roll;
for (int i = 0; i < totalsubject; i++)
{
cin >> marks[i];
}
}
void display(int totalSubject)
{
float sum = 0;
for (int i = 0; i < totalSubject; i++)
{
sum += marks[i];
}
float avg = sum / totalSubject;
cout << "Roll Number: " << roll << ", Average Marks: " << avg << endl;
}
};
int main()
{
int n;
cin >> n;
Student students[n];
int totalSubject;
cin >> totalSubject;
for (int i = 0; i < n; i++)
{
students[i].input(totalSubject);
}
cout << "\n--- Student Averages ---" << endl;
for (int i = 0; i < n; i++)
{
students[i].display(totalSubject);
}
return 0;
}

