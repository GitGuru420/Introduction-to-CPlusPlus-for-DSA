#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double d;
    cout << "Enter a double number: ";
    cin >> d;

    cout << "The double number is: " << d << endl;
    // i want to see up to 6 decimal digit
    // setprecision
    cout << fixed << setprecision(5);
    cout << "The double number is: " << d << endl;

    return 0;
}