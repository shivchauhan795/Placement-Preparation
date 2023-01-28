#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {1, -2, 5, 9, 12, -2, 7, 3, 0, 11};
    cout << "Enter element to search: ";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is found";
    }
    else
    {
        cout << "Key not found";
    }

    return 0;
}