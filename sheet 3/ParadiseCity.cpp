#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        int maxStudents = 0;

        string row1, row2, row3;
        cin >> row1;
        cin >> row2;
        cin >> row3;

        for (int district = 0; district < N; district++) {
            int studentsInDistrict = 0;
            for (int c = district * 3; c < (district + 1) * 3; c++) {
                if (row1[c] == '*') studentsInDistrict += 4;
                if (row2[c] == '*') studentsInDistrict += 4;
                if (row3[c] == '*') studentsInDistrict += 4;
            }
            maxStudents = max(maxStudents, studentsInDistrict);
        }

        cout << maxStudents << endl;
    }

    return 0;
}
