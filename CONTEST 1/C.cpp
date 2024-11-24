#include <iostream>
using namespace std;

int main()
{

    char a, opreator, b;
    cin >> a >> opreator >> b;

    if (opreator == '>')
    {
        if (int(a) > int(b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (opreator == '<')
    {
        if (int(a) < int(b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (int(a) == int(b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
