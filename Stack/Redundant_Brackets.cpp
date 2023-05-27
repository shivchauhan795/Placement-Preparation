// Extra brackets in an expression which are of no use are redundant. For eg:  ((a+b))   Here outer bracket are of no use. So tthey are redundant brackets.

#include <bits/stdc++.h>
using namespace std;

bool checkRedundant(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*'){
            st.push(ch);
        }
        else{
            // either lowercase alphabet (which is to be ignored) and ')' is encountered
            if(ch == ')'){
                bool isRedundant = true;
                while(st.top() != '('){
                    char topElement = st.top();
                    if(topElement == '+' || topElement == '-' || topElement == '/' || topElement == '*'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main()
{
    string s = "((a+b))";

    
    cout << checkRedundant(s);
    
    return 0;
}