#include <iostream>
#include <queue>
using namespace std;

int main()
{

    int n;
    cin >> n;
    queue<int> PersonId;
    while (n--)
    {
        int type, id;
        cin >> type >> id;
        if (type == 1)
        {
            PersonId.push(id);
        }
        else
        {
            int first = PersonId.front();
            if (!PersonId.empty() && first == id)
            {
                cout << "Yes" << endl;
                PersonId.pop();
            }
            else
            {
                cout << "No" << endl;
                if (!PersonId.empty())
                {
                    PersonId.pop();
                }
            }
        }
    }

    return 0;
}