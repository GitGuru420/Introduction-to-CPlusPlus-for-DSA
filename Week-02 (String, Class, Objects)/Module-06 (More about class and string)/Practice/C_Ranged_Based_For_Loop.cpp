#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s << endl;

    // normal way
    /*
    for(int i=0; i<s.size(); i++) {
        cout << s[i] << endl;
    }
    */

    // ranged based
    for(char c:s) {
        cout << c << endl;
    }
    
    return 0;
}