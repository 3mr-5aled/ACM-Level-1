#include <iostream>
using namespace std;

int main()
{
    string recipe;
    cin >> recipe;

    int NumOfRecipe[3] = {0};
    for (char piece : recipe)
    {
        if (piece == 'B')
        {
            NumOfRecipe[0]++;
        }
        else if (piece == 'S')
        {
            NumOfRecipe[1]++;
        }
        else if (piece == 'C')
        {
            NumOfRecipe[2]++;
        }
    }

    int N[3], P[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> P[i];
    }

    long long r;
    cin >> r;

    long long hamburgers = 0;

    while (true)
    {
        long long cost = 0;
        for (int i = 0; i < 3; i++)
        {
            long long needed = NumOfRecipe[i] * (hamburgers + 1);
            if (needed > N[i])
            {
                cost += (needed - N[i]) * P[i];
            }
        }
        if (cost <= r)
        {
            hamburgers++;
        }
        else
        {
            break;
        }
    }

    cout << hamburgers << endl;

    return 0;
}