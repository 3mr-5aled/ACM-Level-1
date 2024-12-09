#include <iostream>
#include <algorithm>
using namespace std;

int dishes[1000];
char tables[1001];


bool comp(int a, int b) {
      return a > b;
}

int main() {
    int N;
    char a, b;
    cin >> N >> a >> b;


    for (int i = 0; i < N; i++) {
        string DishInBinary;
        cin >> DishInBinary;
        dishes[i] = stoi(DishInBinary, nullptr, 2);
    }

    cin >> tables;

    if (a == 'A') {
        sort(dishes, dishes + N);
    } else {
        sort(dishes, dishes + N, comp);
    }

    if (b == 'A') {
        sort(tables, tables + N);
    } else {
        sort(tables, tables + N, comp);
    }

    for (int i = 0; i < N; i++) {
        cout << tables[i] << dishes[i] << " ";
    }
    cout << endl;

    return 0;
}
