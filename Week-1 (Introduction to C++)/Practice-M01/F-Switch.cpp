#include <iostream>
using namespace std;

int main() {
    // determine day name
    int day;
    cout << "Enter day number: ";
    cin >> day;

    switch(day) {
        case 1: 
            cout << "Sunday" << endl; break;
        case 2: 
            cout << "Monday" << endl; break;
        case 3: 
            cout << "Tuesday" << endl; break;
        case 4: 
            cout << "Wednesday" << endl; break;
        case 5: 
            cout << "Thursday" << endl; break;
        case 6: 
            cout << "Friday" << endl; break;
        case 7: 
            cout << "Saturday" << endl; break;
        default:
            cout << "Invalid day number" << endl;
    }

    // determine odd even
    int x;
    cout << "Enter a number: ";
    cin >> x;

    switch(x % 2) {
        case 0:
            cout << "Even" << endl; break;
        case 1:
            cout << "Odd" << endl; break;
    }

    // determine vowel or consonant
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
    case 'a':
        cout << "Vowel" << endl; break;
    case 'e':
        cout << "Vowel" << endl; break;
    case 'i':
        cout << "Vowel" << endl; break;
    case 'o':
        cout << "Vowel" << endl; break;
    case 'u':
        cout << "Vowel" << endl; break;
    default:
        cout << "Consonant" << endl;
    }

    return 0;
}