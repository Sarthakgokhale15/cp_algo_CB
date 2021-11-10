#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<char, string> mp;

    int n;
    cin >> n;

    // insert
    for (int i = 0; i < n; i++)
    {
        string str;
        char ch;
        cin >> ch >> str;
        mp.insert(make_pair(ch, str));
    }
    // erase
    auto it = mp.begin();
    mp.erase(it);

    auto it2 = mp.lower_bound('b');  // batman returns pointer
    auto it3 = mp.upper_bound('d'); // elephant returns pointer
//iterating
    for (auto it4 = it2; it4 != it3; it4++)
    {
        cout<< it4->second <<" ";
        
    }

    //search for cat and delete cat
    auto f=mp.find('c');
    if(f->second=="cat") mp.erase(f);
    cout<<endl;


    // iterating over multimap
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}