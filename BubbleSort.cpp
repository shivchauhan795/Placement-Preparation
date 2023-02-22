#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
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
    bubbleSort(arr,n);
    display(arr, n);
    return 0;
}