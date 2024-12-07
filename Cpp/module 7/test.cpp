#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int english_marks;
};

bool cmp(Student l, Student r)
{
    return l.english_marks == r.english_marks ? l.math_marks == r.math_marks ? l.id < r.id : l.math_marks > r.math_marks : l.english_marks > r.english_marks;
};

int main()
{
    int N;
    cin >> N;
    Student a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].english_marks;
    }
    sort(a, a + N, cmp);
    for (int i = 0; i < N; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
    }
    return 0;
}