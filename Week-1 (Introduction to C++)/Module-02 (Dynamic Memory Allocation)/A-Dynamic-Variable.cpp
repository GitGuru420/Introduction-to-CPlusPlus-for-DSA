#include <bits/stdc++.h>
using namespace std;
int *p;

void fun() {
    // int x = 10;
    int *x = new int;
    *x = 10;
    p = x;
    cout << "Fun-> " << *p << endl;
    return;
}
int main() {
    /*
    int x = 10;
    // dynamic variable declare
    int *p = new int;
    *p = 100;
    cout << *p << endl;
    */
    fun();
    cout << "Main-> " << *p << endl;
    return 0;
}