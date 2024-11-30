#include <iostream>
using namespace std;

int main()
{
    long long ID, originalID, rev = 0, sum = 0;
    cin >> ID;

    originalID = ID; 

    long long temp = ID; 
    while (temp > 0)
    {
        long long digit = temp % 10;
        rev = (rev * 10) + digit;
        temp /= 10;
    }
    bool palindrome = (originalID == rev); 


    temp = originalID; 
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    bool divisibleBySum = (originalID % sum == 0);

    if (palindrome && divisibleBySum)
    {
        cout << "Best mentor." << endl;
    }
    else if (palindrome || divisibleBySum)
    {
        cout << "He's good." << endl;
    }
    else
    {
        cout << "He'll be fired." << endl;
    }

    return 0;
}
