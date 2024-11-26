#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    // if-else
    // if(x%2 == 0)
    //     cout << "Even" << endl;
    // else 
    //     cout << "Odd" << endl;

    // ternary operator: syntax
    // condition ? True : False
    x%2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}