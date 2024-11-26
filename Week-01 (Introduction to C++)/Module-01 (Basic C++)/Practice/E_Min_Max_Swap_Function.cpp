#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cout << "Enter any two integer: ";
    cin >> a >> b;

    cout << "Max number is: " << max(a, b) << endl;
    cout << "Min number is: " << min(a, b) << endl;
    swap(a, b);
    cout << "Swap number is: " << a << " " << b << endl;

    // find max and min between 5 numbers
    int x1, x2, x3, x4, x5;
    cout << "Enter any 5 integers: ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    cout << "Entered number is: " << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;
    cout << "Minimum number is: " << min({x1, x2, x3, x4, x5}) << endl;
    cout << "Maximum number is: " << max({x1, x2, x3, x4, x5}) << endl;

    return 0;
}