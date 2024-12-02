#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    bool lucky = true;
    char num[1010];
    cin>>num;
    for (int i = 0; i < N; i++)
    {
        if (num[i] != '3' && num[i] != '6' && num[i] != '9') 
        {
            lucky = false;
            break;
        }
    }

    if (int(num[N - 1]) % 2 != 0)
    {
        lucky = false;
    }

    if (lucky)
    {
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;

    }
    

    return 0;
}