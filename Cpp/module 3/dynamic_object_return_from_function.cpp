#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll;  can also be written like this
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student *karim = new Student(1, 5, 4.97);
    return karim;
};

int main()
{
    Student rahim(40, 5, 3.3);
    Student *result = fun();
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << result->roll << " " << result->cls << " " << result->gpa << endl;

    return 0;
}