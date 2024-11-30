#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2;
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;

    int N;
    cout << "Enter the number of repetitions: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            cout << word1 << endl;
        } else {
            cout << word2 << endl;
        }
    }

    return 0;
}
