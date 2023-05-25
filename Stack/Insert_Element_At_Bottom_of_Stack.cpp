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

int main()
{
    stack<int> st;
    st.push(22);
    st.push(34);
    st.push(12);
    st.push(56);

    int element = 44;           // element to be inserted at the bottom of the stack
    insertAtBottom(st, element);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}