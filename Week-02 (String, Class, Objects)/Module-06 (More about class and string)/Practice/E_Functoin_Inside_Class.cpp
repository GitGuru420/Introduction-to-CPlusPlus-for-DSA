#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int math, english;
    Student(string name, int roll, int math, int english) {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void hello() {
        cout << "Hello from " << name << endl;
    }
    void total() {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};
int main() {
    Student sakib("Sakib Mahmud", 14, 85, 76);
    cout << sakib.name << endl;
    sakib.hello();
    sakib.total();
    Student rakib("Rakib Mahmud", 20, 92, 68);
    cout << rakib.name << endl;
    rakib.hello();
    rakib.total();

    return 0;
}