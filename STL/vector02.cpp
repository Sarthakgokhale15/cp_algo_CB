#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> d{1, 2, 3, 10, 14};

    // add elements to vector o(1) time in most cases
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);

    // remove element from vector o(1)
    d.pop_back();

    // insert elements to vector o(N) time
    d.insert(d.begin() + 3, 100);    // insert 100 after 3
    d.insert(d.begin() + 3, 3, 200); // insert 200 3 times

    // erase elements in middle

    d.erase(d.begin() + 2); // removes elements from vector at inedx 2

    d.erase(d.begin() + 2, d.begin() + 5); // removes elements from index 2 - 5

    cout << d.front() << endl;
    cout << d.back() << endl;
    for (int x : d)
    {
        cout << x << " ";
    }

    // reserve

    int n;
    cin >> n;

    vector<int> v;
    v.reserve(1000); // if not reserve then capacity increases in order of 1 2 4 8 16 32 .........
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        v.push_back(no);
    }
    cout << "capacity :" << v.capacity() << endl;

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}