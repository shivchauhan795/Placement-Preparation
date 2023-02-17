#include <bits/stdc++.h>
using namespace std;

int peak(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[5] = {0, 3, 10, 5, 2};
    int ans = peak(arr, 5);
    cout << "Peak Element is " << ans;  // Index is returned
    return 0;
}