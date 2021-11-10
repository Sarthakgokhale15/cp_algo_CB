#include <bits/stdc++.h>
using namespace std;

int main()
{

    // three methods of vector definitions
    // 1 simple initialization
    vector<int> v1;

    // 2  initialize vector of zeros of size 5
    vector<int> v2(5, 0);

    // 3 copy v2 from begin to end in v3
    vector<int> v3(v2.begin(), v2.end());
    vector<int> v4{1, 2, 3, 4, 5, 6, 7, 8};

    // iterating through vector
    // 1 simple for loop
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // 2 for loop using iterators
    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    // 3 for each loop
    for (int x : v4)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << v2.size() << endl;
    cout << v2.capacity() << endl;
    cout << v2.max_size() << endl;

    cout << v4.size() << endl;
    cout << v4.capacity() << endl;
    cout << v4.max_size() << endl;
    return 0;
}