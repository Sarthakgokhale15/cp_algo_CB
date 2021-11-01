#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 1-> array is sorted

    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);

    int key = 40;
    bool present = binary_search(arr, arr + n, key);

    if (present)
        cout << "\nkey is Present \n";
    else
        cout << "key Not present \n";

    // ****************Lower Bound (LOG N)****************************

    auto lb = lower_bound(arr, arr + n, key);

    cout << "lower_bound of key is :" << lb - arr << "\n";

    // ****************upper Bound ( LOG N )****************************

    auto ub = upper_bound(arr, arr + n, key);

    cout << "upper_bound of key is :" << ub - arr << "\n";

    // ****************count of key  ( LOG N )****************************

    cout << "\ncount of key is : " << ub - lb << "\n";

    return 0;
}