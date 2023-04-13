// https://leetcode.com/problems/removing-stars-from-a-string/

// Approach 1
/*
string removeStars(string s) {
        stack<char> temp;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '*'){
                temp.push(s[i]);
            }
            else{
                temp.pop();
            }
        }
        while(temp.size()){
            ans += temp.top();
            temp.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
*/


// Approach 2
/*
string removeStars(string s) {
        int size = s.size();
        string ans = "";
        for(int i = 0; i < size; i++){
            if(s[i] == '*'){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
*/