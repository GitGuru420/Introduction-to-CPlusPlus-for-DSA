#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    // char name[50]; 
    int id;
    double cgpa;

    Student(int id, double cgpa) {
        // strcpy(name, this->name);
        this->id = id;
        this->cgpa = cgpa;
    }
};

int main() {
    Student a(2, 2.3);

    // cout << "Name: " << a.name << endl;
    cout << "ID: " << a.id << endl;
    cout << "CGPA: " << a.cgpa << endl;

    return 0;
}