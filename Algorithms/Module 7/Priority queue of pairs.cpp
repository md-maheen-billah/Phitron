#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq; this will prioritize maximum value
    priority_queue<int, vector<int>, greater<int>> pq; // this is a normal priority queue which prioritize minimum value
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq2;

    pq2.push({10, 1});
    pq2.push({5, 2});

    cout << pq2.top().first << endl;

    return 0;
}