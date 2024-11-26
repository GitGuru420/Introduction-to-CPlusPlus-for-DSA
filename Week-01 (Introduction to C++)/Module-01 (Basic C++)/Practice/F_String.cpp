#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age: " << age << endl;
    cin.ignore();
    char s[100];
    cout << "Enter your name: ";
    // cin >> s;
    cin.getline(s, 100);
    cout << "Hello, " << s << endl;

    string s1;
    cout << "Enter your name: ";
    cin >> s1;  // it's can not take input after space
    cout << "Hello, Mr. " << s1 << endl;

    return 0;
}