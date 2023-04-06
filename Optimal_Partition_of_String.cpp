// https://leetcode.com/problems/optimal-partition-of-string/
#include <bits/stdc++.h>
using namespace std;

int partitionString(string s) {
        int count = 1;
        set<char> st;
        for(int i = 0; i <s.size(); i++){
            if(st.find(s[i]) != st.end()){
                st.clear();
                count++;
            }
            st.insert(s[i]);
        }
        return count;
    }

int main(){
    string s = "abacaba";
    cout << partitionString(s);
    return 0;
}