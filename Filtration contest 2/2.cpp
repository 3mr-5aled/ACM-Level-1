// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int N;
//     int maxfreq;
//     cin >> N;
//     char S[N];
//     int freq[26] = {0};
//     for (int i = 0; i < N; i++)
//     {
//         cin >> S[i];
//         freq[S[i] - 'a']++;
//     }
//     int Q;
//     cin >> Q;

//     for (int i = 0; i < Q; i++)
//     {
//         int type;
//         cin >> type;
//         if (type == 1)
//         {
//             sort(freq, freq + 26, greater<int>());
//             cout << freq[0] << endl;
//         }
//         else if (type == 2)
//         {
//             int idx;
//             char letter;
//             cin >> idx >> letter;
//             freq[S[idx - 1] - 'a']--;
//             S[idx - 1] = letter;
//             freq[S[idx - 1] - 'a']++;
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char S[N];
    int freq[26] = {0};
    int maxfreq = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        freq[S[i] - 'a']++;
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < 26; i++)
    {
        maxfreq = max(maxfreq, freq[i]);
    }

    for (int i = 0; i < Q; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            cout << maxfreq << endl;
        }
        else if (type == 2)
        {
            int idx;
            char letter;
            cin >> idx >> letter;
            freq[S[idx - 1] - 'a']--;

            if (freq[S[idx - 1] - 'a'] + 1 == maxfreq)
            {
                maxfreq = 0;
                for (int j = 0; j < 26; j++)
                {
                    maxfreq = max(maxfreq, freq[j]);
                }
            }

            S[idx - 1] = letter;
            freq[S[idx - 1] - 'a']++;
            maxfreq = max(maxfreq, freq[S[idx - 1] - 'a']);
        }
    }

    return 0;
}
