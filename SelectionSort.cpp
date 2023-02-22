#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 7, 1, 9, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    display(arr, n);
    return 0;
}