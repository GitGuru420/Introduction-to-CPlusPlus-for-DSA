#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello,";
    string s2 = " Hi";

    // s += s2;
    // s.append(s2);
    // s.push_back('R');
    // s += 'R';
    s.pop_back();
    s.pop_back();
    cout << s << endl;

    return 0;
}