#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello,";
    string s2 = " Hi";

    // s += s2;
    // s.append(s2);
    // s.push_back('R');
    // s += 'R';
    // s.pop_back();
    // s.pop_back();
    // s = "Gello";
    // s.assign("Gello");
    // s = s2;
    // s.assign(s2);
    // s.erase(3);
    // s.erase(3, 1);
    // s.replace(3, 2, "Hi");
    // s.replace(3, 0, "Hi");
    s.insert(6, "Raisul");
    cout << s << endl;

    return 0;
}