#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
         if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
       
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int even[] = {2, 5, 7, 8, 10, 12};
    int odd[] = {2, 12, 14, 22, 32};

    int evenIndex = binarySearch(even, 6, 8);
    int oddIndex = binarySearch(odd, 5, 12);

    cout << "Index of 8 is " << evenIndex << endl;
    cout << "Index of 12 is " << oddIndex << endl;

    return 0;
}