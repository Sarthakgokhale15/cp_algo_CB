#include <bits/stdc++.h>
using namespace std;

class Person
{
    // public data variables
public:
    string name;
    int age;

    // constructor
    Person(string a, int b)
    {
        name = a;
        age = b;
    }
};

class PersonCompare
{
public:
    bool operator()(Person a, Person b)
    {
        return a.age < b.age;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Person, vector<Person>, PersonCompare> pq;

    for (int i = 0; i < n; i++)
    {
        string name;

        int age;
        cin >> name >> age;
        Person p(name, age);
        pq.push(p);
    }

    int k = 3;
    for (int i = 0; i < k; i++)
    {
        Person p = pq.top();
        pq.pop();
        cout << p.name << " " << p.age << endl;
    }

    return 0;
}