#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string firstname, lastname;
    string rollno;
    Student(string f, string l, string rno)
    {
        firstname = f;
        lastname = l;
        rollno = rno;
    }

    bool operator==(const Student &s) const
    {
        return rollno == s.rollno ? true : false;
    }
};
class hashFn
{
public:
    size_t operator()(const Student &s) const
    {
        return s.firstname.length() + s.lastname.length();
    }
};
int main()
{
    unordered_map<Student, int, hashFn> mp;

    Student s1("Prateek", "Narang", "010");
    Student s2("Rahul", "Kumar", "023");
    Student s3("Prateek", "Gupta", "030");
    Student s4("Rahul", "Kuamar", "120");
    mp[s1] = 100;
    mp[s2] = 120;
    mp[s3] = 11;
    mp[s4] = 45;

    for (auto p : mp)
    {
        cout << p.first.firstname << " " << p.first.rollno << " Marks: " << p.second << endl;
    }
    return 0;
}