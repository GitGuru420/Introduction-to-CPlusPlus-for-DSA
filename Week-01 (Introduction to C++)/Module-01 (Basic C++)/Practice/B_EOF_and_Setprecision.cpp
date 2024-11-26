#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // EOF --> End Of File
    /*
    int x;
    while (cin >> x) {
        if(x > 30) {
            break;
        }
        cout << "x = " << x << endl;
    }
    */
    
    // Setprecision
    double d;
    cout << "Enter any floating point number that contains 8 digit after decimal: ";
    cin >> d;
    cout << "The floating point number is: " << d << endl;  // it shows upto 5 digit after decimal

    // if we want to see 8 digit after decimal
    cout << fixed << setprecision(8);
    cout << "The floating point number is: " << d << endl;

    // if we want to see 2 digit after decimal
    cout << fixed << setprecision(2);
    cout << "The floating point number is: " << d << endl;
    
    return 0;
}