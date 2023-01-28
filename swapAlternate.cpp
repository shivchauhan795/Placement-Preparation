#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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
    int even[] = {2, 3, 5, 6, 8, 9};
    int odd[] = {1, 8, 5, 3, 2};

    swapAlternate(even, 6);
    swapAlternate(odd, 5);

    printArray(even, 6);
    printArray(odd, 5);

    return 0;
}