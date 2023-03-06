//https://leetcode.com/problems/kth-missing-positive-number/
// this code givs error but run correctly
#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int count = 1;
    int countK = 0;
    int i = 0;
    while (countK < k)
    {
        if (arr[i] != count)
        {
            countK++;
            count++;
        }
        else
        {
            count++;
            i++;
        }
    }
    return count - 1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << findKthPositive(arr, k);
    return 0;
}

// Working code
/*
class Solution {
    public int findKthPositive(int[] arr, int k) {
        int s = 0, e = arr.length - 1;
        int mid = s + (e-s) / 2;
        int missing;
        while(s <= e)
        {
            mid = s + (e-s) / 2;
            missing = compute(arr[mid], mid + 1);
            if(missing < k)
            {
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        if(e == -1)
        {
            return k;
        }
        return arr[e] + k - compute(arr[e], e + 1);
    }
    public int compute(int a, int b)
    {
        return a - b;
    }
}
*/