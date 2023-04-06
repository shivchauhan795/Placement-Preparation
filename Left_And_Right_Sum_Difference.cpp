// https://leetcode.com/problems/left-and-right-sum-differences/description/

/*
int leftSum(vector<int> nums, int s, int e){
        int sum = 0;
        for(int i = s; i <= e; i++){
            sum += nums[i];
        }
        return sum;
    }
    int rightSum(vector<int> nums, int s, int e){
        int sum = 0;
        for(int i = s; i <= e; i++){
            sum += nums[i];
        }
        return sum;
    }
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> answer;
        int left = -1;
        int right = -1;
        for(int i = 0; i < nums.size(); i++){
            left = leftSum(nums, 0, i-1);
            right = rightSum(nums, i+1, nums.size() - 1);
            int difference = abs(left-right);
            answer.push_back(difference);
        }
        return answer;
    }
*/