#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> letterCount;

    for (char c : s1)
    {
        if (c != ' ')
        {
            letterCount[c]++;
        }
    }

    bool pass = true;
    for (char c : s2)
    {
        if (c != ' ')
        {
            if (letterCount[c] > 0)
            {
                letterCount[c]--;
            }
            else
            {
                pass = false;
                break;
            }
        }
    }

    cout << (pass ? "YES" : "NO") << endl;
    return 0;
}