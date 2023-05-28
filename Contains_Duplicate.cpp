// https://leetcode.com/problems/contains-duplicate/

/*
    Approach:

    1.  Stay at one index and traverse other index after that.      T.C -> O(n^2)   S.C -> O(1)
    2.  sort the array then in a for-loop check if the current element is equal to the next element.        T.C -> O(nlogn)     S.C -> O(1)
    3.  Push all elements in a set. Then check if the original vector size is greater than the size of set then return true, as set only accept unique values.  T.C -> O(nlogn)     S.C -> O(n)
    4.  Using map. The key-value pair help in finding the answer. We traverse through the vector and increment the count in the map. Then again we traverse through the values in map and if any value has >= 2 then return true.       T.C -> O(nlogn)     S.C -> O(n)
    5. Using unordered_map (aka hashmap). Follow exact same code as map.        T.C -> O(n)     S.C -> O(n)

*/


#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> nums, int n){
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }
    for(int i = 0; i < nums.size(); i++){
        if(mp[nums[i]] >= 2){
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    if(check(nums, n)){
        cout << "Contain Duplicate" << endl;
    }
    else{
        cout << "Don't contain duplicates" << endl;
    }
    return 0;
}