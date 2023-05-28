// We have to find next smaller element for every element in the array.
// For eg:  [2,1,4,3] is an array then the output array will be -> [1,-1,3,-1]

/*
    Logic is that we traverse the given arr in reverse order and check each element to top element of the stack. If top() is smaller then, push top() into ans array and push element of the arr in stack, else pop till top is smaller and repeat the same.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 4, 3};
    
    stack<int> st;
    st.push(-1);
    vector<int> ans(arr.size());
    for(int i = arr.size() - 1; i >= 0; i--){
        while(st.top() >= arr[i]){
            st.pop();
        }
        ans[i] = st.top();
        st.push(arr[i]);
    }

    // printing array
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    } 
    
    return 0;
}