#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(temp);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();

    reverse(st);
    insertAtBottom(st, temp);
}

int main()
{
    stack<int> st;
    st.push(33);
    st.push(27);
    st.push(45);
    st.push(57);

    reverse(st);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}