// https://leetcode.com/problems/largest-rectangle-in-histogram/description/

#include <bits/stdc++.h>
using namespace std;

// Here the below two functions are same as we see in Next_Smaller_Elements.cpp. Just the difference is that here we are taking indexes and there we were focusing on values
vector<int> nextSmallerElement(vector<int> heights, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i = n - 1; i >= 0; i--){
        while(st.top() != -1 && heights[st.top()] >= heights[i]){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> heights, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        while(st.top() != -1 && heights[st.top()] >= heights[i]){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> heights = {2,1,5,6,1,3};
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElement(heights, n);
    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

    int area = INT_MIN;
    for(int i = 0; i < n; i++){
        int l = heights[i];
        if(next[i] == -1){
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        
        int newArea = l*b;
        area = max(area, newArea);
    }
    cout << "Largest Rectangle Area in Histogram is: " << area << endl;
    return 0;
}