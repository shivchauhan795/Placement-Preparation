#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    if (s > e)
        return false;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
        return binarySearch(arr, mid + 1, e, key);

    if (arr[mid] > key)
        return binarySearch(arr, s, mid - 1, key);
}

int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int *arr = new int[n];  // array declared in heap
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << binarySearch(arr, 0, n, key);
    delete arr; // heap is cleared
    return 0;
}