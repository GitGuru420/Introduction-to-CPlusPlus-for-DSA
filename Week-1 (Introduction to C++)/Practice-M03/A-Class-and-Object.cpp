#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[50]; 
    int id;
    double cgpa;
};

int main() {
    Student a, b;
    // a.name = "Raisul Islam"; // its not possible
    // char temp[50] = "Raisul Islam";
    // strcpy(a.name, temp);
    // a.id = 223071051;
    // a.cgpa = 3.37;

    // cin >> a.name >> a.id >> a.cgpa; // garbej value
    cin.getline(a.name, 50);
    cin >> a.id >> a.cgpa;
    // cin.getline(b.name, 50);
    // cin >> b.id >> b.cgpa; // garbej value
    cin.ignore();
    cin.getline(b.name, 50);
    cin >> b.id >> b.cgpa;

    cout << "Name: " << a.name << endl;
    cout << "ID: " << a.id << endl;
    cout << "CGPA: " << a.cgpa << endl;
    cout << "Name: " << b.name << endl;
    cout << "ID: " << b.id << endl;
    cout << "CGPA: " << b.cgpa << endl;

    return 0;
}