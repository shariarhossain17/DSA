#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;

    Student(string name, int age, int marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
            return true;
        else
            return false;
    };
};

int main()
{

    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int age, marks;
        cin >> name >> age >> marks;

        Student obj(name, age, marks);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().age << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}