// https://leetcode.com/problems/median-of-two-sorted-arrays/
#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    for (int i = 0; i < nums2.size(); i++)
    {
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());

    int s = 0, e = nums1.size() - 1;
    int mid = s + (e-s) / 2;
    // even
    if (nums1.size() % 2 == 0)
    {
        return (double)(nums1[mid] + nums1[mid + 1]) / 2;
    }
    return nums1[mid];
    }

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2);
    return 0;
}