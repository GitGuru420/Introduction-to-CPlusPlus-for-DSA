#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two number: ";
    cin >> x >> y;

    // min function
    cout << "Minimum number is: " << min(x, y) << endl;
    
    // max function
    cout << "Maximum number is: " << max(x, y) << endl;

    cout << "Minimum number is: " << min({10, 3, 60, 92}) << endl;
    cout << "Maximum number is: " << max({10, 3, 60, 92}) << endl;

    return 0;
}