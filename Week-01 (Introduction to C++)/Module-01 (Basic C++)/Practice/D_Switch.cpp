#include <iostream> 
using namespace std;

int main() {
    // program to find day name
    /*
    int day;
    cout << "Enter day number: ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Saturday" << endl; break;
        case 2:
            cout << "Sunday" << endl; break;
        case 3:
            cout << "Monday" << endl; break;
        case 4:
            cout << "Tuesday" << endl; break;
        case 5:
            cout << "Wednesday" << endl; break;
        case 6:
            cout << "Thursday" << endl; break;
        case 7:
            cout << "Friday" << endl; break;
        default:
            cout << "Invalid day number" << endl;
    }
    */

    // program to find odd or even number
    /*
    int num;
    cout << "Enter any integer number: ";
    cin >> num;

    switch(num % 2) {
        case 0:
            cout << "Even Number" << endl; 
            break;
        case 1:
            cout << "Odd Number" << endl;
            break;
    }
    */

    // program to find vowel or consonant
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch(ch) {
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