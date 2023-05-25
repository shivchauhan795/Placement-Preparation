#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &st, int n, int count){
    
    if(count == n){
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();

    deleteMiddle(st, n, count+1);

    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
 
    int size = st.size();
    int count = 0;
    deleteMiddle(st, size/2, count);
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}