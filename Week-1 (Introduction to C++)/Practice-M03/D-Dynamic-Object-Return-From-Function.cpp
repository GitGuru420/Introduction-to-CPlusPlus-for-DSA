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

Student fun() {
    Student a(2, 2.3);
    return a;
}
int main() {
    Student obj = fun();

    cout << "ID: " << obj.id << endl;
    cout << "CGPA: " << obj.cgpa << endl;

    return 0;
}