#include <iostream>
using namespace std;

int main() {
    int age;
    char initial;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the first letter of your name: ";
    cin >> initial;

    cout << "Age: " << age << endl;
    cout << "Letter: " << initial << endl;

    return 0;
}