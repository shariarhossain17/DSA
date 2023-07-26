#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
        : name(name), roll(roll), marks(marks) {}
    bool operator<(const Student &other) const
    {
        if (marks == other.marks)
        {
            return roll > other.roll;
        }
        return marks < other.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student> max_marks_students;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);
        max_marks_students.push(obj);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            Student obj(name, roll, marks);
            max_marks_students.push(obj);

            Student current_max = max_marks_students.top();
            cout << current_max.name << " " << current_max.roll << " " << current_max.marks << endl;
        }
        else if (command == 1)
        {

            if (max_marks_students.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student current_max = max_marks_students.top();
                cout << current_max.name << " " << current_max.roll << " " << current_max.marks << endl;
            }
        }
        else if (command == 2)
        {

            if (!max_marks_students.empty())
            {
                max_marks_students.pop();
            }

            if (max_marks_students.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student current_max = max_marks_students.top();
                cout << current_max.name << " " << current_max.roll << " " << current_max.marks << endl;
            }
        }
    }

    return 0;
}
