#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    long long strength[10000];
    long long killerCount[10000] = {0};

    for (int i = 0; i < N; i++)
    {
        cin >> strength[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (strength[i] > strength[j])
            {
                killerCount[i]++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << killerCount[i]<<" ";
    }

    return 0;
}
