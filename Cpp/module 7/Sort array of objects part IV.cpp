#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

// longer steps
// bool cmp(Student l, Student r)
// {
//     if (l.marks > r.marks)
//     {
//         return true;
//     }
//     else if (l.marks < r.marks)
//     {
//         return false;
//     }
//     else
//     {
//         if (l.roll < r.roll)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// shorter steps
// bool cmp(Student l, Student r)
// {
//     if (l.marks == r.marks)
//     {
//         return l.roll < r.roll;
//     }
//     else
//     {
//         return l.marks > r.marks;
//     }
// };

// even shorter
bool cmp(Student l, Student r)
{
    return l.marks == r.marks ? l.roll < r.roll : l.marks > r.marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    Student mn;
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}