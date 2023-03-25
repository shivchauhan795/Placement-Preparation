#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int n, int key)
{
    if(n == 0)
    {
        return false;
    }
    if(arr[0] == key)
    {
        return true;
    }
    return linearSearch(arr + 1, n - 1, key);
}

int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << linearSearch(arr, n, key);
    delete arr;
    return 0;
}