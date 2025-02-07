#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int time[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> time[i];
    }

    int m;
    cin >> m;

    int tunnelStart[m], tunnelEnd[m];
    for (int i = 0; i < m; i++)
    {
        cin >> tunnelStart[i] >> tunnelEnd[i];
    }

    int prefixSum[n + 1];
    prefixSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + time[i];
    }

    int minTime = prefixSum[n];

    for (int i = 0; i < m; i++)
    {
        int start = tunnelStart[i];
        int end = tunnelEnd[i];

        int timeWithTunnel = prefixSum[start - 1] + (prefixSum[n] - prefixSum[end]);
        minTime = min(minTime, timeWithTunnel);
    }

    cout << minTime << endl;

    return 0;
}