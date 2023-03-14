// https://leetcode.com/problems/search-insert-position/
#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (target == nums[mid])
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int target = 4;
    cout << searchInsert(arr, target);
    return 0;
}