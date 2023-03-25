// https://leetcode.com/problems/majority-element/
#include <bits/stdc++.h>
using namespace std;

// TLE
/*
int majorityElement(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        if (count > (nums.size() / 2))
            return nums[i];
    }
    return -1;
}
*/

int majorityElement(vector<int>& nums) {
        int candidate = -1, votes = 0, count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(votes == 0)
            {
                candidate = nums[i];
                votes++;
            }
            else if(nums[i] == candidate)
            {
                votes++;
            }
            else
            {
                votes--;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == candidate)
            {
                count++;
            }
        }
        if(count > (nums.size() / 2))
        {
            return candidate;
        }
        return -1;
    }

int main()
{
    vector<int> arr = {2, 2, 1, 1, 2, 2};
    cout << majorityElement(arr);
    return 0;
}