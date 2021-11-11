#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, vector<string> > phonebook;

    phonebook["Sarthak"].push_back("9110");
    phonebook["Sarthak"].push_back("9111");
    phonebook["Sarthak"].push_back("9112");
    phonebook["Sarthak"].push_back("9113");
    phonebook["XYZ"].push_back("8110");
    phonebook["XYZ"].push_back("8111");
    phonebook["XYZ"].push_back("8112");

    for (auto p : phonebook)
    {
        cout << "Name " << p.first << "->";
        for (string s : p.second)
        {
            cout << s << ",";
        }
        cout << endl;
    }

    return 0;
}