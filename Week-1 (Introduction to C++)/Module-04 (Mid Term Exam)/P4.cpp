#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;

    for (int j = 1; j <= t; j++)
    {
        Student arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i].id >> arr[i].name >> arr[i].section >> arr[i].total_marks;
        }
        
        Student highestTotalMarks = arr[0];
        // cout << endl;
        for (int i = 0; i < 3; i++)
        {
            if(arr[i].total_marks > highestTotalMarks.total_marks) {
                highestTotalMarks = arr[i];
            }
        }
        cout << highestTotalMarks.id << " " << highestTotalMarks.name << " " << highestTotalMarks.section << " " << highestTotalMarks.total_marks << endl;
    }

    return 0;
}