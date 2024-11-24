#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World";

    // size() function
    // cout << s.size() << endl;

    // max_size() function
    // cout << s.max_size() << endl;

    // capacity() function
    // cout << s.capacity() << endl;

    // clear() function
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;
    // cout << s.size() << endl;

    // empty() function
    // if(s.empty()==true) {
    //     cout << "Empty" << endl;
    // }
    // else {
    //     cout << "Not Empty" << endl;
    // }

    // resize() function
    // s.resize(5);
    // s.resize(7);
    s.resize(15, '!');
    cout << s << endl;

    return 0;
}