// https://leetcode.com/problems/sort-colors/

/*
    Optimal Solution - Dutch National Flag Algorithm
    T.C -> O(N)
    S.C -> O(1)
*/

/*
void sortColors(vector<int>& nums) {
        int mid = 0, low = 0, high = nums.size() - 1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
*/