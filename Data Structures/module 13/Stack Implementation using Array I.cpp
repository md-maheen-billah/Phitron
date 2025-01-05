#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl; // 30
    st.pop();
    cout << st.top() << endl; // 20
    st.pop();
    cout << st.top() << endl; // 10
    // however if we keep popping and pop out everything and try to print the top, we will get a runtime error
    // therefore we should first check if the stack is empty before printing
    st.pop();
    if (!st.empty())
    {
        cout << st.top() << endl; // nothing will be printed as stack is empty
    }
    // now if we try to implement pop again, we will face another error, therefore we should check whether a stack is empty before popping
    if (!st.empty())
    {
        st.pop(); // nothing will be popped as stack is empty
    }

    return 0;
}