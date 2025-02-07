#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> league;

    for (int i = 0; i < n; ++i)
    {
        string team;
        char state;
        cin >> team >> state;

        int points;
        if (state == 'W')
        {
            points = 3;
        }
        else if (state == 'D')
        {
            points = 1;
        }
        else
        {
            points = 0;
        }

        league[team] += points;
    }

    cout << league.size() << endl;
    for (auto tm : league)
    {
        cout << tm.first << " " << tm.second << endl;
    }

    return 0;
}