#include <bits/stdc++.h>
using namespace std;

void sayNumber(int* n, string *arr)
{
    if(*n == 0)
        return;
    
    int digit = *n % 10;
    *n = *n / 10;
    
    sayNumber(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    sayNumber(&n, arr);
    return 0;
}