#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;   // without space
    cout << s[3] << endl;
    cout << s.at(3) << endl;
    cout << s[s.size()-1] << endl;
    cout << s.back() << endl;
    cout << s[0] << endl;
    cout << s.front() << endl;

    return 0;
}