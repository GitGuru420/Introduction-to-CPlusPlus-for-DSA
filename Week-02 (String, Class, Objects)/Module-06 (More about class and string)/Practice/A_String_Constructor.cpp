#include <bits/stdc++.h>
using namespace std;

int main() {
    // normal way to declare string
    /*
    string s = "Hello";
    cout << s << endl;
    */

    // way-1
    /*
    string s("Hello");
    cout << s << endl;
    */

    // way-2
    /*
    string s("Hello World", 4);
    cout << s << endl;
    */
   
    // way-3
    /*
    string s = "Hello World";
    string t(s, 4);
    cout << t << endl;
    */

    // way-4
    string s(5, 'A');
    cout << s << endl;

    return 0;
}