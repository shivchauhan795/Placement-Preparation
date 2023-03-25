#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool ans = isSorted(arr, n);

    if (ans)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    delete arr;
    return 0;
}