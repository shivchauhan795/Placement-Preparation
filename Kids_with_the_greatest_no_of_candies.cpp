// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

/*
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        for(int i = 0; i < candies.size(); i++){
            maxi = max(candies[i], maxi);
        }
        vector<bool> ans;
        for(int i = 0; i < candies.size(); i++){
            ans.push_back(candies[i] + extraCandies >= maxi);
        }
        return ans;
    }
*/