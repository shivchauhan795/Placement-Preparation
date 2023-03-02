#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n)
{
     int i = 0, j = 0, k = 0;
        vector<int> temp(nums1);
        // nums1.erase(nums1.begin(), nums1.end());
        while(i < m && j < n)
        {
            if(temp[i] < nums2[j])
            {
                nums1[k++] = temp[i++];
            }
            else
            {
                nums1[k++] = nums2[j++];
            }
        }
        while(i < m)
        {
            nums1[k++] = temp[i++];
        }
        while(j < n)
        {
            nums1[k++] = nums2[j++];
        }
        return nums1;
}

void printArray(vector<int> ans)
{
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    int m = 3, n = 3;
    vector<int> ans = merge(arr1, m, arr2, n);
    printArray(ans);
    return 0;
}