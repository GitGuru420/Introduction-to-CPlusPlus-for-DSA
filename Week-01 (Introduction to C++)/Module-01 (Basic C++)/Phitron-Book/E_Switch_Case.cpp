#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter grade(A||B||C): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Very good!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    return 0;
}