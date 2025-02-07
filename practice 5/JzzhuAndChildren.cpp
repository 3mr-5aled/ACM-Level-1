#include <iostream>
#include <queue>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    queue<pair<int, int>> children;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        children.push({i, a});
    }
    int lastChild = 0;
    while (!children.empty())
    {
        auto child = children.front();
        children.pop();

        if (child.second > m)
        {
            child.second -= m;
            children.push(child);
        }
        else
        {
            lastChild = child.first;
        }
    }

    cout << lastChild << endl;

    return 0;
}