#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    string gifts;
    cin >> gifts;

    int t = 0, e = 0, b = 0, c = 0;

      for (char ch : gifts) {
        if (ch == 't') t++; 
        else if (ch == 'e') e++;
        else if (ch == 'b') b++;
        else if (ch == 'c') c++;
    }
    cout<<t<<" "<<e<<" "<<b<<" "<<c<<endl;
    
    return 0;
}
