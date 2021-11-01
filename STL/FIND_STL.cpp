#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 1-> if array is not sorted use find
    // 2-> if array is sorted use inbuilt binary_search
    int arr[] = {100, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);

    int key = 100;
    auto it = find(arr, arr + n, key);

    int index = it - arr;

    if (index == n)
        cout << key << " is not found." << endl;
    else
    {
        cout << key << " at index " << index << endl;
    }

    return 0;
}