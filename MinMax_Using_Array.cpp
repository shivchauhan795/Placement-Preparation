#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int size)
{

    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        mini = min(mini, arr[i]);
    }
    return mini;
}

int getMax(int arr[], int size)
{

    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int main()
{
    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Max number is: " << getMax(arr, size) << endl;
    cout << "Mini number is: " << getMin(arr, size) << endl;

    return 0;
}