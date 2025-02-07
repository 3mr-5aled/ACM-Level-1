#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int n;
    cin >> n;

    stack<int> Books;
    while (n--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int id;
            cin >> id;
            Books.push(id);
        }
        else if (type == 2)
        {
            if (!Books.empty())
            {
                Books.pop();
            }
        }
        else
        {
            if (!Books.empty())
            {
                cout << Books.top() << endl;
            }
        }
    }

    return 0;
}