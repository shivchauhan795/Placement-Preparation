#include <bits/stdc++.h>
using namespace std;

int minCost(string s){
    stack<char> st;
    if(s.length() % 2 != 0){
        return -1;
    }
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch == '{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top() == '{'){     // remove valid expression
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    // stack contain invalid expression
        int a = 0, b = 0;   // 'b' is open bracket and 'a' is closed bracket
        while(!st.empty()){
            if(st.top() == '{'){
                b++;
            }
            else{
                a++;
            }
            st.pop();
        }
        int ans = (a+1)/2 + (b+1)/2;
        return ans;
}

int main()
{
    string s = "{{{}{{}{}{";
    cout << minCost(s) << endl;
    
    return 0;
}