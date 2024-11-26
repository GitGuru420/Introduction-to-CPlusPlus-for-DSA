#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    // if(a<b) 
    //     cout << "Min " << a << endl;
    // else 
    //     cout << "Max " << b << endl;

    // cout << "Min " << min(a, b) << endl;
    // cout << "Max " << max(a, b) << endl;

    // cout << "Min of 5: " << min({3, 5, 7, 10, 12}) << endl;
    // cout << "Max of 5: " << max({3, 5, 7, 10, 12}) << endl;

    // int temp = a;
    // a = b;
    // b = temp;
    swap(a, b);
    cout << a << " " << b << endl;


    return 0;
}