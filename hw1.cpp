// print sum of all elements in an array

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size){
    cout << "Sum is: ";
    int s = 0;
    for(int i=0; i<size; i++){
        s = s + arr[i];
    }
    return s;
}
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[10];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout << sum(arr,size);
    return 0;
}