#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // min & max of a & b
    int x = min(a, b);
    int y = max(a, b);
    cout << x << " " << y << endl;

    // min & max of a, b, c, d;
    int mn = min({a, b, c, d});
    int mx = max({a, b, c, d});
    cout << mn << " " << mx << endl;

    // swap 
    int p, q;
    cin >> p >> q;
    swap(p, q);
    cout << p << " " << q << endl;

    return 0;
}