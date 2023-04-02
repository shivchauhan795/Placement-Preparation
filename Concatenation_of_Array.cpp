// https://leetcode.com/problems/concatenation-of-array/
#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> ans(nums);
    int i = 0;
    int n = nums.size();
    while (n != 0)
    {
        ans.push_back(nums[i]);
        n--;
        i++;
    }
    return ans;
}