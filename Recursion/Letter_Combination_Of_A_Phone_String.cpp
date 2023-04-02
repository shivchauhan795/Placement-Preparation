// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

/*
void solve(string digits, string output, int index, vector<string>& ans, string maping[]){

        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = maping[number];

        for(int i = 0; i < value.length(); i++){
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, maping);
            output.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0){
            return ans;
        }
        string output = "";
        int index = 0;
        string maping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, maping);
        return ans;
    }
*/