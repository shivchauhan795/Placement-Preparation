// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

/*
int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "--X")
                --x;
            if(operations[i] == "X++")
                x++;
            if(operations[i] == "++X")
                ++x;
            if(operations[i] == "X--")
                x--;
        }
        return x;
    }
*/