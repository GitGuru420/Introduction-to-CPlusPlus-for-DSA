#include <iostream>
using namespace std;
int main() {    
    int x;
    // std::cin >> x;
    // std::cout << "Value of x is " << x << std::endl;
    cin >> x;
    cout << "Value of x is " << x << endl;

    char c;
    cin >> c;
    cout << "Value of c is " << c << endl;

    // type casting
    cout << "Ascii value of \"" << c << "\" is " << (int)c << endl;

    return 0;
}