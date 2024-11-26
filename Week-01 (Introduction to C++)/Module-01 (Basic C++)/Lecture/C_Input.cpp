#include <iostream>
using namespace std;
int main() {
    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    cout << x << endl << c << endl << d << endl;

    int ascii_c = c;
    cout << ascii_c << endl;

    // typecasting
    cout << (char)x << endl;


    return 0;
}