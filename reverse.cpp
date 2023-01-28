#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 7, 1, 6, 9};
    int brr[] = {5, 7, 1, 5};

    reverse(arr, 5);
    reverse(brr, 4);

    printArray(arr, 5);
    printArray(brr, 4);

    return 0;
}