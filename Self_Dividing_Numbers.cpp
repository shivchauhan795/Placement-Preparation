// https://leetcode.com/problems/self-dividing-numbers/

/*
void check(vector<int>& ans, int i){
        int num = i;
        while(i != 0){
            int digit = i%10;
            if(digit == 0){
                break;
            }
            if(num % digit != 0){
                break;
            }
            i = i/10;
        }
        if(i == 0){
            ans.push_back(num);
        }
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++){
            check(ans, i);
        }
        return ans;
    }
*/