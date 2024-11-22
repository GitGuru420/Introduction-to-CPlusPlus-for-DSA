#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[50]; 
    int id;
    double cgpa;

    Student(char n[], int i, double cg) {
        strcpy(name, n);
        id = i;
        cgpa = cg;
    }
};

int main() {
    // Student a("Rakib Islam", 23, 3.44);
    // Student b("Sakib Islam", 25, 3.50);

    char n[50];
    int i;
    double cg;
    cin.getline(n, 50);
    cin >> i >> cg;
    Student a(n, i, cg);

    cout << "Name: " << a.name << endl;
    cout << "ID: " << a.id << endl;
    cout << "CGPA: " << a.cgpa << endl;
    // cout << "Name: " << b.name << endl;
    // cout << "ID: " << b.id << endl;
    // cout << "CGPA: " << b.cgpa << endl;

    return 0;
}