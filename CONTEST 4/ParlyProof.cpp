#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long A, B;
    cin >> A >> B;

    int cntA = 0, cntB = 0;

    if (A % 2 == 0)
    {
        cntA++;
        while (A % 2 == 0)
        {
            A /= 2;
        }
    }
    for (long long i = 3; i * i <= A; i += 2)
    {
        if (A % i == 0)
        {
            cntA++;
            while (A % i == 0)
            {
                A /= i;
            }
        }
    }
    if (A > 1)
        cntA++;

    if (B % 2 == 0)
    {
        cntB++;
        while (B % 2 == 0)
        {
            B /= 2;
        }
    }
    for (long long i = 3; i * i <= B; i += 2)
    {
        if (B % i == 0)
        {
            cntB++;
            while (B % i == 0)
            {
                B /= i;
            }
        }
    }
    if (B > 1)
        cntB++;

    if (cntA > cntB)
    {
        cout << "Proof MVP";
    }
    else if (cntA < cntB)
    {
        cout << "Parly MVP";
    }
    else
    {
        cout << "AGAIN!";
    }

    return 0;
}
