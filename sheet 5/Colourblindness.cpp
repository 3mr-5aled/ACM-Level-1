#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        for (int i = 0; i < n; i++)
        {
            if ((s1[i] == 'G' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'G'))
            {
                cnt++;
            }
            else if (s1[i] == s2[i])
            {
                cnt++;
            }
        }

        if (cnt == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}