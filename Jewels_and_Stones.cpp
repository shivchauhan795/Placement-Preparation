// https://leetcode.com/problems/jewels-and-stones/

// Approach 1 --> Using set
/*
int numJewelsInStones(string jewels, string stones) {
        set<int> st;
        int count = 0;
        for(int i = 0; i < jewels.size(); i++){
            st.insert(jewels[i]);
        }
        for(int i = 0; i < stones.size(); i++){
            if(st.find(stones[i]) != st.end()){
                count++;
            }
        }
        return count;
    }
*/
/*
    time complexity --> O(mlogn + nlogn)
    space complexity --> O(m)
*/

// Approach 1 --> Using set
/*
int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> st;
        int count = 0;
        for(int i = 0; i < jewels.size(); i++){
            st.insert(jewels[i]);
        }
        for(int i = 0; i < stones.size(); i++){
            if(st.find(stones[i]) != st.end()){
                count++;
            }
        }
        return count;
    }
*/