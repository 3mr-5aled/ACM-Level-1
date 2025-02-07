#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        pq.push(x);
    }

    long long minSum = 0;

    for (int i = 0; i < m; i++)
    {
        long long smallest = pq.top();
        minSum += smallest;
        pq.pop();

        pq.push(smallest * 2);
    }

    cout << minSum << endl;
    return 0;
}
