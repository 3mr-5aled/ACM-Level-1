#include <iostream>
#include <deque>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<string> dq;
    unordered_set<string> chatSet;

    while (n--)
    {
        string s;
        cin >> s;
        if (chatSet.find(s) != chatSet.end())
        {
            for (auto it = dq.begin(); it != dq.end(); it++)
            {
                if (*it == s)
                {
                    dq.erase(it);
                    break;
                }
            }
        }
        else
        {
            chatSet.insert(s);
        }
        dq.push_front(s);
    }

    for (auto name : dq)
    {
        cout << name << endl;
    }

    return 0;
}