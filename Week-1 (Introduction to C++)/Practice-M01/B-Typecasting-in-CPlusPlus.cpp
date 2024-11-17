#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "The character is: " << ch << endl;
    cout << "And the character ASCII value is: " << (int) ch << endl;

    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The entered number is: " << x << endl << "And the entered number character value is: " << (char) x << endl;

    return 0;
}