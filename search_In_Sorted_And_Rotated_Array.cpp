// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
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

int binary(int arr[], int a, int b, int key)
{
    int s = a;
    int e = b;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int target = 0;
    int pivot_element = pivot(arr, 7);
    if (arr[pivot_element] <= target && target <= arr[6])
    {
        cout << binary(arr, pivot_element, 6, target);
    }
    else
    {
        cout << binary(arr, 0, pivot_element - 1, target);
    }
    return 0;
}