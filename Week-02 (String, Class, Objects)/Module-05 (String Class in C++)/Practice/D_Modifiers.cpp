#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = " Hi";

    // s1 += s2;
    // s1.append(s2);
    // s1.push_back('R');
    // s1 += 'R';
    // s1.pop_back();
    // s1 = "Gello";
    // s1.assign("Gello");
    // s1.erase(2);
    // s1.erase(2,2);
    // s1.replace(2, 2, "Hi");
    // s1.replace(2, 0, "Hi");
    s1.insert(4, "Raisul");
    cout << s1 << endl;

    return 0;
}