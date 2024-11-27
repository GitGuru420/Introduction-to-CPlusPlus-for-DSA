#include <iostream>
using namespace std;

int main() {
    int x = 10;
    if(x == 10) {
        cout << "It is ten out of ten" << endl;
    }
    else {
        cout << "This is not ten" << endl;
    }

    int n;
    cin >> n;
    (n%2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}