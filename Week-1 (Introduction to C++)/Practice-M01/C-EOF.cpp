// EOF --> End of File
#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        cout << "Value of " << x << " + 100 = " << x + 100 << endl;
        if(x > 100) {
            break;
        }
    }
    
    return 0;
}