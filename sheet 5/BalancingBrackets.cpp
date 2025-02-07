#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, unOpened = 0;
        cin >> n;
        string s;
        cin >> s;
        stack<char> stk;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                stk.push('(');
            }
            else
            {
                if (!stk.empty())
                {
                    stk.pop();
                }
                else
                {
                    unOpened++;
                }
            }
        }

        int unClosed = stk.size();

        int total = unClosed + unOpened;

        cout << total << endl;
    }

    return 0;
}