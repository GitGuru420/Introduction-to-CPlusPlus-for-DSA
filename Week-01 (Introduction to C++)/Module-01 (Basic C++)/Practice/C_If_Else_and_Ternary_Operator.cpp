#include <iostream>
using namespace std;

int main() {
    // program to determine odd or even number
    int x;
    cout << "Enter any integer number: ";
    cin >> x;

    // if-else
    /*
    if(x%2 != 0) 
        cout << x << " number is odd" << endl;
    else 
        cout << x << " number is even" << endl;
    */

    // ternary operator
    (x%2 != 0) ? cout << x << " number is odd" << endl : cout << x << " number is even" << endl;

    return 0;
}