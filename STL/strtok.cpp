#include <bits/stdc++.h>
using namespace std;

int main()
{

    // syntax
    // char *strtok( char *s,char * delimiter)
    // returns token for each subsequent call
    // in the beginning pass ' s ' to function
    // on next subsequent call pass NULL

    // delimiter can be  comma/space/anything
    // cant use string have to use char array

    char s[100] = "Today is the T Rainy day";

    char *ptr = strtok(s, " ");
    cout << ptr << endl;

    while (ptr != NULL)
    {
        // below line moves the function call to the next token
        char *ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}