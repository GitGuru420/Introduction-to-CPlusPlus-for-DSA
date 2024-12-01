#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello, Hi, Miss Sumi Akhter";
    
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;
    // cout << "Raisul" << endl;

    // if(s.empty() == true) {
    //     cout << "Yes, Empty" << endl;
    // }
    // else {
    //     cout << "No, Not Empty" << endl;
    // }

    // s.resize(20);
    s.resize(30, 'R');
    cout << s << endl;

    return 0;
}