#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student a, b;
    // a.roll = 19;
    // a.gpa = 4.33;
    // char temp[100] = "Raisul";
    // strcpy(a.name, temp);
    // cin >> a.name >> a.roll >> a.gpa;   // without space char input
    // cin >> b.name >> b.roll >> b.gpa;   // without space char input
    
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}