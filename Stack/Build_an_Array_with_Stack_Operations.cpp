// https://leetcode.com/problems/build-an-array-with-stack-operations/description/
/*
vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int counter = 1;
        for(int i = 0 ; i < target.size(); i++){
            while(counter != target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                counter++;
            }
            ans.push_back("Push");
            counter++;
        }
        return ans;
    }
*/