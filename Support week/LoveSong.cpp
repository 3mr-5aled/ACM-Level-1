// #include <iostream>
// using namespace std;

// int main()
// {

//     // n length of a song , q num of questions
//     int n, q;
//     cin >> n >> q;
//     char song[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> song[i];
//     }

//     for (int i = 0; i < q; i++)
//     {
//         int l, r;
//         cin >> l >> r;
//     }

//     // according to the letters order abbacb -> abbbbcccbb
//     // a one time
//     // b two times
//     // c three times

//     int freq[26];
//     for (int i = 0; i < n; i++)
//     {
//         freq[int(song[i]) - 'a']++;
        
//     }
    
//     // size of freq array without zeros
//     cout<<sizeof(freq);

    

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string song;
    cin >> song;

    long long pre[n + 1];
    pre[0] = 0;

    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + (song[i - 1] - 'a' + 1);
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }

    return 0;
}
