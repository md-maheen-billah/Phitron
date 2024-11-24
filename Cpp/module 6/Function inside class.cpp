#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int english;
    int math;
    Student(string name, int english, int math)
    {
        this->name = name;
        this->english = english;
        this->math = math;
    }
    void hello()
    {
        cout << "Total marks of " << name << " is " << english + math << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 10, 10);
    Student rakib("Rakib Khan", 10, 8);

    sakib.hello();
    rakib.hello();

    return 0;
}