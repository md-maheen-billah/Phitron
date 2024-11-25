#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
    // void hello()
    // {
    //     cout << "Total marks of " << name << " is " << english + math << endl;
    // }
};

int main()
{
    Cricketer *dhoni = new Cricketer("India", 15);
    Cricketer *kohli = new Cricketer("India", 18);
    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey << endl;

    return 0;
}