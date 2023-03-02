/*  TLE (Approach 1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        for(int i = 0; i < height.size(); i++)
        {
            for(int j = 1; j < height.size(); j++)
            {
                int len = min(height[i], height[j]);
                int wid = j - i;
                area = max(area, (len*wid));
            }
        }
        return area;
    }
};

*/

//  Approach 2
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> height)
{
    int area = 0;
    int n = height.size() - 1;
    int i = 0;
    while (i < n)
    {
        int len = min(height[i], height[n]);
        int wid = n - i;
        area = max(area, (len * wid));
        if (height[i] < height[n])
        {
            i++;
        }
        else
        {
            n--;
        }
    }
    return area;
}

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(arr);
    return 0;
}