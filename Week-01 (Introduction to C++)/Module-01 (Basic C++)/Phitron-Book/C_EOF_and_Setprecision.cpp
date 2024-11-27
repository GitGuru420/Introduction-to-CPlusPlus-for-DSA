#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // End Of File (EOF)
    // int a, b;
    // while(cin >> a >> b) {
    //     cout << a << " " << b << endl;
    // }

    // setprecision
    double a;
    cin >> a;
    cout << fixed << setprecision(5) << a << endl;

    return 0;
}