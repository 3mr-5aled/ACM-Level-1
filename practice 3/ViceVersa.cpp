#include <iostream>
#include <cstring>
using namespace std;

char word[10001];
char reword[10001];
bool palindrome = true;
int N;

int main()
{
    cin >> N;
    cin >> word;

    for (int i = 0; i < N; i++)
    {
        reword[i] = word[(N - 1) - i];
    }

    cout<<reword<<endl;

    if (strcmp(word, reword) == 0)
    {
        cout<< "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
