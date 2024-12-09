#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int lengthAfterCompress(string &S) {
    S.erase(unique(S.begin(), S.end()), S.end());
    return S.size();
}

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        char Letter;
        cin >> Letter;
        S += Letter;
        cout << lengthAfterCompress(S) << endl;
    }

    return 0;
}
