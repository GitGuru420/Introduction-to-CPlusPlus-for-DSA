#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // check the number is odd or even used by if-else
    if(number % 2 != 0)
        cout << "Odd" << endl;
    else 
        cout << "Even" << endl;

    int x;
    cout << "Enter another number: ";
    cin >> x;
    // check the number is odd or even used by ternary operator
    (x % 2 != 0) ? cout << "Odd" << endl : cout << "Even" << endl;

    return 0;
}