// #include <iostream>
// using namespace std;

// int p[100];
// int q[100];
// int levels[100];
// int checker[100] = {true};

// int main()
// {

//     bool pass = true;
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         levels[i - 1] = i;
//     }

//     int pStart, qStart;
//     cin >> pStart;
//     for (int i = 0; i < pStart; i++)
//     {
//         cin >> p[i];
//     }
//     cin >> qStart;
//     for (int i = 0; i < qStart; i++)
//     {
//         cin >> q[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if(p[i] == levels[i] || q[i] == levels[i]){
//             checker[i] = true;
//         }else{
//             checker[i] = false;
//         }
//     }
    

//     if (pass)
//     {
//         cout << "I become the guy." << endl;
//     }
//     else
//     {
//         cout << "Oh, my keyboard!" << endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

bool passed[101] = {false};

int main() {
    int n;
    cin >> n;

    int p, q;
    cin >> p;

    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        passed[level] = true; 
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        passed[level] = true; 
    }

    for (int i = 1; i <= n; i++) {
        if (!passed[i]) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;
    return 0;
}
