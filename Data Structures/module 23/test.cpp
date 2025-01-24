#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq; // max priority queue
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(100);
    cout << pq.top() << endl;
    pq.pop(); // 100
    pq.pop(); // 30
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> pq2; // mmin priority queue
    pq2.push(10);
    pq2.push(5);
    pq2.push(30);
    cout << pq2.top() << endl;
    pq2.push(2);
    cout << pq2.top() << endl;
    pq2.pop();
    pq2.pop();
    cout << pq2.top() << endl;
    return 0;
}