#include <bits/stdc++.h>
using namespace std;

int main()
{
    // store key->value pair
    map<string, int> mp;

    // 1: insert a pair into map
    mp.insert(make_pair("Mango", 100));
    //
    pair<string, int> p;
    p.first = "Apple";
    p.second = 200;
    mp.insert(p);
    //
    mp["Banana"] = 300;

    // 2: search

    string fruit;
    cin >> fruit;
    // using iterators
    auto it = mp.find(fruit);
    if (it != mp.end())
        cout << "Price of " << fruit << " " << mp[fruit] << endl;
    else
    {
        cout << "fruit is not present" << endl;
    }

    // 3:erase
    mp.erase(fruit);
    // search using count of fruit ....map stores unique keys only once
    if (mp.count(fruit))
    {
        cout << "Price of " << fruit << " " << mp[fruit] << endl;
    }
    else
    {
        cout << "fruit is not present" << endl;
    }

    // 4: iterating over map

    for (auto it : mp)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}