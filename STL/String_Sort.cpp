#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    // if two strings are of same length then do compare lexiographially
    if (a.length() == b.length())
        return a < b;

    // else return the string which has greater length
    // return a.length() > b.length();  return string with small length

    return a.length() > b.length();
}
int main()
{

    int n;
    // number of strings
    cin >> n;

    // consume extra enter key
    cin.get();

    // string array
    string s[100];

    // taking input using getline bcoz white spaces are there in string
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    // inbuilt sort with comparator for string array
    sort(s, s + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << "\n";
    }

    return 0;
}