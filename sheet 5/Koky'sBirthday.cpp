#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{

    string S;
    cin >> S;

    int q;
    cin >> q;

    while (q--)
    {
        int type, x, y;
        cin >> type;
        if (type == 1)
        {
            cin >> x;
            S[x - 1] = toupper(S[x - 1]);
        }
        else if (type == 2)
        {
            cin >> x;
            S[x - 1] = tolower(S[x - 1]);
        }
        else
        {
            cin >> x >> y;
            swap(S[x - 1], S[y - 1]);
        }
    }

    cout << S << endl;

    return 0;
}