#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // if(a < b) {
    //     cout << a << endl;
    // }
    // else {
    //     cout << b << endl;
    // }

    // min function
    cout << min(a, b) << endl;
    cout << min({3, 5, 7, 12}) << endl;

    // max function
    cout << max(a, b) << endl;
    cout << max({3, 5, 7, 12}) << endl;

    // swap
    int x, y;
    cin >> x >> y;
    // int temp = x;
    // x = y;
    // y = temp;
    // cout << x << " " << y << endl;
    // swap function
    swap(x, y);
    cout << x << " " << y << endl;


    return 0;
}