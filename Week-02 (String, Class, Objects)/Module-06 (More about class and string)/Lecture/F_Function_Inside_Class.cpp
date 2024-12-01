#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int math_marks, english_marks;
    Student(string name, int roll, int math_marks, int english_marks) {
        this->name = name;
        this->roll = roll;
        this->math_marks = math_marks;
        this->english_marks = english_marks;
    }
    // void hello() {
    //     // cout << "Hello";
    //     cout << "Hello from " << name << endl;
    // }
    void total() {
        cout << "Total marks of " << name << " = " << math_marks + english_marks << endl;
    }
};
int main() {
    Student sakib("Sakib Ahmed", 23, 85, 92);
    // cout << sakib.name << endl;
    // sakib.hello();
    sakib.total();
    Student rakib("Rakib Ahmed", 25, 65, 95);
    // rakib.hello();
    rakib.total();
    return 0;
}