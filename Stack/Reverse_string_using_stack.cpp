#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "chauhan";
    stack<char> s;
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        s.pop();
        ans.push_back(ch);
    }
    cout << "Reversed string of \"" << str << "\" is \"" << ans <<"\"" <<  endl;
    return 0;
}