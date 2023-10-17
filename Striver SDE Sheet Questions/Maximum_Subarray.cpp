// https://leetcode.com/problems/maximum-subarray/

/*
Optimal Solution

T.C -> O(N)
S.C -> O(1)
*/

/*
int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(sum > maxi){
                maxi = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
*/