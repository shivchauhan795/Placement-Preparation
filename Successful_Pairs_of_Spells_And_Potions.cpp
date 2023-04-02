// https://leetcode.com/problems/successful-pairs-of-spells-and-potions/

// Approach 1
/*
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs;
        for(int i = 0; i < spells.size(); i++){
            int count = 0;
            for(int j = 0; j < potions.size(); j++){
                long long  tempOutput = (long) spells[i] * potions[j];
                if(tempOutput >= success){
                    count++;
                }
            }
            pairs.push_back(count);
        }
        return pairs;
    }
*/

// Approach 2 - Binary Search

/*
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs;
        sort(potions.begin(), potions.end());
        for(int i = 0; i < spells.size(); i++){
            int s = 0;
            int e = potions.size() - 1;
            int mid  = s + (e - s) / 2;
            while(s <= e){
                long long tempOutput = (long) spells[i] * potions[mid];
                if(tempOutput >= success){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
                mid  = s + (e - s) / 2;
            }
            pairs.push_back(potions.size() - s);
        }
        return pairs;
    }
*/