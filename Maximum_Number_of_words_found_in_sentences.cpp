// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
/*
void checkWords(string sentences, int &maxi){
        int word = 1;
        for(int i = 0; i < sentences.size(); i++){
            if(sentences[i] == ' '){
                word++;
            }
        }
        maxi = word;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN;
        int ans = 0;
        for(int i = 0; i < sentences.size(); i++){
            checkWords(sentences[i], maxi);
            ans = max(maxi, ans);
        }
        return ans;
    }
*/