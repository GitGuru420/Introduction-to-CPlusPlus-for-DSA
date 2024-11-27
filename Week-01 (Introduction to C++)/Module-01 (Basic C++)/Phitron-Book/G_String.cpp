#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
    char s[100];
    int a;  

    cin >> a;
    // getchar();   --> do not work
    cin.ignore();
    cin.getline(s, 100);
    cout << a << endl << s << endl;

    return 0;
}